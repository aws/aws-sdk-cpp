/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265FlickerAq.h>
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
      namespace H265FlickerAqMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        H265FlickerAq GetH265FlickerAqForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H265FlickerAq::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H265FlickerAq::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265FlickerAq>(hashCode);
          }

          return H265FlickerAq::NOT_SET;
        }

        Aws::String GetNameForH265FlickerAq(H265FlickerAq enumValue)
        {
          switch(enumValue)
          {
          case H265FlickerAq::DISABLED:
            return "DISABLED";
          case H265FlickerAq::ENABLED:
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

      } // namespace H265FlickerAqMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
