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
  enum class LayerType
  {
    NOT_SET,
    aws_flow_ruby,
    ecs_cluster,
    java_app,
    lb,
    web,
    php_app,
    rails_app,
    nodejs_app,
    memcached,
    db_master,
    monitoring_master,
    custom
  };

namespace LayerTypeMapper
{
AWS_OPSWORKS_API LayerType GetLayerTypeForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForLayerType(LayerType value);
} // namespace LayerTypeMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
