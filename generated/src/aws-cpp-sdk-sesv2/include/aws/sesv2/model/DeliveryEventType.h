/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class DeliveryEventType
  {
    NOT_SET,
    SEND,
    DELIVERY,
    TRANSIENT_BOUNCE,
    PERMANENT_BOUNCE,
    UNDETERMINED_BOUNCE,
    COMPLAINT
  };

namespace DeliveryEventTypeMapper
{
AWS_SESV2_API DeliveryEventType GetDeliveryEventTypeForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForDeliveryEventType(DeliveryEventType value);
} // namespace DeliveryEventTypeMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
