/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/EntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace EntityTypeMapper
      {

        static const int GROUP_HASH = HashingUtils::HashString("GROUP");
        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");


        EntityType GetEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GROUP_HASH)
          {
            return EntityType::GROUP;
          }
          else if (hashCode == USER_HASH)
          {
            return EntityType::USER;
          }
          else if (hashCode == RESOURCE_HASH)
          {
            return EntityType::RESOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityType>(hashCode);
          }

          return EntityType::NOT_SET;
        }

        Aws::String GetNameForEntityType(EntityType enumValue)
        {
          switch(enumValue)
          {
          case EntityType::NOT_SET:
            return {};
          case EntityType::GROUP:
            return "GROUP";
          case EntityType::USER:
            return "USER";
          case EntityType::RESOURCE:
            return "RESOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityTypeMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
