/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264SubGopLength.h>
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
      namespace H264SubGopLengthMapper
      {

        static const int DYNAMIC_HASH = HashingUtils::HashString("DYNAMIC");
        static const int FIXED_HASH = HashingUtils::HashString("FIXED");


        H264SubGopLength GetH264SubGopLengthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DYNAMIC_HASH)
          {
            return H264SubGopLength::DYNAMIC;
          }
          else if (hashCode == FIXED_HASH)
          {
            return H264SubGopLength::FIXED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264SubGopLength>(hashCode);
          }

          return H264SubGopLength::NOT_SET;
        }

        Aws::String GetNameForH264SubGopLength(H264SubGopLength enumValue)
        {
          switch(enumValue)
          {
          case H264SubGopLength::DYNAMIC:
            return "DYNAMIC";
          case H264SubGopLength::FIXED:
            return "FIXED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264SubGopLengthMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
