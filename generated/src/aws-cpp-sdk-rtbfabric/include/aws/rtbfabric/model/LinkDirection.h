/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RTBFabric
{
namespace Model
{
  enum class LinkDirection
  {
    NOT_SET,
    RESPONSE,
    REQUEST
  };

namespace LinkDirectionMapper
{
AWS_RTBFABRIC_API LinkDirection GetLinkDirectionForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForLinkDirection(LinkDirection value);
} // namespace LinkDirectionMapper
} // namespace Model
} // namespace RTBFabric
} // namespace Aws
