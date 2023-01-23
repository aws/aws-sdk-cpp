/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/GroupByAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceGroupsTaggingAPI
  {
    namespace Model
    {
      namespace GroupByAttributeMapper
      {

        static const int TARGET_ID_HASH = HashingUtils::HashString("TARGET_ID");
        static const int REGION_HASH = HashingUtils::HashString("REGION");
        static const int RESOURCE_TYPE_HASH = HashingUtils::HashString("RESOURCE_TYPE");


        GroupByAttribute GetGroupByAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TARGET_ID_HASH)
          {
            return GroupByAttribute::TARGET_ID;
          }
          else if (hashCode == REGION_HASH)
          {
            return GroupByAttribute::REGION;
          }
          else if (hashCode == RESOURCE_TYPE_HASH)
          {
            return GroupByAttribute::RESOURCE_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupByAttribute>(hashCode);
          }

          return GroupByAttribute::NOT_SET;
        }

        Aws::String GetNameForGroupByAttribute(GroupByAttribute enumValue)
        {
          switch(enumValue)
          {
          case GroupByAttribute::TARGET_ID:
            return "TARGET_ID";
          case GroupByAttribute::REGION:
            return "REGION";
          case GroupByAttribute::RESOURCE_TYPE:
            return "RESOURCE_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupByAttributeMapper
    } // namespace Model
  } // namespace ResourceGroupsTaggingAPI
} // namespace Aws
