/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ChangeSetState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace ChangeSetStateMapper
      {

        static const int PENDING_GENERATION_HASH = HashingUtils::HashString("PENDING_GENERATION");
        static const int FAILED_GENERATION_HASH = HashingUtils::HashString("FAILED_GENERATION");
        static const int READY_TO_EXECUTE_HASH = HashingUtils::HashString("READY_TO_EXECUTE");
        static const int EXECUTING_HASH = HashingUtils::HashString("EXECUTING");
        static const int EXECUTION_SUCCEEDED_HASH = HashingUtils::HashString("EXECUTION_SUCCEEDED");
        static const int OUT_OF_DATE_HASH = HashingUtils::HashString("OUT_OF_DATE");


        ChangeSetState GetChangeSetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_GENERATION_HASH)
          {
            return ChangeSetState::PENDING_GENERATION;
          }
          else if (hashCode == FAILED_GENERATION_HASH)
          {
            return ChangeSetState::FAILED_GENERATION;
          }
          else if (hashCode == READY_TO_EXECUTE_HASH)
          {
            return ChangeSetState::READY_TO_EXECUTE;
          }
          else if (hashCode == EXECUTING_HASH)
          {
            return ChangeSetState::EXECUTING;
          }
          else if (hashCode == EXECUTION_SUCCEEDED_HASH)
          {
            return ChangeSetState::EXECUTION_SUCCEEDED;
          }
          else if (hashCode == OUT_OF_DATE_HASH)
          {
            return ChangeSetState::OUT_OF_DATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeSetState>(hashCode);
          }

          return ChangeSetState::NOT_SET;
        }

        Aws::String GetNameForChangeSetState(ChangeSetState enumValue)
        {
          switch(enumValue)
          {
          case ChangeSetState::NOT_SET:
            return {};
          case ChangeSetState::PENDING_GENERATION:
            return "PENDING_GENERATION";
          case ChangeSetState::FAILED_GENERATION:
            return "FAILED_GENERATION";
          case ChangeSetState::READY_TO_EXECUTE:
            return "READY_TO_EXECUTE";
          case ChangeSetState::EXECUTING:
            return "EXECUTING";
          case ChangeSetState::EXECUTION_SUCCEEDED:
            return "EXECUTION_SUCCEEDED";
          case ChangeSetState::OUT_OF_DATE:
            return "OUT_OF_DATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeSetStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
