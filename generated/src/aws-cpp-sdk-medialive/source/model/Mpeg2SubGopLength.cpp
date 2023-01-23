/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Mpeg2SubGopLength.h>
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
      namespace Mpeg2SubGopLengthMapper
      {

        static const int DYNAMIC_HASH = HashingUtils::HashString("DYNAMIC");
        static const int FIXED_HASH = HashingUtils::HashString("FIXED");


        Mpeg2SubGopLength GetMpeg2SubGopLengthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DYNAMIC_HASH)
          {
            return Mpeg2SubGopLength::DYNAMIC;
          }
          else if (hashCode == FIXED_HASH)
          {
            return Mpeg2SubGopLength::FIXED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2SubGopLength>(hashCode);
          }

          return Mpeg2SubGopLength::NOT_SET;
        }

        Aws::String GetNameForMpeg2SubGopLength(Mpeg2SubGopLength enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2SubGopLength::DYNAMIC:
            return "DYNAMIC";
          case Mpeg2SubGopLength::FIXED:
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

      } // namespace Mpeg2SubGopLengthMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
