/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{
  enum class Origination
  {
    NOT_SET,
    ALLOW,
    DENY
  };

namespace OriginationMapper
{
AWS_MEDIAPACKAGE_API Origination GetOriginationForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameForOrigination(Origination value);
} // namespace OriginationMapper
} // namespace Model
} // namespace MediaPackage
} // namespace Aws
