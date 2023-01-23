/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264FlickerAq.h>
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
      namespace H264FlickerAqMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        H264FlickerAq GetH264FlickerAqForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H264FlickerAq::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H264FlickerAq::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264FlickerAq>(hashCode);
          }

          return H264FlickerAq::NOT_SET;
        }

        Aws::String GetNameForH264FlickerAq(H264FlickerAq enumValue)
        {
          switch(enumValue)
          {
          case H264FlickerAq::DISABLED:
            return "DISABLED";
          case H264FlickerAq::ENABLED:
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

      } // namespace H264FlickerAqMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
