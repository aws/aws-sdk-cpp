/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsAkamaiHttpTransferMode.h>
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
      namespace HlsAkamaiHttpTransferModeMapper
      {

        static const int CHUNKED_HASH = HashingUtils::HashString("CHUNKED");
        static const int NON_CHUNKED_HASH = HashingUtils::HashString("NON_CHUNKED");


        HlsAkamaiHttpTransferMode GetHlsAkamaiHttpTransferModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHUNKED_HASH)
          {
            return HlsAkamaiHttpTransferMode::CHUNKED;
          }
          else if (hashCode == NON_CHUNKED_HASH)
          {
            return HlsAkamaiHttpTransferMode::NON_CHUNKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsAkamaiHttpTransferMode>(hashCode);
          }

          return HlsAkamaiHttpTransferMode::NOT_SET;
        }

        Aws::String GetNameForHlsAkamaiHttpTransferMode(HlsAkamaiHttpTransferMode enumValue)
        {
          switch(enumValue)
          {
          case HlsAkamaiHttpTransferMode::CHUNKED:
            return "CHUNKED";
          case HlsAkamaiHttpTransferMode::NON_CHUNKED:
            return "NON_CHUNKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsAkamaiHttpTransferModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
