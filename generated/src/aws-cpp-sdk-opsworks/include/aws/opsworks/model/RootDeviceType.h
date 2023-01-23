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
  enum class RootDeviceType
  {
    NOT_SET,
    ebs,
    instance_store
  };

namespace RootDeviceTypeMapper
{
AWS_OPSWORKS_API RootDeviceType GetRootDeviceTypeForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForRootDeviceType(RootDeviceType value);
} // namespace RootDeviceTypeMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
