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
  enum class Architecture
  {
    NOT_SET,
    x86_64,
    i386
  };

namespace ArchitectureMapper
{
AWS_OPSWORKS_API Architecture GetArchitectureForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForArchitecture(Architecture value);
} // namespace ArchitectureMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
