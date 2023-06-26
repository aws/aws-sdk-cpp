/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/PluginHealth.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubOrchestrator
  {
    namespace Model
    {
      namespace PluginHealthMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");


        PluginHealth GetPluginHealthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return PluginHealth::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return PluginHealth::UNHEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PluginHealth>(hashCode);
          }

          return PluginHealth::NOT_SET;
        }

        Aws::String GetNameForPluginHealth(PluginHealth enumValue)
        {
          switch(enumValue)
          {
          case PluginHealth::HEALTHY:
            return "HEALTHY";
          case PluginHealth::UNHEALTHY:
            return "UNHEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PluginHealthMapper
    } // namespace Model
  } // namespace MigrationHubOrchestrator
} // namespace Aws
