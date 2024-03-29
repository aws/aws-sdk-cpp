﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/CloseStatus.h>
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
      namespace CloseStatusMapper
      {

        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int CONTINUED_AS_NEW_HASH = HashingUtils::HashString("CONTINUED_AS_NEW");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");


        CloseStatus GetCloseStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETED_HASH)
          {
            return CloseStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CloseStatus::FAILED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return CloseStatus::CANCELED;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return CloseStatus::TERMINATED;
          }
          else if (hashCode == CONTINUED_AS_NEW_HASH)
          {
            return CloseStatus::CONTINUED_AS_NEW;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return CloseStatus::TIMED_OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloseStatus>(hashCode);
          }

          return CloseStatus::NOT_SET;
        }

        Aws::String GetNameForCloseStatus(CloseStatus enumValue)
        {
          switch(enumValue)
          {
          case CloseStatus::NOT_SET:
            return {};
          case CloseStatus::COMPLETED:
            return "COMPLETED";
          case CloseStatus::FAILED:
            return "FAILED";
          case CloseStatus::CANCELED:
            return "CANCELED";
          case CloseStatus::TERMINATED:
            return "TERMINATED";
          case CloseStatus::CONTINUED_AS_NEW:
            return "CONTINUED_AS_NEW";
          case CloseStatus::TIMED_OUT:
            return "TIMED_OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloseStatusMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
