/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/WebvttDestinationStyleControl.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace WebvttDestinationStyleControlMapper
      {

        static constexpr uint32_t NO_STYLE_DATA_HASH = ConstExprHashingUtils::HashString("NO_STYLE_DATA");
        static constexpr uint32_t PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("PASSTHROUGH");


        WebvttDestinationStyleControl GetWebvttDestinationStyleControlForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_STYLE_DATA_HASH)
          {
            return WebvttDestinationStyleControl::NO_STYLE_DATA;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return WebvttDestinationStyleControl::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebvttDestinationStyleControl>(hashCode);
          }

          return WebvttDestinationStyleControl::NOT_SET;
        }

        Aws::String GetNameForWebvttDestinationStyleControl(WebvttDestinationStyleControl enumValue)
        {
          switch(enumValue)
          {
          case WebvttDestinationStyleControl::NOT_SET:
            return {};
          case WebvttDestinationStyleControl::NO_STYLE_DATA:
            return "NO_STYLE_DATA";
          case WebvttDestinationStyleControl::PASSTHROUGH:
            return "PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebvttDestinationStyleControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
