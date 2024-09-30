/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/GroupingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceGroups
  {
    namespace Model
    {
      namespace GroupingTypeMapper
      {

        static const int GROUP_HASH = HashingUtils::HashString("GROUP");
        static const int UNGROUP_HASH = HashingUtils::HashString("UNGROUP");


        GroupingType GetGroupingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GROUP_HASH)
          {
            return GroupingType::GROUP;
          }
          else if (hashCode == UNGROUP_HASH)
          {
            return GroupingType::UNGROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupingType>(hashCode);
          }

          return GroupingType::NOT_SET;
        }

        Aws::String GetNameForGroupingType(GroupingType enumValue)
        {
          switch(enumValue)
          {
          case GroupingType::NOT_SET:
            return {};
          case GroupingType::GROUP:
            return "GROUP";
          case GroupingType::UNGROUP:
            return "UNGROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupingTypeMapper
    } // namespace Model
  } // namespace ResourceGroups
} // namespace Aws
