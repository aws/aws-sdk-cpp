/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ResourceSubType.h>
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
      namespace ResourceSubTypeMapper
      {

        static const int Database_HASH = HashingUtils::HashString("Database");
        static const int Process_HASH = HashingUtils::HashString("Process");
        static const int DatabaseProcess_HASH = HashingUtils::HashString("DatabaseProcess");


        ResourceSubType GetResourceSubTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Database_HASH)
          {
            return ResourceSubType::Database;
          }
          else if (hashCode == Process_HASH)
          {
            return ResourceSubType::Process;
          }
          else if (hashCode == DatabaseProcess_HASH)
          {
            return ResourceSubType::DatabaseProcess;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceSubType>(hashCode);
          }

          return ResourceSubType::NOT_SET;
        }

        Aws::String GetNameForResourceSubType(ResourceSubType enumValue)
        {
          switch(enumValue)
          {
          case ResourceSubType::NOT_SET:
            return {};
          case ResourceSubType::Database:
            return "Database";
          case ResourceSubType::Process:
            return "Process";
          case ResourceSubType::DatabaseProcess:
            return "DatabaseProcess";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceSubTypeMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
