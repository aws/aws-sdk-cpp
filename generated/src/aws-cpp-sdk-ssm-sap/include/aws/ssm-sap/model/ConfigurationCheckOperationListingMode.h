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
  enum class ConfigurationCheckOperationListingMode
  {
    NOT_SET,
    ALL_OPERATIONS,
    LATEST_PER_CHECK
  };

namespace ConfigurationCheckOperationListingModeMapper
{
AWS_SSMSAP_API ConfigurationCheckOperationListingMode GetConfigurationCheckOperationListingModeForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForConfigurationCheckOperationListingMode(ConfigurationCheckOperationListingMode value);
} // namespace ConfigurationCheckOperationListingModeMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
