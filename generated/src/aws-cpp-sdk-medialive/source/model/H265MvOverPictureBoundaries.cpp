/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265MvOverPictureBoundaries.h>
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
      namespace H265MvOverPictureBoundariesMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        H265MvOverPictureBoundaries GetH265MvOverPictureBoundariesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H265MvOverPictureBoundaries::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H265MvOverPictureBoundaries::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265MvOverPictureBoundaries>(hashCode);
          }

          return H265MvOverPictureBoundaries::NOT_SET;
        }

        Aws::String GetNameForH265MvOverPictureBoundaries(H265MvOverPictureBoundaries enumValue)
        {
          switch(enumValue)
          {
          case H265MvOverPictureBoundaries::NOT_SET:
            return {};
          case H265MvOverPictureBoundaries::DISABLED:
            return "DISABLED";
          case H265MvOverPictureBoundaries::ENABLED:
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

      } // namespace H265MvOverPictureBoundariesMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
