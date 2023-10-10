﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/VersionControl.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace VersionControlMapper
      {

        static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");
        static const int GITHUB_ENTERPRISE_HASH = HashingUtils::HashString("GITHUB_ENTERPRISE");
        static const int AZURE_DEVOPS_GIT_HASH = HashingUtils::HashString("AZURE_DEVOPS_GIT");


        VersionControl GetVersionControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GITHUB_HASH)
          {
            return VersionControl::GITHUB;
          }
          else if (hashCode == GITHUB_ENTERPRISE_HASH)
          {
            return VersionControl::GITHUB_ENTERPRISE;
          }
          else if (hashCode == AZURE_DEVOPS_GIT_HASH)
          {
            return VersionControl::AZURE_DEVOPS_GIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VersionControl>(hashCode);
          }

          return VersionControl::NOT_SET;
        }

        Aws::String GetNameForVersionControl(VersionControl enumValue)
        {
          switch(enumValue)
          {
          case VersionControl::NOT_SET:
            return {};
          case VersionControl::GITHUB:
            return "GITHUB";
          case VersionControl::GITHUB_ENTERPRISE:
            return "GITHUB_ENTERPRISE";
          case VersionControl::AZURE_DEVOPS_GIT:
            return "AZURE_DEVOPS_GIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VersionControlMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
