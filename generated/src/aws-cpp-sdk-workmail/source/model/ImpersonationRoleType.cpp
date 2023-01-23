/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/ImpersonationRoleType.h>
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
      namespace ImpersonationRoleTypeMapper
      {

        static const int FULL_ACCESS_HASH = HashingUtils::HashString("FULL_ACCESS");
        static const int READ_ONLY_HASH = HashingUtils::HashString("READ_ONLY");


        ImpersonationRoleType GetImpersonationRoleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_ACCESS_HASH)
          {
            return ImpersonationRoleType::FULL_ACCESS;
          }
          else if (hashCode == READ_ONLY_HASH)
          {
            return ImpersonationRoleType::READ_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImpersonationRoleType>(hashCode);
          }

          return ImpersonationRoleType::NOT_SET;
        }

        Aws::String GetNameForImpersonationRoleType(ImpersonationRoleType enumValue)
        {
          switch(enumValue)
          {
          case ImpersonationRoleType::FULL_ACCESS:
            return "FULL_ACCESS";
          case ImpersonationRoleType::READ_ONLY:
            return "READ_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImpersonationRoleTypeMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
