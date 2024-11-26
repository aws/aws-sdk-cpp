/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/PrincipalOutputUserTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QApps
  {
    namespace Model
    {
      namespace PrincipalOutputUserTypeEnumMapper
      {

        static const int owner_HASH = HashingUtils::HashString("owner");
        static const int user_HASH = HashingUtils::HashString("user");


        PrincipalOutputUserTypeEnum GetPrincipalOutputUserTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == owner_HASH)
          {
            return PrincipalOutputUserTypeEnum::owner;
          }
          else if (hashCode == user_HASH)
          {
            return PrincipalOutputUserTypeEnum::user;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrincipalOutputUserTypeEnum>(hashCode);
          }

          return PrincipalOutputUserTypeEnum::NOT_SET;
        }

        Aws::String GetNameForPrincipalOutputUserTypeEnum(PrincipalOutputUserTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case PrincipalOutputUserTypeEnum::NOT_SET:
            return {};
          case PrincipalOutputUserTypeEnum::owner:
            return "owner";
          case PrincipalOutputUserTypeEnum::user:
            return "user";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrincipalOutputUserTypeEnumMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws
