/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/AwsPartition.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace AwsPartitionMapper {

static const int aws_eusc_HASH = HashingUtils::HashString("aws-eusc");

AwsPartition GetAwsPartitionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == aws_eusc_HASH) {
    return AwsPartition::aws_eusc;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AwsPartition>(hashCode);
  }

  return AwsPartition::NOT_SET;
}

Aws::String GetNameForAwsPartition(AwsPartition enumValue) {
  switch (enumValue) {
    case AwsPartition::NOT_SET:
      return {};
    case AwsPartition::aws_eusc:
      return "aws-eusc";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AwsPartitionMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
