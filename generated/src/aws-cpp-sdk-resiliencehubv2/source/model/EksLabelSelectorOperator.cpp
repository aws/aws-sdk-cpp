/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/EksLabelSelectorOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace EksLabelSelectorOperatorMapper {

static const int IN_HASH = HashingUtils::HashString("IN");
static const int NOT_IN_HASH = HashingUtils::HashString("NOT_IN");
static const int EXISTS_HASH = HashingUtils::HashString("EXISTS");
static const int DOES_NOT_EXIST_HASH = HashingUtils::HashString("DOES_NOT_EXIST");

EksLabelSelectorOperator GetEksLabelSelectorOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_HASH) {
    return EksLabelSelectorOperator::IN;
  } else if (hashCode == NOT_IN_HASH) {
    return EksLabelSelectorOperator::NOT_IN;
  } else if (hashCode == EXISTS_HASH) {
    return EksLabelSelectorOperator::EXISTS;
  } else if (hashCode == DOES_NOT_EXIST_HASH) {
    return EksLabelSelectorOperator::DOES_NOT_EXIST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EksLabelSelectorOperator>(hashCode);
  }

  return EksLabelSelectorOperator::NOT_SET;
}

Aws::String GetNameForEksLabelSelectorOperator(EksLabelSelectorOperator enumValue) {
  switch (enumValue) {
    case EksLabelSelectorOperator::NOT_SET:
      return {};
    case EksLabelSelectorOperator::IN:
      return "IN";
    case EksLabelSelectorOperator::NOT_IN:
      return "NOT_IN";
    case EksLabelSelectorOperator::EXISTS:
      return "EXISTS";
    case EksLabelSelectorOperator::DOES_NOT_EXIST:
      return "DOES_NOT_EXIST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EksLabelSelectorOperatorMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
