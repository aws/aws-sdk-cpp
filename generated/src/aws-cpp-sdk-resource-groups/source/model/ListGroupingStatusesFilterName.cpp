/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/ListGroupingStatusesFilterName.h>
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
      namespace ListGroupingStatusesFilterNameMapper
      {

        static const int status_HASH = HashingUtils::HashString("status");
        static const int resource_arn_HASH = HashingUtils::HashString("resource-arn");


        ListGroupingStatusesFilterName GetListGroupingStatusesFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == status_HASH)
          {
            return ListGroupingStatusesFilterName::status;
          }
          else if (hashCode == resource_arn_HASH)
          {
            return ListGroupingStatusesFilterName::resource_arn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListGroupingStatusesFilterName>(hashCode);
          }

          return ListGroupingStatusesFilterName::NOT_SET;
        }

        Aws::String GetNameForListGroupingStatusesFilterName(ListGroupingStatusesFilterName enumValue)
        {
          switch(enumValue)
          {
          case ListGroupingStatusesFilterName::NOT_SET:
            return {};
          case ListGroupingStatusesFilterName::status:
            return "status";
          case ListGroupingStatusesFilterName::resource_arn:
            return "resource-arn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListGroupingStatusesFilterNameMapper
    } // namespace Model
  } // namespace ResourceGroups
} // namespace Aws
