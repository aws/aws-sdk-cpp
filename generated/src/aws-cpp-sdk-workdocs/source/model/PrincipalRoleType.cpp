/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/PrincipalRoleType.h>
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
      namespace PrincipalRoleTypeMapper
      {

        static constexpr uint32_t VIEWER_HASH = ConstExprHashingUtils::HashString("VIEWER");
        static constexpr uint32_t CONTRIBUTOR_HASH = ConstExprHashingUtils::HashString("CONTRIBUTOR");
        static constexpr uint32_t OWNER_HASH = ConstExprHashingUtils::HashString("OWNER");
        static constexpr uint32_t COOWNER_HASH = ConstExprHashingUtils::HashString("COOWNER");


        PrincipalRoleType GetPrincipalRoleTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VIEWER_HASH)
          {
            return PrincipalRoleType::VIEWER;
          }
          else if (hashCode == CONTRIBUTOR_HASH)
          {
            return PrincipalRoleType::CONTRIBUTOR;
          }
          else if (hashCode == OWNER_HASH)
          {
            return PrincipalRoleType::OWNER;
          }
          else if (hashCode == COOWNER_HASH)
          {
            return PrincipalRoleType::COOWNER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrincipalRoleType>(hashCode);
          }

          return PrincipalRoleType::NOT_SET;
        }

        Aws::String GetNameForPrincipalRoleType(PrincipalRoleType enumValue)
        {
          switch(enumValue)
          {
          case PrincipalRoleType::NOT_SET:
            return {};
          case PrincipalRoleType::VIEWER:
            return "VIEWER";
          case PrincipalRoleType::CONTRIBUTOR:
            return "CONTRIBUTOR";
          case PrincipalRoleType::OWNER:
            return "OWNER";
          case PrincipalRoleType::COOWNER:
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

      } // namespace PrincipalRoleTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
