/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/PipelineManagedBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace PipelineManagedByMapper {

static const int AWS_HASH = HashingUtils::HashString("AWS");
static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");

PipelineManagedBy GetPipelineManagedByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_HASH) {
    return PipelineManagedBy::AWS;
  } else if (hashCode == CUSTOMER_HASH) {
    return PipelineManagedBy::CUSTOMER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PipelineManagedBy>(hashCode);
  }

  return PipelineManagedBy::NOT_SET;
}

Aws::String GetNameForPipelineManagedBy(PipelineManagedBy enumValue) {
  switch (enumValue) {
    case PipelineManagedBy::NOT_SET:
      return {};
    case PipelineManagedBy::AWS:
      return "AWS";
    case PipelineManagedBy::CUSTOMER:
      return "CUSTOMER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PipelineManagedByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
