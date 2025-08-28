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
  enum class ConfigurationCheckType
  {
    NOT_SET,
    SAP_CHECK_01,
    SAP_CHECK_02,
    SAP_CHECK_03
  };

namespace ConfigurationCheckTypeMapper
{
AWS_SSMSAP_API ConfigurationCheckType GetConfigurationCheckTypeForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForConfigurationCheckType(ConfigurationCheckType value);
} // namespace ConfigurationCheckTypeMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
