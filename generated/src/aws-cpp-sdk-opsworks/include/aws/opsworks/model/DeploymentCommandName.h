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
  enum class DeploymentCommandName
  {
    NOT_SET,
    install_dependencies,
    update_dependencies,
    update_custom_cookbooks,
    execute_recipes,
    configure,
    setup,
    deploy,
    rollback,
    start,
    stop,
    restart,
    undeploy
  };

namespace DeploymentCommandNameMapper
{
AWS_OPSWORKS_API DeploymentCommandName GetDeploymentCommandNameForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForDeploymentCommandName(DeploymentCommandName value);
} // namespace DeploymentCommandNameMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
