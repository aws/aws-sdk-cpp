/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/SessionPersistenceMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace SessionPersistenceModeMapper
      {

        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");
        static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");


        SessionPersistenceMode GetSessionPersistenceModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEACTIVATED_HASH)
          {
            return SessionPersistenceMode::DEACTIVATED;
          }
          else if (hashCode == ACTIVATED_HASH)
          {
            return SessionPersistenceMode::ACTIVATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionPersistenceMode>(hashCode);
          }

          return SessionPersistenceMode::NOT_SET;
        }

        Aws::String GetNameForSessionPersistenceMode(SessionPersistenceMode enumValue)
        {
          switch(enumValue)
          {
          case SessionPersistenceMode::DEACTIVATED:
            return "DEACTIVATED";
          case SessionPersistenceMode::ACTIVATED:
            return "ACTIVATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionPersistenceModeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
