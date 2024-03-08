/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GroupFilterAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace GroupFilterAttributeMapper
      {

        static const int GROUP_NAME_HASH = HashingUtils::HashString("GROUP_NAME");


        GroupFilterAttribute GetGroupFilterAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GROUP_NAME_HASH)
          {
            return GroupFilterAttribute::GROUP_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupFilterAttribute>(hashCode);
          }

          return GroupFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForGroupFilterAttribute(GroupFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case GroupFilterAttribute::NOT_SET:
            return {};
          case GroupFilterAttribute::GROUP_NAME:
            return "GROUP_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupFilterAttributeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
