/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/PrincipalType.h>
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
      namespace PrincipalTypeMapper
      {

        static constexpr uint32_t USER_HASH = ConstExprHashingUtils::HashString("USER");
        static constexpr uint32_t GROUP_HASH = ConstExprHashingUtils::HashString("GROUP");
        static constexpr uint32_t INVITE_HASH = ConstExprHashingUtils::HashString("INVITE");
        static constexpr uint32_t ANONYMOUS_HASH = ConstExprHashingUtils::HashString("ANONYMOUS");
        static constexpr uint32_t ORGANIZATION_HASH = ConstExprHashingUtils::HashString("ORGANIZATION");


        PrincipalType GetPrincipalTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return PrincipalType::USER;
          }
          else if (hashCode == GROUP_HASH)
          {
            return PrincipalType::GROUP;
          }
          else if (hashCode == INVITE_HASH)
          {
            return PrincipalType::INVITE;
          }
          else if (hashCode == ANONYMOUS_HASH)
          {
            return PrincipalType::ANONYMOUS;
          }
          else if (hashCode == ORGANIZATION_HASH)
          {
            return PrincipalType::ORGANIZATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrincipalType>(hashCode);
          }

          return PrincipalType::NOT_SET;
        }

        Aws::String GetNameForPrincipalType(PrincipalType enumValue)
        {
          switch(enumValue)
          {
          case PrincipalType::NOT_SET:
            return {};
          case PrincipalType::USER:
            return "USER";
          case PrincipalType::GROUP:
            return "GROUP";
          case PrincipalType::INVITE:
            return "INVITE";
          case PrincipalType::ANONYMOUS:
            return "ANONYMOUS";
          case PrincipalType::ORGANIZATION:
            return "ORGANIZATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrincipalTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
