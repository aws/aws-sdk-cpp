/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class FillPolicy
  {
    NOT_SET,
    FULL_AVAIL_ONLY,
    PARTIAL_AVAIL
  };

namespace FillPolicyMapper
{
AWS_MEDIATAILOR_API FillPolicy GetFillPolicyForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForFillPolicy(FillPolicy value);
} // namespace FillPolicyMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
