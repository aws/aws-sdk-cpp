/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsDefault.h>
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
      namespace HlsDefaultMapper
      {

        static const int NO_HASH = HashingUtils::HashString("NO");
        static const int OMIT_HASH = HashingUtils::HashString("OMIT");
        static const int YES_HASH = HashingUtils::HashString("YES");


        HlsDefault GetHlsDefaultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_HASH)
          {
            return HlsDefault::NO;
          }
          else if (hashCode == OMIT_HASH)
          {
            return HlsDefault::OMIT;
          }
          else if (hashCode == YES_HASH)
          {
            return HlsDefault::YES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsDefault>(hashCode);
          }

          return HlsDefault::NOT_SET;
        }

        Aws::String GetNameForHlsDefault(HlsDefault enumValue)
        {
          switch(enumValue)
          {
          case HlsDefault::NOT_SET:
            return {};
          case HlsDefault::NO:
            return "NO";
          case HlsDefault::OMIT:
            return "OMIT";
          case HlsDefault::YES:
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

      } // namespace HlsDefaultMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
