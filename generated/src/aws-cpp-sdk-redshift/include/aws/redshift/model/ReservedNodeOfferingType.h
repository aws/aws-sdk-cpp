/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class ReservedNodeOfferingType
  {
    NOT_SET,
    Regular,
    Upgradable
  };

namespace ReservedNodeOfferingTypeMapper
{
AWS_REDSHIFT_API ReservedNodeOfferingType GetReservedNodeOfferingTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForReservedNodeOfferingType(ReservedNodeOfferingType value);
} // namespace ReservedNodeOfferingTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
