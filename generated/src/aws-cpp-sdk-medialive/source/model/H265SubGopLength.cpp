/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265SubGopLength.h>
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
      namespace H265SubGopLengthMapper
      {

        static const int DYNAMIC_HASH = HashingUtils::HashString("DYNAMIC");
        static const int FIXED_HASH = HashingUtils::HashString("FIXED");


        H265SubGopLength GetH265SubGopLengthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DYNAMIC_HASH)
          {
            return H265SubGopLength::DYNAMIC;
          }
          else if (hashCode == FIXED_HASH)
          {
            return H265SubGopLength::FIXED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265SubGopLength>(hashCode);
          }

          return H265SubGopLength::NOT_SET;
        }

        Aws::String GetNameForH265SubGopLength(H265SubGopLength enumValue)
        {
          switch(enumValue)
          {
          case H265SubGopLength::NOT_SET:
            return {};
          case H265SubGopLength::DYNAMIC:
            return "DYNAMIC";
          case H265SubGopLength::FIXED:
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

      } // namespace H265SubGopLengthMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
