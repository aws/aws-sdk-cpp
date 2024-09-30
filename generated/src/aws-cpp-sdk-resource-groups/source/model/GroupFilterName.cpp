/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/GroupFilterName.h>
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
      namespace GroupFilterNameMapper
      {

        static const int resource_type_HASH = HashingUtils::HashString("resource-type");
        static const int configuration_type_HASH = HashingUtils::HashString("configuration-type");
        static const int owner_HASH = HashingUtils::HashString("owner");
        static const int display_name_HASH = HashingUtils::HashString("display-name");
        static const int criticality_HASH = HashingUtils::HashString("criticality");


        GroupFilterName GetGroupFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == resource_type_HASH)
          {
            return GroupFilterName::resource_type;
          }
          else if (hashCode == configuration_type_HASH)
          {
            return GroupFilterName::configuration_type;
          }
          else if (hashCode == owner_HASH)
          {
            return GroupFilterName::owner;
          }
          else if (hashCode == display_name_HASH)
          {
            return GroupFilterName::display_name;
          }
          else if (hashCode == criticality_HASH)
          {
            return GroupFilterName::criticality;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupFilterName>(hashCode);
          }

          return GroupFilterName::NOT_SET;
        }

        Aws::String GetNameForGroupFilterName(GroupFilterName enumValue)
        {
          switch(enumValue)
          {
          case GroupFilterName::NOT_SET:
            return {};
          case GroupFilterName::resource_type:
            return "resource-type";
          case GroupFilterName::configuration_type:
            return "configuration-type";
          case GroupFilterName::owner:
            return "owner";
          case GroupFilterName::display_name:
            return "display-name";
          case GroupFilterName::criticality:
            return "criticality";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupFilterNameMapper
    } // namespace Model
  } // namespace ResourceGroups
} // namespace Aws
