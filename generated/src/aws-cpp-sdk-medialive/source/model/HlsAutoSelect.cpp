/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsAutoSelect.h>
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
      namespace HlsAutoSelectMapper
      {

        static const int NO_HASH = HashingUtils::HashString("NO");
        static const int OMIT_HASH = HashingUtils::HashString("OMIT");
        static const int YES_HASH = HashingUtils::HashString("YES");


        HlsAutoSelect GetHlsAutoSelectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_HASH)
          {
            return HlsAutoSelect::NO;
          }
          else if (hashCode == OMIT_HASH)
          {
            return HlsAutoSelect::OMIT;
          }
          else if (hashCode == YES_HASH)
          {
            return HlsAutoSelect::YES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsAutoSelect>(hashCode);
          }

          return HlsAutoSelect::NOT_SET;
        }

        Aws::String GetNameForHlsAutoSelect(HlsAutoSelect enumValue)
        {
          switch(enumValue)
          {
          case HlsAutoSelect::NOT_SET:
            return {};
          case HlsAutoSelect::NO:
            return "NO";
          case HlsAutoSelect::OMIT:
            return "OMIT";
          case HlsAutoSelect::YES:
            return "YES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsAutoSelectMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
