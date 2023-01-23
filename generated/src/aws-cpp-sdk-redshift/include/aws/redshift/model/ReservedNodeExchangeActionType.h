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
  enum class ReservedNodeExchangeActionType
  {
    NOT_SET,
    restore_cluster,
    resize_cluster
  };

namespace ReservedNodeExchangeActionTypeMapper
{
AWS_REDSHIFT_API ReservedNodeExchangeActionType GetReservedNodeExchangeActionTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForReservedNodeExchangeActionType(ReservedNodeExchangeActionType value);
} // namespace ReservedNodeExchangeActionTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
