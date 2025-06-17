/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/SessionStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MPA
  {
    namespace Model
    {
      namespace SessionStatusCodeMapper
      {

        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int CONFIGURATION_CHANGED_HASH = HashingUtils::HashString("CONFIGURATION_CHANGED");


        SessionStatusCode GetSessionStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REJECTED_HASH)
          {
            return SessionStatusCode::REJECTED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return SessionStatusCode::EXPIRED;
          }
          else if (hashCode == CONFIGURATION_CHANGED_HASH)
          {
            return SessionStatusCode::CONFIGURATION_CHANGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionStatusCode>(hashCode);
          }

          return SessionStatusCode::NOT_SET;
        }

        Aws::String GetNameForSessionStatusCode(SessionStatusCode enumValue)
        {
          switch(enumValue)
          {
          case SessionStatusCode::NOT_SET:
            return {};
          case SessionStatusCode::REJECTED:
            return "REJECTED";
          case SessionStatusCode::EXPIRED:
            return "EXPIRED";
          case SessionStatusCode::CONFIGURATION_CHANGED:
            return "CONFIGURATION_CHANGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionStatusCodeMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws
