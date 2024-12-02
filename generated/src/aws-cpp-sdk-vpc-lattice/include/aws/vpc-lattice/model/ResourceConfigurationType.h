/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{
  enum class ResourceConfigurationType
  {
    NOT_SET,
    GROUP,
    CHILD,
    SINGLE,
    ARN
  };

namespace ResourceConfigurationTypeMapper
{
AWS_VPCLATTICE_API ResourceConfigurationType GetResourceConfigurationTypeForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForResourceConfigurationType(ResourceConfigurationType value);
} // namespace ResourceConfigurationTypeMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
