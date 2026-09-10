/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class EksLabelSelectorOperator { NOT_SET, IN, NOT_IN, EXISTS, DOES_NOT_EXIST };

namespace EksLabelSelectorOperatorMapper {
AWS_RESILIENCEHUBV2_API EksLabelSelectorOperator GetEksLabelSelectorOperatorForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForEksLabelSelectorOperator(EksLabelSelectorOperator value);
}  // namespace EksLabelSelectorOperatorMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
