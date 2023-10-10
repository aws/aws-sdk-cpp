/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SortLineageGroupsBy.h>
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
      namespace SortLineageGroupsByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        SortLineageGroupsBy GetSortLineageGroupsByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return SortLineageGroupsBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return SortLineageGroupsBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortLineageGroupsBy>(hashCode);
          }

          return SortLineageGroupsBy::NOT_SET;
        }

        Aws::String GetNameForSortLineageGroupsBy(SortLineageGroupsBy enumValue)
        {
          switch(enumValue)
          {
          case SortLineageGroupsBy::NOT_SET:
            return {};
          case SortLineageGroupsBy::Name:
            return "Name";
          case SortLineageGroupsBy::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortLineageGroupsByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
