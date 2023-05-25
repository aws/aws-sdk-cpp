/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/CancelTimerFailedCause.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace CancelTimerFailedCauseMapper
      {

        static const int TIMER_ID_UNKNOWN_HASH = HashingUtils::HashString("TIMER_ID_UNKNOWN");
        static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OPERATION_NOT_PERMITTED");


        CancelTimerFailedCause GetCancelTimerFailedCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TIMER_ID_UNKNOWN_HASH)
          {
            return CancelTimerFailedCause::TIMER_ID_UNKNOWN;
          }
          else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
          {
            return CancelTimerFailedCause::OPERATION_NOT_PERMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CancelTimerFailedCause>(hashCode);
          }

          return CancelTimerFailedCause::NOT_SET;
        }

        Aws::String GetNameForCancelTimerFailedCause(CancelTimerFailedCause enumValue)
        {
          switch(enumValue)
          {
          case CancelTimerFailedCause::TIMER_ID_UNKNOWN:
            return "TIMER_ID_UNKNOWN";
          case CancelTimerFailedCause::OPERATION_NOT_PERMITTED:
            return "OPERATION_NOT_PERMITTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CancelTimerFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
