/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/ProposalStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace ProposalStatusMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t APPROVED_HASH = ConstExprHashingUtils::HashString("APPROVED");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");
        static constexpr uint32_t ACTION_FAILED_HASH = ConstExprHashingUtils::HashString("ACTION_FAILED");


        ProposalStatus GetProposalStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ProposalStatus::IN_PROGRESS;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return ProposalStatus::APPROVED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ProposalStatus::REJECTED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ProposalStatus::EXPIRED;
          }
          else if (hashCode == ACTION_FAILED_HASH)
          {
            return ProposalStatus::ACTION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProposalStatus>(hashCode);
          }

          return ProposalStatus::NOT_SET;
        }

        Aws::String GetNameForProposalStatus(ProposalStatus enumValue)
        {
          switch(enumValue)
          {
          case ProposalStatus::NOT_SET:
            return {};
          case ProposalStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ProposalStatus::APPROVED:
            return "APPROVED";
          case ProposalStatus::REJECTED:
            return "REJECTED";
          case ProposalStatus::EXPIRED:
            return "EXPIRED";
          case ProposalStatus::ACTION_FAILED:
            return "ACTION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProposalStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
