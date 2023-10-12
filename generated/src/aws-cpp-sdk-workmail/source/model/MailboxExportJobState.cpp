/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/MailboxExportJobState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace MailboxExportJobStateMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");


        MailboxExportJobState GetMailboxExportJobStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return MailboxExportJobState::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return MailboxExportJobState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MailboxExportJobState::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return MailboxExportJobState::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MailboxExportJobState>(hashCode);
          }

          return MailboxExportJobState::NOT_SET;
        }

        Aws::String GetNameForMailboxExportJobState(MailboxExportJobState enumValue)
        {
          switch(enumValue)
          {
          case MailboxExportJobState::NOT_SET:
            return {};
          case MailboxExportJobState::RUNNING:
            return "RUNNING";
          case MailboxExportJobState::COMPLETED:
            return "COMPLETED";
          case MailboxExportJobState::FAILED:
            return "FAILED";
          case MailboxExportJobState::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MailboxExportJobStateMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
