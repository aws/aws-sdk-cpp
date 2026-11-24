/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53/model/ChangeHistoryOperation.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {
namespace ChangeHistoryOperationMapper {

static const int CreateHostedZone_HASH = HashingUtils::HashString("CreateHostedZone");
static const int DeleteHostedZone_HASH = HashingUtils::HashString("DeleteHostedZone");
static const int ChangeResourceRecordSets_HASH = HashingUtils::HashString("ChangeResourceRecordSets");

ChangeHistoryOperation GetChangeHistoryOperationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CreateHostedZone_HASH) {
    return ChangeHistoryOperation::CreateHostedZone;
  } else if (hashCode == DeleteHostedZone_HASH) {
    return ChangeHistoryOperation::DeleteHostedZone;
  } else if (hashCode == ChangeResourceRecordSets_HASH) {
    return ChangeHistoryOperation::ChangeResourceRecordSets;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChangeHistoryOperation>(hashCode);
  }

  return ChangeHistoryOperation::NOT_SET;
}

Aws::String GetNameForChangeHistoryOperation(ChangeHistoryOperation enumValue) {
  switch (enumValue) {
    case ChangeHistoryOperation::NOT_SET:
      return {};
    case ChangeHistoryOperation::CreateHostedZone:
      return "CreateHostedZone";
    case ChangeHistoryOperation::DeleteHostedZone:
      return "DeleteHostedZone";
    case ChangeHistoryOperation::ChangeResourceRecordSets:
      return "ChangeResourceRecordSets";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChangeHistoryOperationMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
