/**
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

        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");
        static constexpr uint32_t CONTINUED_AS_NEW_HASH = ConstExprHashingUtils::HashString("CONTINUED_AS_NEW");
        static constexpr uint32_t TIMED_OUT_HASH = ConstExprHashingUtils::HashString("TIMED_OUT");


        CloseStatus GetCloseStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
