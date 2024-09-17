/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NodeConnectionState.h>
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
      namespace NodeConnectionStateMapper
      {

        static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
        static const int DISCONNECTED_HASH = HashingUtils::HashString("DISCONNECTED");


        NodeConnectionState GetNodeConnectionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTED_HASH)
          {
            return NodeConnectionState::CONNECTED;
          }
          else if (hashCode == DISCONNECTED_HASH)
          {
            return NodeConnectionState::DISCONNECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeConnectionState>(hashCode);
          }

          return NodeConnectionState::NOT_SET;
        }

        Aws::String GetNameForNodeConnectionState(NodeConnectionState enumValue)
        {
          switch(enumValue)
          {
          case NodeConnectionState::NOT_SET:
            return {};
          case NodeConnectionState::CONNECTED:
            return "CONNECTED";
          case NodeConnectionState::DISCONNECTED:
            return "DISCONNECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeConnectionStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
