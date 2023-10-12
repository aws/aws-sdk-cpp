/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/SessionFilterKey.h>
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
      namespace SessionFilterKeyMapper
      {

        static constexpr uint32_t InvokedAfter_HASH = ConstExprHashingUtils::HashString("InvokedAfter");
        static constexpr uint32_t InvokedBefore_HASH = ConstExprHashingUtils::HashString("InvokedBefore");
        static constexpr uint32_t Target_HASH = ConstExprHashingUtils::HashString("Target");
        static constexpr uint32_t Owner_HASH = ConstExprHashingUtils::HashString("Owner");
        static constexpr uint32_t Status_HASH = ConstExprHashingUtils::HashString("Status");
        static constexpr uint32_t SessionId_HASH = ConstExprHashingUtils::HashString("SessionId");


        SessionFilterKey GetSessionFilterKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvokedAfter_HASH)
          {
            return SessionFilterKey::InvokedAfter;
          }
          else if (hashCode == InvokedBefore_HASH)
          {
            return SessionFilterKey::InvokedBefore;
          }
          else if (hashCode == Target_HASH)
          {
            return SessionFilterKey::Target;
          }
          else if (hashCode == Owner_HASH)
          {
            return SessionFilterKey::Owner;
          }
          else if (hashCode == Status_HASH)
          {
            return SessionFilterKey::Status;
          }
          else if (hashCode == SessionId_HASH)
          {
            return SessionFilterKey::SessionId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionFilterKey>(hashCode);
          }

          return SessionFilterKey::NOT_SET;
        }

        Aws::String GetNameForSessionFilterKey(SessionFilterKey enumValue)
        {
          switch(enumValue)
          {
          case SessionFilterKey::NOT_SET:
            return {};
          case SessionFilterKey::InvokedAfter:
            return "InvokedAfter";
          case SessionFilterKey::InvokedBefore:
            return "InvokedBefore";
          case SessionFilterKey::Target:
            return "Target";
          case SessionFilterKey::Owner:
            return "Owner";
          case SessionFilterKey::Status:
            return "Status";
          case SessionFilterKey::SessionId:
            return "SessionId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
