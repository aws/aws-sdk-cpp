/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/Action.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace ActionMapper
      {

        static constexpr uint32_t OPEN_APP_HASH = ConstExprHashingUtils::HashString("OPEN_APP");
        static constexpr uint32_t DEEP_LINK_HASH = ConstExprHashingUtils::HashString("DEEP_LINK");
        static constexpr uint32_t URL_HASH = ConstExprHashingUtils::HashString("URL");


        Action GetActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_APP_HASH)
          {
            return Action::OPEN_APP;
          }
          else if (hashCode == DEEP_LINK_HASH)
          {
            return Action::DEEP_LINK;
          }
          else if (hashCode == URL_HASH)
          {
            return Action::URL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Action>(hashCode);
          }

          return Action::NOT_SET;
        }

        Aws::String GetNameForAction(Action enumValue)
        {
          switch(enumValue)
          {
          case Action::NOT_SET:
            return {};
          case Action::OPEN_APP:
            return "OPEN_APP";
          case Action::DEEP_LINK:
            return "DEEP_LINK";
          case Action::URL:
            return "URL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
