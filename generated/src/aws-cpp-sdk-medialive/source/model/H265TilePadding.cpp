/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265TilePadding.h>
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
      namespace H265TilePaddingMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PADDED_HASH = HashingUtils::HashString("PADDED");


        H265TilePadding GetH265TilePaddingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return H265TilePadding::NONE;
          }
          else if (hashCode == PADDED_HASH)
          {
            return H265TilePadding::PADDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265TilePadding>(hashCode);
          }

          return H265TilePadding::NOT_SET;
        }

        Aws::String GetNameForH265TilePadding(H265TilePadding enumValue)
        {
          switch(enumValue)
          {
          case H265TilePadding::NOT_SET:
            return {};
          case H265TilePadding::NONE:
            return "NONE";
          case H265TilePadding::PADDED:
            return "PADDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265TilePaddingMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
