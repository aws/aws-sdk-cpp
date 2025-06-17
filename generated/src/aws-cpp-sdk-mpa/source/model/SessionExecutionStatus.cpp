/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/SessionExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MPA
  {
    namespace Model
    {
      namespace SessionExecutionStatusMapper
      {

        static const int EXECUTED_HASH = HashingUtils::HashString("EXECUTED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        SessionExecutionStatus GetSessionExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXECUTED_HASH)
          {
            return SessionExecutionStatus::EXECUTED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SessionExecutionStatus::FAILED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return SessionExecutionStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionExecutionStatus>(hashCode);
          }

          return SessionExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForSessionExecutionStatus(SessionExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case SessionExecutionStatus::NOT_SET:
            return {};
          case SessionExecutionStatus::EXECUTED:
            return "EXECUTED";
          case SessionExecutionStatus::FAILED:
            return "FAILED";
          case SessionExecutionStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionExecutionStatusMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws
