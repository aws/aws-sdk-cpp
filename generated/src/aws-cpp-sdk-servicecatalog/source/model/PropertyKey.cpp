/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/PropertyKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace PropertyKeyMapper
      {

        static const int OWNER_HASH = HashingUtils::HashString("OWNER");
        static const int LAUNCH_ROLE_HASH = HashingUtils::HashString("LAUNCH_ROLE");


        PropertyKey GetPropertyKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OWNER_HASH)
          {
            return PropertyKey::OWNER;
          }
          else if (hashCode == LAUNCH_ROLE_HASH)
          {
            return PropertyKey::LAUNCH_ROLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PropertyKey>(hashCode);
          }

          return PropertyKey::NOT_SET;
        }

        Aws::String GetNameForPropertyKey(PropertyKey enumValue)
        {
          switch(enumValue)
          {
          case PropertyKey::OWNER:
            return "OWNER";
          case PropertyKey::LAUNCH_ROLE:
            return "LAUNCH_ROLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PropertyKeyMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
