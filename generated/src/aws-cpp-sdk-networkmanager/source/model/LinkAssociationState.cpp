/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/LinkAssociationState.h>
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
      namespace LinkAssociationStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        LinkAssociationState GetLinkAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return LinkAssociationState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return LinkAssociationState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return LinkAssociationState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return LinkAssociationState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LinkAssociationState>(hashCode);
          }

          return LinkAssociationState::NOT_SET;
        }

        Aws::String GetNameForLinkAssociationState(LinkAssociationState enumValue)
        {
          switch(enumValue)
          {
          case LinkAssociationState::PENDING:
            return "PENDING";
          case LinkAssociationState::AVAILABLE:
            return "AVAILABLE";
          case LinkAssociationState::DELETING:
            return "DELETING";
          case LinkAssociationState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LinkAssociationStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
