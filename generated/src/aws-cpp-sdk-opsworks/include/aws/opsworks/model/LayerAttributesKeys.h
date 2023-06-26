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
  enum class LayerAttributesKeys
  {
    NOT_SET,
    EcsClusterArn,
    EnableHaproxyStats,
    HaproxyStatsUrl,
    HaproxyStatsUser,
    HaproxyStatsPassword,
    HaproxyHealthCheckUrl,
    HaproxyHealthCheckMethod,
    MysqlRootPassword,
    MysqlRootPasswordUbiquitous,
    GangliaUrl,
    GangliaUser,
    GangliaPassword,
    MemcachedMemory,
    NodejsVersion,
    RubyVersion,
    RubygemsVersion,
    ManageBundler,
    BundlerVersion,
    RailsStack,
    PassengerVersion,
    Jvm,
    JvmVersion,
    JvmOptions,
    JavaAppServer,
    JavaAppServerVersion
  };

namespace LayerAttributesKeysMapper
{
AWS_OPSWORKS_API LayerAttributesKeys GetLayerAttributesKeysForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForLayerAttributesKeys(LayerAttributesKeys value);
} // namespace LayerAttributesKeysMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
