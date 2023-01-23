/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BlackoutSlateState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace BlackoutSlateStateMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        BlackoutSlateState GetBlackoutSlateStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return BlackoutSlateState::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return BlackoutSlateState::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlackoutSlateState>(hashCode);
          }

          return BlackoutSlateState::NOT_SET;
        }

        Aws::String GetNameForBlackoutSlateState(BlackoutSlateState enumValue)
        {
          switch(enumValue)
          {
          case BlackoutSlateState::DISABLED:
            return "DISABLED";
          case BlackoutSlateState::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlackoutSlateStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
