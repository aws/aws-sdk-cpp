/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{
  enum class ScteFilter
  {
    NOT_SET,
    SPLICE_INSERT,
    BREAK,
    PROVIDER_ADVERTISEMENT,
    DISTRIBUTOR_ADVERTISEMENT,
    PROVIDER_PLACEMENT_OPPORTUNITY,
    DISTRIBUTOR_PLACEMENT_OPPORTUNITY,
    PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY,
    DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY,
    PROGRAM
  };

namespace ScteFilterMapper
{
AWS_MEDIAPACKAGEV2_API ScteFilter GetScteFilterForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForScteFilter(ScteFilter value);
} // namespace ScteFilterMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
