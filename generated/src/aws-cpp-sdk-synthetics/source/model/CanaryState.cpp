/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Synthetics
  {
    namespace Model
    {
      namespace CanaryStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        CanaryState GetCanaryStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return CanaryState::CREATING;
          }
          else if (hashCode == READY_HASH)
          {
            return CanaryState::READY;
          }
          else if (hashCode == STARTING_HASH)
          {
            return CanaryState::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return CanaryState::RUNNING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return CanaryState::UPDATING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return CanaryState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return CanaryState::STOPPED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return CanaryState::ERROR_;
          }
          else if (hashCode == DELETING_HASH)
          {
            return CanaryState::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CanaryState>(hashCode);
          }

          return CanaryState::NOT_SET;
        }

        Aws::String GetNameForCanaryState(CanaryState enumValue)
        {
          switch(enumValue)
          {
          case CanaryState::NOT_SET:
            return {};
          case CanaryState::CREATING:
            return "CREATING";
          case CanaryState::READY:
            return "READY";
          case CanaryState::STARTING:
            return "STARTING";
          case CanaryState::RUNNING:
            return "RUNNING";
          case CanaryState::UPDATING:
            return "UPDATING";
          case CanaryState::STOPPING:
            return "STOPPING";
          case CanaryState::STOPPED:
            return "STOPPED";
          case CanaryState::ERROR_:
            return "ERROR";
          case CanaryState::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CanaryStateMapper
    } // namespace Model
  } // namespace Synthetics
} // namespace Aws
