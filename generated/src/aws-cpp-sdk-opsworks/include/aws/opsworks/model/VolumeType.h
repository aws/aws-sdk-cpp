/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{
  enum class VolumeType
  {
    NOT_SET,
    gp2,
    io1,
    standard
  };

namespace VolumeTypeMapper
{
AWS_OPSWORKS_API VolumeType GetVolumeTypeForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForVolumeType(VolumeType value);
} // namespace VolumeTypeMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
