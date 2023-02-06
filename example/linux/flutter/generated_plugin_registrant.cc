//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <hyper_pay/hyper_pay_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) hyper_pay_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "HyperPayPlugin");
  hyper_pay_plugin_register_with_registrar(hyper_pay_registrar);
}
