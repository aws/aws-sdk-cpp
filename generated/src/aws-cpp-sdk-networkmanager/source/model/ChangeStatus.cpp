/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ChangeStatus.h>
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
      namespace ChangeStatusMapper
      {

        static constexpr uint32_t NOT_STARTED_HASH = ConstExprHashingUtils::HashString("NOT_STARTED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETE_HASH = ConstExprHashingUtils::HashString("COMPLETE");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ChangeStatus GetChangeStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return ChangeStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ChangeStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return ChangeStatus::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ChangeStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeStatus>(hashCode);
          }

          return ChangeStatus::NOT_SET;
        }

        Aws::String GetNameForChangeStatus(ChangeStatus enumValue)
        {
          switch(enumValue)
          {
          case ChangeStatus::NOT_SET:
            return {};
          case ChangeStatus::NOT_STARTED:
            return "NOT_STARTED";
          case ChangeStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ChangeStatus::COMPLETE:
            return "COMPLETE";
          case ChangeStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeStatusMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
