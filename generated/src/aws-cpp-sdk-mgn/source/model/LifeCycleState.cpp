/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/LifeCycleState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace LifeCycleStateMapper
      {

        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int NOT_READY_HASH = HashingUtils::HashString("NOT_READY");
        static const int READY_FOR_TEST_HASH = HashingUtils::HashString("READY_FOR_TEST");
        static const int TESTING_HASH = HashingUtils::HashString("TESTING");
        static const int READY_FOR_CUTOVER_HASH = HashingUtils::HashString("READY_FOR_CUTOVER");
        static const int CUTTING_OVER_HASH = HashingUtils::HashString("CUTTING_OVER");
        static const int CUTOVER_HASH = HashingUtils::HashString("CUTOVER");
        static const int DISCONNECTED_HASH = HashingUtils::HashString("DISCONNECTED");
        static const int DISCOVERED_HASH = HashingUtils::HashString("DISCOVERED");
        static const int PENDING_INSTALLATION_HASH = HashingUtils::HashString("PENDING_INSTALLATION");


        LifeCycleState GetLifeCycleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOPPED_HASH)
          {
            return LifeCycleState::STOPPED;
          }
          else if (hashCode == NOT_READY_HASH)
          {
            return LifeCycleState::NOT_READY;
          }
          else if (hashCode == READY_FOR_TEST_HASH)
          {
            return LifeCycleState::READY_FOR_TEST;
          }
          else if (hashCode == TESTING_HASH)
          {
            return LifeCycleState::TESTING;
          }
          else if (hashCode == READY_FOR_CUTOVER_HASH)
          {
            return LifeCycleState::READY_FOR_CUTOVER;
          }
          else if (hashCode == CUTTING_OVER_HASH)
          {
            return LifeCycleState::CUTTING_OVER;
          }
          else if (hashCode == CUTOVER_HASH)
          {
            return LifeCycleState::CUTOVER;
          }
          else if (hashCode == DISCONNECTED_HASH)
          {
            return LifeCycleState::DISCONNECTED;
          }
          else if (hashCode == DISCOVERED_HASH)
          {
            return LifeCycleState::DISCOVERED;
          }
          else if (hashCode == PENDING_INSTALLATION_HASH)
          {
            return LifeCycleState::PENDING_INSTALLATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifeCycleState>(hashCode);
          }

          return LifeCycleState::NOT_SET;
        }

        Aws::String GetNameForLifeCycleState(LifeCycleState enumValue)
        {
          switch(enumValue)
          {
          case LifeCycleState::NOT_SET:
            return {};
          case LifeCycleState::STOPPED:
            return "STOPPED";
          case LifeCycleState::NOT_READY:
            return "NOT_READY";
          case LifeCycleState::READY_FOR_TEST:
            return "READY_FOR_TEST";
          case LifeCycleState::TESTING:
            return "TESTING";
          case LifeCycleState::READY_FOR_CUTOVER:
            return "READY_FOR_CUTOVER";
          case LifeCycleState::CUTTING_OVER:
            return "CUTTING_OVER";
          case LifeCycleState::CUTOVER:
            return "CUTOVER";
          case LifeCycleState::DISCONNECTED:
            return "DISCONNECTED";
          case LifeCycleState::DISCOVERED:
            return "DISCOVERED";
          case LifeCycleState::PENDING_INSTALLATION:
            return "PENDING_INSTALLATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifeCycleStateMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
