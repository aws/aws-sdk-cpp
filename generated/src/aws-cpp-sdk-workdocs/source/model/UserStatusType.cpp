/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/UserStatusType.h>
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
      namespace UserStatusTypeMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");


        UserStatusType GetUserStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return UserStatusType::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return UserStatusType::INACTIVE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return UserStatusType::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserStatusType>(hashCode);
          }

          return UserStatusType::NOT_SET;
        }

        Aws::String GetNameForUserStatusType(UserStatusType enumValue)
        {
          switch(enumValue)
          {
          case UserStatusType::NOT_SET:
            return {};
          case UserStatusType::ACTIVE:
            return "ACTIVE";
          case UserStatusType::INACTIVE:
            return "INACTIVE";
          case UserStatusType::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserStatusTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
