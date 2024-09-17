/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NodeState.h>
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
      namespace NodeStateMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int REGISTERING_HASH = HashingUtils::HashString("REGISTERING");
        static const int READY_TO_ACTIVATE_HASH = HashingUtils::HashString("READY_TO_ACTIVATE");
        static const int REGISTRATION_FAILED_HASH = HashingUtils::HashString("REGISTRATION_FAILED");
        static const int ACTIVATION_FAILED_HASH = HashingUtils::HashString("ACTIVATION_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int IN_USE_HASH = HashingUtils::HashString("IN_USE");
        static const int DEREGISTERING_HASH = HashingUtils::HashString("DEREGISTERING");
        static const int DRAINING_HASH = HashingUtils::HashString("DRAINING");
        static const int DEREGISTRATION_FAILED_HASH = HashingUtils::HashString("DEREGISTRATION_FAILED");
        static const int DEREGISTERED_HASH = HashingUtils::HashString("DEREGISTERED");


        NodeState GetNodeStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return NodeState::CREATED;
          }
          else if (hashCode == REGISTERING_HASH)
          {
            return NodeState::REGISTERING;
          }
          else if (hashCode == READY_TO_ACTIVATE_HASH)
          {
            return NodeState::READY_TO_ACTIVATE;
          }
          else if (hashCode == REGISTRATION_FAILED_HASH)
          {
            return NodeState::REGISTRATION_FAILED;
          }
          else if (hashCode == ACTIVATION_FAILED_HASH)
          {
            return NodeState::ACTIVATION_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return NodeState::ACTIVE;
          }
          else if (hashCode == READY_HASH)
          {
            return NodeState::READY;
          }
          else if (hashCode == IN_USE_HASH)
          {
            return NodeState::IN_USE;
          }
          else if (hashCode == DEREGISTERING_HASH)
          {
            return NodeState::DEREGISTERING;
          }
          else if (hashCode == DRAINING_HASH)
          {
            return NodeState::DRAINING;
          }
          else if (hashCode == DEREGISTRATION_FAILED_HASH)
          {
            return NodeState::DEREGISTRATION_FAILED;
          }
          else if (hashCode == DEREGISTERED_HASH)
          {
            return NodeState::DEREGISTERED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeState>(hashCode);
          }

          return NodeState::NOT_SET;
        }

        Aws::String GetNameForNodeState(NodeState enumValue)
        {
          switch(enumValue)
          {
          case NodeState::NOT_SET:
            return {};
          case NodeState::CREATED:
            return "CREATED";
          case NodeState::REGISTERING:
            return "REGISTERING";
          case NodeState::READY_TO_ACTIVATE:
            return "READY_TO_ACTIVATE";
          case NodeState::REGISTRATION_FAILED:
            return "REGISTRATION_FAILED";
          case NodeState::ACTIVATION_FAILED:
            return "ACTIVATION_FAILED";
          case NodeState::ACTIVE:
            return "ACTIVE";
          case NodeState::READY:
            return "READY";
          case NodeState::IN_USE:
            return "IN_USE";
          case NodeState::DEREGISTERING:
            return "DEREGISTERING";
          case NodeState::DRAINING:
            return "DRAINING";
          case NodeState::DEREGISTRATION_FAILED:
            return "DEREGISTRATION_FAILED";
          case NodeState::DEREGISTERED:
            return "DEREGISTERED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
