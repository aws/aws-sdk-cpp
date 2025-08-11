/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/UserBackgroundSessionApplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSOAdmin
  {
    namespace Model
    {
      namespace UserBackgroundSessionApplicationStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        UserBackgroundSessionApplicationStatus GetUserBackgroundSessionApplicationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return UserBackgroundSessionApplicationStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return UserBackgroundSessionApplicationStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserBackgroundSessionApplicationStatus>(hashCode);
          }

          return UserBackgroundSessionApplicationStatus::NOT_SET;
        }

        Aws::String GetNameForUserBackgroundSessionApplicationStatus(UserBackgroundSessionApplicationStatus enumValue)
        {
          switch(enumValue)
          {
          case UserBackgroundSessionApplicationStatus::NOT_SET:
            return {};
          case UserBackgroundSessionApplicationStatus::ENABLED:
            return "ENABLED";
          case UserBackgroundSessionApplicationStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserBackgroundSessionApplicationStatusMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
