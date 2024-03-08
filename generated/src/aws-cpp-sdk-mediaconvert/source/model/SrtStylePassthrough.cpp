/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/SrtStylePassthrough.h>
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
      namespace SrtStylePassthroughMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        SrtStylePassthrough GetSrtStylePassthroughForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return SrtStylePassthrough::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return SrtStylePassthrough::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SrtStylePassthrough>(hashCode);
          }

          return SrtStylePassthrough::NOT_SET;
        }

        Aws::String GetNameForSrtStylePassthrough(SrtStylePassthrough enumValue)
        {
          switch(enumValue)
          {
          case SrtStylePassthrough::NOT_SET:
            return {};
          case SrtStylePassthrough::ENABLED:
            return "ENABLED";
          case SrtStylePassthrough::DISABLED:
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

      } // namespace SrtStylePassthroughMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
