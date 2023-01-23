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

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int LastModifiedTime_HASH = HashingUtils::HashString("LastModifiedTime");
        static const int Name_HASH = HashingUtils::HashString("Name");


        AppImageConfigSortKey GetAppImageConfigSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
