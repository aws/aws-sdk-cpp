/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264Telecine.h>
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
      namespace H264TelecineMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SOFT_HASH = HashingUtils::HashString("SOFT");
        static const int HARD_HASH = HashingUtils::HashString("HARD");


        H264Telecine GetH264TelecineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return H264Telecine::NONE;
          }
          else if (hashCode == SOFT_HASH)
          {
            return H264Telecine::SOFT;
          }
          else if (hashCode == HARD_HASH)
          {
            return H264Telecine::HARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264Telecine>(hashCode);
          }

          return H264Telecine::NOT_SET;
        }

        Aws::String GetNameForH264Telecine(H264Telecine enumValue)
        {
          switch(enumValue)
          {
          case H264Telecine::NONE:
            return "NONE";
          case H264Telecine::SOFT:
            return "SOFT";
          case H264Telecine::HARD:
            return "HARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264TelecineMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
