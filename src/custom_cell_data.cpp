#include "custom_cell_data.h"

void CustomCellData::set_custom_data_name(godot::String p_name) {
	/*M+M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M
  Summary: // TODO
  M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M-M*/
	custom_data_name = p_name;
}

godot::String CustomCellData::get_custom_data_name() const {
	/*M+M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M
  Summary: // TODO
  M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M-M*/
	return custom_data_name;
}

void CustomCellData::set_flags(uint32_t p_mask) {
	/*M+M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M
  Summary: // TODO
  M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M-M*/
	flags = p_mask;
}

uint32_t CustomCellData::get_flags() const {
	/*M+M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M
  Summary: // TODO
  M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M-M*/
	return flags;
}

void CustomCellData::set_collision_layer(uint32_t p_layer) {
	/*M+M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M
  Summary: // TODO
  M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M-M*/
	collision_layer = p_layer;
}

uint32_t CustomCellData::get_collision_layer() const {
	/*M+M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M
  Summary: // TODO
  M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M-M*/
	return collision_layer;
}

void CustomCellData::set_custom_color_enabled(bool p_enabled){
	/*M+M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M
  Summary: // TODO
  M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M-M*/
  custom_color_enabled = p_enabled;
}

bool CustomCellData::get_custom_color_enabled() const{
	/*M+M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M
  Summary: // TODO
  M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M-M*/
  return custom_color_enabled;
}

void CustomCellData::set_color(const godot::Color &p_color) {
	/*M+M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M
  Summary: // TODO
  M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M-M*/
	color = p_color;
}

godot::Color CustomCellData::get_color() const {
	/*M+M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M
  Summary: // TODO
  M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M-M*/
	return color;
}

void CustomCellData::_bind_methods() {
	/*M+M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M+++M
  Summary: // TODO
  M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M---M-M*/

	godot::ClassDB::bind_method(godot::D_METHOD("set_custom_data_name", "name"), &CustomCellData::set_custom_data_name);
	godot::ClassDB::bind_method(godot::D_METHOD("get_custom_data_name"), &CustomCellData::get_custom_data_name);

	godot::ClassDB::bind_method(godot::D_METHOD("set_flags", "mask"), &CustomCellData::set_flags);
	godot::ClassDB::bind_method(godot::D_METHOD("get_flags"), &CustomCellData::get_flags);

	godot::ClassDB::bind_method(godot::D_METHOD("set_collision_layer", "mask"), &CustomCellData::set_collision_layer);
	godot::ClassDB::bind_method(godot::D_METHOD("get_collision_layer"), &CustomCellData::get_collision_layer);
	
	godot::ClassDB::bind_method(godot::D_METHOD("set_custom_color_enabled", "use_custom_color"), &CustomCellData::set_custom_color_enabled);
	godot::ClassDB::bind_method(godot::D_METHOD("get_custom_color_enabled"), &CustomCellData::get_custom_color_enabled);

	godot::ClassDB::bind_method(godot::D_METHOD("set_color", "color"), &CustomCellData::set_color);
	godot::ClassDB::bind_method(godot::D_METHOD("get_color"), &CustomCellData::get_color);

	ADD_PROPERTY(godot::PropertyInfo(godot::Variant::STRING, "custom_data_name"), "set_custom_data_name", "get_custom_data_name");
	ADD_PROPERTY(godot::PropertyInfo(godot::Variant::INT, "flags", godot::PROPERTY_HINT_LAYERS_3D_PHYSICS), "set_flags", "get_flags");
	ADD_PROPERTY(godot::PropertyInfo(godot::Variant::INT, "collision_layer", godot::PROPERTY_HINT_LAYERS_3D_PHYSICS), "set_collision_layer", "get_collision_layer");
	ADD_PROPERTY(godot::PropertyInfo(godot::Variant::BOOL, "use_custom_color"), "set_custom_color_enabled", "get_custom_color_enabled");
	ADD_PROPERTY(godot::PropertyInfo(godot::Variant::COLOR, "flags_color"), "set_color", "get_color");
}

CustomCellData::CustomCellData() {}

CustomCellData::~CustomCellData() {}