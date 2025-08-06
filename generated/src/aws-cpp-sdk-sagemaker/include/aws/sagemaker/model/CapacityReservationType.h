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
  enum class CapacityReservationType
  {
    NOT_SET,
    ODCR,
    CRG
  };

namespace CapacityReservationTypeMapper
{
AWS_SAGEMAKER_API CapacityReservationType GetCapacityReservationTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCapacityReservationType(CapacityReservationType value);
} // namespace CapacityReservationTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
