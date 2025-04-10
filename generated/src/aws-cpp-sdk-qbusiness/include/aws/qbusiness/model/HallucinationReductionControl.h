/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class HallucinationReductionControl
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace HallucinationReductionControlMapper
{
AWS_QBUSINESS_API HallucinationReductionControl GetHallucinationReductionControlForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForHallucinationReductionControl(HallucinationReductionControl value);
} // namespace HallucinationReductionControlMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
