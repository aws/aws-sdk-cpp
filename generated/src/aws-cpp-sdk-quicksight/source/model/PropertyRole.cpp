/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PropertyRole.h>
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
      namespace PropertyRoleMapper
      {

        static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
        static const int ID_HASH = HashingUtils::HashString("ID");


        PropertyRole GetPropertyRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARY_HASH)
          {
            return PropertyRole::PRIMARY;
          }
          else if (hashCode == ID_HASH)
          {
            return PropertyRole::ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PropertyRole>(hashCode);
          }

          return PropertyRole::NOT_SET;
        }

        Aws::String GetNameForPropertyRole(PropertyRole enumValue)
        {
          switch(enumValue)
          {
          case PropertyRole::NOT_SET:
            return {};
          case PropertyRole::PRIMARY:
            return "PRIMARY";
          case PropertyRole::ID:
            return "ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PropertyRoleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
