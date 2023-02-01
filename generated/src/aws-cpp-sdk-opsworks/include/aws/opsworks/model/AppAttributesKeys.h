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
  enum class AppAttributesKeys
  {
    NOT_SET,
    DocumentRoot,
    RailsEnv,
    AutoBundleOnDeploy,
    AwsFlowRubySettings
  };

namespace AppAttributesKeysMapper
{
AWS_OPSWORKS_API AppAttributesKeys GetAppAttributesKeysForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForAppAttributesKeys(AppAttributesKeys value);
} // namespace AppAttributesKeysMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
