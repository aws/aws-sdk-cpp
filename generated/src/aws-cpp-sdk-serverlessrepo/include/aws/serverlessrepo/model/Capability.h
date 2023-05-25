/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{
  enum class Capability
  {
    NOT_SET,
    CAPABILITY_IAM,
    CAPABILITY_NAMED_IAM,
    CAPABILITY_AUTO_EXPAND,
    CAPABILITY_RESOURCE_POLICY
  };

namespace CapabilityMapper
{
AWS_SERVERLESSAPPLICATIONREPOSITORY_API Capability GetCapabilityForName(const Aws::String& name);

AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::String GetNameForCapability(Capability value);
} // namespace CapabilityMapper
} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
