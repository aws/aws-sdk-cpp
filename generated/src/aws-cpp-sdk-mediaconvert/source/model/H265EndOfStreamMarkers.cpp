/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265EndOfStreamMarkers.h>
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
      namespace H265EndOfStreamMarkersMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int SUPPRESS_HASH = HashingUtils::HashString("SUPPRESS");


        H265EndOfStreamMarkers GetH265EndOfStreamMarkersForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return H265EndOfStreamMarkers::INCLUDE;
          }
          else if (hashCode == SUPPRESS_HASH)
          {
            return H265EndOfStreamMarkers::SUPPRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265EndOfStreamMarkers>(hashCode);
          }

          return H265EndOfStreamMarkers::NOT_SET;
        }

        Aws::String GetNameForH265EndOfStreamMarkers(H265EndOfStreamMarkers enumValue)
        {
          switch(enumValue)
          {
          case H265EndOfStreamMarkers::NOT_SET:
            return {};
          case H265EndOfStreamMarkers::INCLUDE:
            return "INCLUDE";
          case H265EndOfStreamMarkers::SUPPRESS:
            return "SUPPRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265EndOfStreamMarkersMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
