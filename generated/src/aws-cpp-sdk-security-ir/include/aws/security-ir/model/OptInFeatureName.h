/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{
  enum class OptInFeatureName
  {
    NOT_SET,
    Triage
  };

namespace OptInFeatureNameMapper
{
AWS_SECURITYIR_API OptInFeatureName GetOptInFeatureNameForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForOptInFeatureName(OptInFeatureName value);
} // namespace OptInFeatureNameMapper
} // namespace Model
} // namespace SecurityIR
} // namespace Aws
