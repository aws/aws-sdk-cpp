/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SsmSap
{
namespace Model
{
  enum class ApplicationType
  {
    NOT_SET,
    HANA
  };

namespace ApplicationTypeMapper
{
AWS_SSMSAP_API ApplicationType GetApplicationTypeForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForApplicationType(ApplicationType value);
} // namespace ApplicationTypeMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
