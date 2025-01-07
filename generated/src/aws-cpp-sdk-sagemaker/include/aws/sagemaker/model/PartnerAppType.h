/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class PartnerAppType
  {
    NOT_SET,
    lakera_guard,
    comet,
    deepchecks_llm_evaluation,
    fiddler
  };

namespace PartnerAppTypeMapper
{
AWS_SAGEMAKER_API PartnerAppType GetPartnerAppTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForPartnerAppType(PartnerAppType value);
} // namespace PartnerAppTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
