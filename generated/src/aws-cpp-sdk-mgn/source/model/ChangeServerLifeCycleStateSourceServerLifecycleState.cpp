/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ChangeServerLifeCycleStateSourceServerLifecycleState.h>
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
      namespace ChangeServerLifeCycleStateSourceServerLifecycleStateMapper
      {

        static const int READY_FOR_TEST_HASH = HashingUtils::HashString("READY_FOR_TEST");
        static const int READY_FOR_CUTOVER_HASH = HashingUtils::HashString("READY_FOR_CUTOVER");
        static const int CUTOVER_HASH = HashingUtils::HashString("CUTOVER");


        ChangeServerLifeCycleStateSourceServerLifecycleState GetChangeServerLifeCycleStateSourceServerLifecycleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_FOR_TEST_HASH)
          {
            return ChangeServerLifeCycleStateSourceServerLifecycleState::READY_FOR_TEST;
          }
          else if (hashCode == READY_FOR_CUTOVER_HASH)
          {
            return ChangeServerLifeCycleStateSourceServerLifecycleState::READY_FOR_CUTOVER;
          }
          else if (hashCode == CUTOVER_HASH)
          {
            return ChangeServerLifeCycleStateSourceServerLifecycleState::CUTOVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeServerLifeCycleStateSourceServerLifecycleState>(hashCode);
          }

          return ChangeServerLifeCycleStateSourceServerLifecycleState::NOT_SET;
        }

        Aws::String GetNameForChangeServerLifeCycleStateSourceServerLifecycleState(ChangeServerLifeCycleStateSourceServerLifecycleState enumValue)
        {
          switch(enumValue)
          {
          case ChangeServerLifeCycleStateSourceServerLifecycleState::NOT_SET:
            return {};
          case ChangeServerLifeCycleStateSourceServerLifecycleState::READY_FOR_TEST:
            return "READY_FOR_TEST";
          case ChangeServerLifeCycleStateSourceServerLifecycleState::READY_FOR_CUTOVER:
            return "READY_FOR_CUTOVER";
          case ChangeServerLifeCycleStateSourceServerLifecycleState::CUTOVER:
            return "CUTOVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeServerLifeCycleStateSourceServerLifecycleStateMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
