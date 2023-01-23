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
  enum class AquaStatus
  {
    NOT_SET,
    enabled,
    disabled,
    applying
  };

namespace AquaStatusMapper
{
AWS_REDSHIFT_API AquaStatus GetAquaStatusForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForAquaStatus(AquaStatus value);
} // namespace AquaStatusMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
