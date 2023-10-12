/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/SessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace SessionStatusMapper
      {

        static constexpr uint32_t Connected_HASH = ConstExprHashingUtils::HashString("Connected");
        static constexpr uint32_t Connecting_HASH = ConstExprHashingUtils::HashString("Connecting");
        static constexpr uint32_t Disconnected_HASH = ConstExprHashingUtils::HashString("Disconnected");
        static constexpr uint32_t Terminated_HASH = ConstExprHashingUtils::HashString("Terminated");
        static constexpr uint32_t Terminating_HASH = ConstExprHashingUtils::HashString("Terminating");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        SessionStatus GetSessionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Connected_HASH)
          {
            return SessionStatus::Connected;
          }
          else if (hashCode == Connecting_HASH)
          {
            return SessionStatus::Connecting;
          }
          else if (hashCode == Disconnected_HASH)
          {
            return SessionStatus::Disconnected;
          }
          else if (hashCode == Terminated_HASH)
          {
            return SessionStatus::Terminated;
          }
          else if (hashCode == Terminating_HASH)
          {
            return SessionStatus::Terminating;
          }
          else if (hashCode == Failed_HASH)
          {
            return SessionStatus::Failed;
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
          case SessionStatus::Connected:
            return "Connected";
          case SessionStatus::Connecting:
            return "Connecting";
          case SessionStatus::Disconnected:
            return "Disconnected";
          case SessionStatus::Terminated:
            return "Terminated";
          case SessionStatus::Terminating:
            return "Terminating";
          case SessionStatus::Failed:
            return "Failed";
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
  } // namespace SSM
} // namespace Aws
