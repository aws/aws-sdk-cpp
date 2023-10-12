/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/RequestedPipeState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace RequestedPipeStateMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        RequestedPipeState GetRequestedPipeStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return RequestedPipeState::RUNNING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return RequestedPipeState::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequestedPipeState>(hashCode);
          }

          return RequestedPipeState::NOT_SET;
        }

        Aws::String GetNameForRequestedPipeState(RequestedPipeState enumValue)
        {
          switch(enumValue)
          {
          case RequestedPipeState::NOT_SET:
            return {};
          case RequestedPipeState::RUNNING:
            return "RUNNING";
          case RequestedPipeState::STOPPED:
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

      } // namespace RequestedPipeStateMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
