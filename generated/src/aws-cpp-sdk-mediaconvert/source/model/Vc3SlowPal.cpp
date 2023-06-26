/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vc3SlowPal.h>
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
      namespace Vc3SlowPalMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        Vc3SlowPal GetVc3SlowPalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return Vc3SlowPal::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return Vc3SlowPal::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vc3SlowPal>(hashCode);
          }

          return Vc3SlowPal::NOT_SET;
        }

        Aws::String GetNameForVc3SlowPal(Vc3SlowPal enumValue)
        {
          switch(enumValue)
          {
          case Vc3SlowPal::DISABLED:
            return "DISABLED";
          case Vc3SlowPal::ENABLED:
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

      } // namespace Vc3SlowPalMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
