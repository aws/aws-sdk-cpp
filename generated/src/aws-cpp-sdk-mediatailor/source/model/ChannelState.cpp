/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ChannelState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace ChannelStateMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        ChannelState GetChannelStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return ChannelState::RUNNING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ChannelState::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelState>(hashCode);
          }

          return ChannelState::NOT_SET;
        }

        Aws::String GetNameForChannelState(ChannelState enumValue)
        {
          switch(enumValue)
          {
          case ChannelState::RUNNING:
            return "RUNNING";
          case ChannelState::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelStateMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
