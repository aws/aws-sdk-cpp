/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ShareInvitationAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace ShareInvitationActionMapper
      {

        static const int ACCEPT_HASH = HashingUtils::HashString("ACCEPT");
        static const int REJECT_HASH = HashingUtils::HashString("REJECT");


        ShareInvitationAction GetShareInvitationActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCEPT_HASH)
          {
            return ShareInvitationAction::ACCEPT;
          }
          else if (hashCode == REJECT_HASH)
          {
            return ShareInvitationAction::REJECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareInvitationAction>(hashCode);
          }

          return ShareInvitationAction::NOT_SET;
        }

        Aws::String GetNameForShareInvitationAction(ShareInvitationAction enumValue)
        {
          switch(enumValue)
          {
          case ShareInvitationAction::NOT_SET:
            return {};
          case ShareInvitationAction::ACCEPT:
            return "ACCEPT";
          case ShareInvitationAction::REJECT:
            return "REJECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareInvitationActionMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
