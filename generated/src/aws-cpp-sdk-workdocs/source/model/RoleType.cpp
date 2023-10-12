/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/RoleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace RoleTypeMapper
      {

        static constexpr uint32_t VIEWER_HASH = ConstExprHashingUtils::HashString("VIEWER");
        static constexpr uint32_t CONTRIBUTOR_HASH = ConstExprHashingUtils::HashString("CONTRIBUTOR");
        static constexpr uint32_t OWNER_HASH = ConstExprHashingUtils::HashString("OWNER");
        static constexpr uint32_t COOWNER_HASH = ConstExprHashingUtils::HashString("COOWNER");


        RoleType GetRoleTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VIEWER_HASH)
          {
            return RoleType::VIEWER;
          }
          else if (hashCode == CONTRIBUTOR_HASH)
          {
            return RoleType::CONTRIBUTOR;
          }
          else if (hashCode == OWNER_HASH)
          {
            return RoleType::OWNER;
          }
          else if (hashCode == COOWNER_HASH)
          {
            return RoleType::COOWNER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoleType>(hashCode);
          }

          return RoleType::NOT_SET;
        }

        Aws::String GetNameForRoleType(RoleType enumValue)
        {
          switch(enumValue)
          {
          case RoleType::NOT_SET:
            return {};
          case RoleType::VIEWER:
            return "VIEWER";
          case RoleType::CONTRIBUTOR:
            return "CONTRIBUTOR";
          case RoleType::OWNER:
            return "OWNER";
          case RoleType::COOWNER:
            return "COOWNER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoleTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
