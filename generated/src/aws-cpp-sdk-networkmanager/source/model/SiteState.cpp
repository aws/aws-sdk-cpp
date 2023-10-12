/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/SiteState.h>
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
      namespace SiteStateMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");


        SiteState GetSiteStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return SiteState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return SiteState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return SiteState::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return SiteState::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SiteState>(hashCode);
          }

          return SiteState::NOT_SET;
        }

        Aws::String GetNameForSiteState(SiteState enumValue)
        {
          switch(enumValue)
          {
          case SiteState::NOT_SET:
            return {};
          case SiteState::PENDING:
            return "PENDING";
          case SiteState::AVAILABLE:
            return "AVAILABLE";
          case SiteState::DELETING:
            return "DELETING";
          case SiteState::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SiteStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
