/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/ResaleAccountModel.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace ResaleAccountModelMapper {

static const int DISTRIBUTOR_HASH = HashingUtils::HashString("DISTRIBUTOR");
static const int END_CUSTOMER_HASH = HashingUtils::HashString("END_CUSTOMER");
static const int SOLUTION_PROVIDER_HASH = HashingUtils::HashString("SOLUTION_PROVIDER");

ResaleAccountModel GetResaleAccountModelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISTRIBUTOR_HASH) {
    return ResaleAccountModel::DISTRIBUTOR;
  } else if (hashCode == END_CUSTOMER_HASH) {
    return ResaleAccountModel::END_CUSTOMER;
  } else if (hashCode == SOLUTION_PROVIDER_HASH) {
    return ResaleAccountModel::SOLUTION_PROVIDER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResaleAccountModel>(hashCode);
  }

  return ResaleAccountModel::NOT_SET;
}

Aws::String GetNameForResaleAccountModel(ResaleAccountModel enumValue) {
  switch (enumValue) {
    case ResaleAccountModel::NOT_SET:
      return {};
    case ResaleAccountModel::DISTRIBUTOR:
      return "DISTRIBUTOR";
    case ResaleAccountModel::END_CUSTOMER:
      return "END_CUSTOMER";
    case ResaleAccountModel::SOLUTION_PROVIDER:
      return "SOLUTION_PROVIDER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResaleAccountModelMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
