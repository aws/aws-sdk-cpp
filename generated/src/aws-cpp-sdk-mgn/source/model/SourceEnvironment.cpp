/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/SourceEnvironment.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace SourceEnvironmentMapper {

static const int NSX_HASH = HashingUtils::HashString("NSX");
static const int VSPHERE_HASH = HashingUtils::HashString("VSPHERE");
static const int FORTIGATE_FIREWALL_HASH = HashingUtils::HashString("FORTIGATE_FIREWALL");
static const int PALO_ALTO_FIREWALL_HASH = HashingUtils::HashString("PALO_ALTO_FIREWALL");
static const int CISCO_ACI_HASH = HashingUtils::HashString("CISCO_ACI");
static const int LOGICAL_MODEL_HASH = HashingUtils::HashString("LOGICAL_MODEL");
static const int MODELIZE_IT_HASH = HashingUtils::HashString("MODELIZE_IT");

SourceEnvironment GetSourceEnvironmentForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NSX_HASH) {
    return SourceEnvironment::NSX;
  } else if (hashCode == VSPHERE_HASH) {
    return SourceEnvironment::VSPHERE;
  } else if (hashCode == FORTIGATE_FIREWALL_HASH) {
    return SourceEnvironment::FORTIGATE_FIREWALL;
  } else if (hashCode == PALO_ALTO_FIREWALL_HASH) {
    return SourceEnvironment::PALO_ALTO_FIREWALL;
  } else if (hashCode == CISCO_ACI_HASH) {
    return SourceEnvironment::CISCO_ACI;
  } else if (hashCode == LOGICAL_MODEL_HASH) {
    return SourceEnvironment::LOGICAL_MODEL;
  } else if (hashCode == MODELIZE_IT_HASH) {
    return SourceEnvironment::MODELIZE_IT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceEnvironment>(hashCode);
  }

  return SourceEnvironment::NOT_SET;
}

Aws::String GetNameForSourceEnvironment(SourceEnvironment enumValue) {
  switch (enumValue) {
    case SourceEnvironment::NOT_SET:
      return {};
    case SourceEnvironment::NSX:
      return "NSX";
    case SourceEnvironment::VSPHERE:
      return "VSPHERE";
    case SourceEnvironment::FORTIGATE_FIREWALL:
      return "FORTIGATE_FIREWALL";
    case SourceEnvironment::PALO_ALTO_FIREWALL:
      return "PALO_ALTO_FIREWALL";
    case SourceEnvironment::CISCO_ACI:
      return "CISCO_ACI";
    case SourceEnvironment::LOGICAL_MODEL:
      return "LOGICAL_MODEL";
    case SourceEnvironment::MODELIZE_IT:
      return "MODELIZE_IT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceEnvironmentMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
