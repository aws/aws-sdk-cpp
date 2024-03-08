/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ButtonAction.h>
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
      namespace ButtonActionMapper
      {

        static const int LINK_HASH = HashingUtils::HashString("LINK");
        static const int DEEP_LINK_HASH = HashingUtils::HashString("DEEP_LINK");
        static const int CLOSE_HASH = HashingUtils::HashString("CLOSE");


        ButtonAction GetButtonActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINK_HASH)
          {
            return ButtonAction::LINK;
          }
          else if (hashCode == DEEP_LINK_HASH)
          {
            return ButtonAction::DEEP_LINK;
          }
          else if (hashCode == CLOSE_HASH)
          {
            return ButtonAction::CLOSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ButtonAction>(hashCode);
          }

          return ButtonAction::NOT_SET;
        }

        Aws::String GetNameForButtonAction(ButtonAction enumValue)
        {
          switch(enumValue)
          {
          case ButtonAction::NOT_SET:
            return {};
          case ButtonAction::LINK:
            return "LINK";
          case ButtonAction::DEEP_LINK:
            return "DEEP_LINK";
          case ButtonAction::CLOSE:
            return "CLOSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ButtonActionMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
