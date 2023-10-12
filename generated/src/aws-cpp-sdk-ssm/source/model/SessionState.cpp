/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/SessionState.h>
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
      namespace SessionStateMapper
      {

        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t History_HASH = ConstExprHashingUtils::HashString("History");


        SessionState GetSessionStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return SessionState::Active;
          }
          else if (hashCode == History_HASH)
          {
            return SessionState::History;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionState>(hashCode);
          }

          return SessionState::NOT_SET;
        }

        Aws::String GetNameForSessionState(SessionState enumValue)
        {
          switch(enumValue)
          {
          case SessionState::NOT_SET:
            return {};
          case SessionState::Active:
            return "Active";
          case SessionState::History:
            return "History";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionStateMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
