/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StudioLifecycleConfigSortKey.h>
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
      namespace StudioLifecycleConfigSortKeyMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int LastModifiedTime_HASH = HashingUtils::HashString("LastModifiedTime");
        static const int Name_HASH = HashingUtils::HashString("Name");


        StudioLifecycleConfigSortKey GetStudioLifecycleConfigSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return StudioLifecycleConfigSortKey::CreationTime;
          }
          else if (hashCode == LastModifiedTime_HASH)
          {
            return StudioLifecycleConfigSortKey::LastModifiedTime;
          }
          else if (hashCode == Name_HASH)
          {
            return StudioLifecycleConfigSortKey::Name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StudioLifecycleConfigSortKey>(hashCode);
          }

          return StudioLifecycleConfigSortKey::NOT_SET;
        }

        Aws::String GetNameForStudioLifecycleConfigSortKey(StudioLifecycleConfigSortKey enumValue)
        {
          switch(enumValue)
          {
          case StudioLifecycleConfigSortKey::NOT_SET:
            return {};
          case StudioLifecycleConfigSortKey::CreationTime:
            return "CreationTime";
          case StudioLifecycleConfigSortKey::LastModifiedTime:
            return "LastModifiedTime";
          case StudioLifecycleConfigSortKey::Name:
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

      } // namespace StudioLifecycleConfigSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
