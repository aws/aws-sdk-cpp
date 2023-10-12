/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DeploymentCommandName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace DeploymentCommandNameMapper
      {

        static constexpr uint32_t install_dependencies_HASH = ConstExprHashingUtils::HashString("install_dependencies");
        static constexpr uint32_t update_dependencies_HASH = ConstExprHashingUtils::HashString("update_dependencies");
        static constexpr uint32_t update_custom_cookbooks_HASH = ConstExprHashingUtils::HashString("update_custom_cookbooks");
        static constexpr uint32_t execute_recipes_HASH = ConstExprHashingUtils::HashString("execute_recipes");
        static constexpr uint32_t configure_HASH = ConstExprHashingUtils::HashString("configure");
        static constexpr uint32_t setup_HASH = ConstExprHashingUtils::HashString("setup");
        static constexpr uint32_t deploy_HASH = ConstExprHashingUtils::HashString("deploy");
        static constexpr uint32_t rollback_HASH = ConstExprHashingUtils::HashString("rollback");
        static constexpr uint32_t start_HASH = ConstExprHashingUtils::HashString("start");
        static constexpr uint32_t stop_HASH = ConstExprHashingUtils::HashString("stop");
        static constexpr uint32_t restart_HASH = ConstExprHashingUtils::HashString("restart");
        static constexpr uint32_t undeploy_HASH = ConstExprHashingUtils::HashString("undeploy");


        DeploymentCommandName GetDeploymentCommandNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == install_dependencies_HASH)
          {
            return DeploymentCommandName::install_dependencies;
          }
          else if (hashCode == update_dependencies_HASH)
          {
            return DeploymentCommandName::update_dependencies;
          }
          else if (hashCode == update_custom_cookbooks_HASH)
          {
            return DeploymentCommandName::update_custom_cookbooks;
          }
          else if (hashCode == execute_recipes_HASH)
          {
            return DeploymentCommandName::execute_recipes;
          }
          else if (hashCode == configure_HASH)
          {
            return DeploymentCommandName::configure;
          }
          else if (hashCode == setup_HASH)
          {
            return DeploymentCommandName::setup;
          }
          else if (hashCode == deploy_HASH)
          {
            return DeploymentCommandName::deploy;
          }
          else if (hashCode == rollback_HASH)
          {
            return DeploymentCommandName::rollback;
          }
          else if (hashCode == start_HASH)
          {
            return DeploymentCommandName::start;
          }
          else if (hashCode == stop_HASH)
          {
            return DeploymentCommandName::stop;
          }
          else if (hashCode == restart_HASH)
          {
            return DeploymentCommandName::restart;
          }
          else if (hashCode == undeploy_HASH)
          {
            return DeploymentCommandName::undeploy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentCommandName>(hashCode);
          }

          return DeploymentCommandName::NOT_SET;
        }

        Aws::String GetNameForDeploymentCommandName(DeploymentCommandName enumValue)
        {
          switch(enumValue)
          {
          case DeploymentCommandName::NOT_SET:
            return {};
          case DeploymentCommandName::install_dependencies:
            return "install_dependencies";
          case DeploymentCommandName::update_dependencies:
            return "update_dependencies";
          case DeploymentCommandName::update_custom_cookbooks:
            return "update_custom_cookbooks";
          case DeploymentCommandName::execute_recipes:
            return "execute_recipes";
          case DeploymentCommandName::configure:
            return "configure";
          case DeploymentCommandName::setup:
            return "setup";
          case DeploymentCommandName::deploy:
            return "deploy";
          case DeploymentCommandName::rollback:
            return "rollback";
          case DeploymentCommandName::start:
            return "start";
          case DeploymentCommandName::stop:
            return "stop";
          case DeploymentCommandName::restart:
            return "restart";
          case DeploymentCommandName::undeploy:
            return "undeploy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentCommandNameMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
