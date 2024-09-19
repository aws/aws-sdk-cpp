/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/SessionSortBy.h>
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
      namespace SessionSortByMapper
      {

        static const int StartTimeAscending_HASH = HashingUtils::HashString("StartTimeAscending");
        static const int StartTimeDescending_HASH = HashingUtils::HashString("StartTimeDescending");


        SessionSortBy GetSessionSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == StartTimeAscending_HASH)
          {
            return SessionSortBy::StartTimeAscending;
          }
          else if (hashCode == StartTimeDescending_HASH)
          {
            return SessionSortBy::StartTimeDescending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionSortBy>(hashCode);
          }

          return SessionSortBy::NOT_SET;
        }

        Aws::String GetNameForSessionSortBy(SessionSortBy enumValue)
        {
          switch(enumValue)
          {
          case SessionSortBy::NOT_SET:
            return {};
          case SessionSortBy::StartTimeAscending:
            return "StartTimeAscending";
          case SessionSortBy::StartTimeDescending:
            return "StartTimeDescending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionSortByMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
