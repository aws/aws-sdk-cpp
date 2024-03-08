/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/UncompressedSlowPal.h>
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
      namespace UncompressedSlowPalMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        UncompressedSlowPal GetUncompressedSlowPalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return UncompressedSlowPal::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return UncompressedSlowPal::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UncompressedSlowPal>(hashCode);
          }

          return UncompressedSlowPal::NOT_SET;
        }

        Aws::String GetNameForUncompressedSlowPal(UncompressedSlowPal enumValue)
        {
          switch(enumValue)
          {
          case UncompressedSlowPal::NOT_SET:
            return {};
          case UncompressedSlowPal::DISABLED:
            return "DISABLED";
          case UncompressedSlowPal::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UncompressedSlowPalMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
