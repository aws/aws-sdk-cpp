/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TsPtsOffset.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace TsPtsOffsetMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");


        TsPtsOffset GetTsPtsOffsetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return TsPtsOffset::AUTO;
          }
          else if (hashCode == SECONDS_HASH)
          {
            return TsPtsOffset::SECONDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TsPtsOffset>(hashCode);
          }

          return TsPtsOffset::NOT_SET;
        }

        Aws::String GetNameForTsPtsOffset(TsPtsOffset enumValue)
        {
          switch(enumValue)
          {
          case TsPtsOffset::NOT_SET:
            return {};
          case TsPtsOffset::AUTO:
            return "AUTO";
          case TsPtsOffset::SECONDS:
            return "SECONDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TsPtsOffsetMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
