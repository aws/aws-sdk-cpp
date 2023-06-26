/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/UserFilterType.h>
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
      namespace UserFilterTypeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int ACTIVE_PENDING_HASH = HashingUtils::HashString("ACTIVE_PENDING");


        UserFilterType GetUserFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return UserFilterType::ALL;
          }
          else if (hashCode == ACTIVE_PENDING_HASH)
          {
            return UserFilterType::ACTIVE_PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserFilterType>(hashCode);
          }

          return UserFilterType::NOT_SET;
        }

        Aws::String GetNameForUserFilterType(UserFilterType enumValue)
        {
          switch(enumValue)
          {
          case UserFilterType::ALL:
            return "ALL";
          case UserFilterType::ACTIVE_PENDING:
            return "ACTIVE_PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserFilterTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
