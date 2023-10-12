/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppImageConfigSortKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AppImageConfigSortKeyMapper
      {

        static constexpr uint32_t CreationTime_HASH = ConstExprHashingUtils::HashString("CreationTime");
        static constexpr uint32_t LastModifiedTime_HASH = ConstExprHashingUtils::HashString("LastModifiedTime");
        static constexpr uint32_t Name_HASH = ConstExprHashingUtils::HashString("Name");


        AppImageConfigSortKey GetAppImageConfigSortKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return AppImageConfigSortKey::CreationTime;
          }
          else if (hashCode == LastModifiedTime_HASH)
          {
            return AppImageConfigSortKey::LastModifiedTime;
          }
          else if (hashCode == Name_HASH)
          {
            return AppImageConfigSortKey::Name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppImageConfigSortKey>(hashCode);
          }

          return AppImageConfigSortKey::NOT_SET;
        }

        Aws::String GetNameForAppImageConfigSortKey(AppImageConfigSortKey enumValue)
        {
          switch(enumValue)
          {
          case AppImageConfigSortKey::NOT_SET:
            return {};
          case AppImageConfigSortKey::CreationTime:
            return "CreationTime";
          case AppImageConfigSortKey::LastModifiedTime:
            return "LastModifiedTime";
          case AppImageConfigSortKey::Name:
            return "Name";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppImageConfigSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
