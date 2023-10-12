/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AppUnitErrorCategory.h>
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
      namespace AppUnitErrorCategoryMapper
      {

        static constexpr uint32_t CREDENTIAL_ERROR_HASH = ConstExprHashingUtils::HashString("CREDENTIAL_ERROR");
        static constexpr uint32_t CONNECTIVITY_ERROR_HASH = ConstExprHashingUtils::HashString("CONNECTIVITY_ERROR");
        static constexpr uint32_t PERMISSION_ERROR_HASH = ConstExprHashingUtils::HashString("PERMISSION_ERROR");
        static constexpr uint32_t UNSUPPORTED_ERROR_HASH = ConstExprHashingUtils::HashString("UNSUPPORTED_ERROR");
        static constexpr uint32_t OTHER_ERROR_HASH = ConstExprHashingUtils::HashString("OTHER_ERROR");


        AppUnitErrorCategory GetAppUnitErrorCategoryForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREDENTIAL_ERROR_HASH)
          {
            return AppUnitErrorCategory::CREDENTIAL_ERROR;
          }
          else if (hashCode == CONNECTIVITY_ERROR_HASH)
          {
            return AppUnitErrorCategory::CONNECTIVITY_ERROR;
          }
          else if (hashCode == PERMISSION_ERROR_HASH)
          {
            return AppUnitErrorCategory::PERMISSION_ERROR;
          }
          else if (hashCode == UNSUPPORTED_ERROR_HASH)
          {
            return AppUnitErrorCategory::UNSUPPORTED_ERROR;
          }
          else if (hashCode == OTHER_ERROR_HASH)
          {
            return AppUnitErrorCategory::OTHER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppUnitErrorCategory>(hashCode);
          }

          return AppUnitErrorCategory::NOT_SET;
        }

        Aws::String GetNameForAppUnitErrorCategory(AppUnitErrorCategory enumValue)
        {
          switch(enumValue)
          {
          case AppUnitErrorCategory::NOT_SET:
            return {};
          case AppUnitErrorCategory::CREDENTIAL_ERROR:
            return "CREDENTIAL_ERROR";
          case AppUnitErrorCategory::CONNECTIVITY_ERROR:
            return "CONNECTIVITY_ERROR";
          case AppUnitErrorCategory::PERMISSION_ERROR:
            return "PERMISSION_ERROR";
          case AppUnitErrorCategory::UNSUPPORTED_ERROR:
            return "UNSUPPORTED_ERROR";
          case AppUnitErrorCategory::OTHER_ERROR:
            return "OTHER_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppUnitErrorCategoryMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
