/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm/model/Provider.h>

using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {
namespace ProviderMapper {

static const int Azure_HASH = HashingUtils::HashString("Azure");
static const int GCP_HASH = HashingUtils::HashString("GCP");

Provider GetProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Azure_HASH) {
    return Provider::Azure;
  } else if (hashCode == GCP_HASH) {
    return Provider::GCP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Provider>(hashCode);
  }

  return Provider::NOT_SET;
}

Aws::String GetNameForProvider(Provider enumValue) {
  switch (enumValue) {
    case Provider::NOT_SET:
      return {};
    case Provider::Azure:
      return "Azure";
    case Provider::GCP:
      return "GCP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProviderMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
