/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/SessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesWeb
  {
    namespace Model
    {
      namespace SessionStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Terminated_HASH = HashingUtils::HashString("Terminated");


        SessionStatus GetSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return SessionStatus::Active;
          }
          else if (hashCode == Terminated_HASH)
          {
            return SessionStatus::Terminated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionStatus>(hashCode);
          }

          return SessionStatus::NOT_SET;
        }

        Aws::String GetNameForSessionStatus(SessionStatus enumValue)
        {
          switch(enumValue)
          {
          case SessionStatus::NOT_SET:
            return {};
          case SessionStatus::Active:
            return "Active";
          case SessionStatus::Terminated:
            return "Terminated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionStatusMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
