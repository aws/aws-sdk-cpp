/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingClipboardMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace StreamingClipboardModeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        StreamingClipboardMode GetStreamingClipboardModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return StreamingClipboardMode::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return StreamingClipboardMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingClipboardMode>(hashCode);
          }

          return StreamingClipboardMode::NOT_SET;
        }

        Aws::String GetNameForStreamingClipboardMode(StreamingClipboardMode enumValue)
        {
          switch(enumValue)
          {
          case StreamingClipboardMode::NOT_SET:
            return {};
          case StreamingClipboardMode::ENABLED:
            return "ENABLED";
          case StreamingClipboardMode::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamingClipboardModeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
