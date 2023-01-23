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
  enum class VirtualizationType
  {
    NOT_SET,
    paravirtual,
    hvm
  };

namespace VirtualizationTypeMapper
{
AWS_OPSWORKS_API VirtualizationType GetVirtualizationTypeForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForVirtualizationType(VirtualizationType value);
} // namespace VirtualizationTypeMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
