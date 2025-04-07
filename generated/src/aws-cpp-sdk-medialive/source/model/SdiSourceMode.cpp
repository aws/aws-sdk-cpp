/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SdiSourceMode.h>
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
      namespace SdiSourceModeMapper
      {

        static const int QUADRANT_HASH = HashingUtils::HashString("QUADRANT");
        static const int INTERLEAVE_HASH = HashingUtils::HashString("INTERLEAVE");


        SdiSourceMode GetSdiSourceModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUADRANT_HASH)
          {
            return SdiSourceMode::QUADRANT;
          }
          else if (hashCode == INTERLEAVE_HASH)
          {
            return SdiSourceMode::INTERLEAVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SdiSourceMode>(hashCode);
          }

          return SdiSourceMode::NOT_SET;
        }

        Aws::String GetNameForSdiSourceMode(SdiSourceMode enumValue)
        {
          switch(enumValue)
          {
          case SdiSourceMode::NOT_SET:
            return {};
          case SdiSourceMode::QUADRANT:
            return "QUADRANT";
          case SdiSourceMode::INTERLEAVE:
            return "INTERLEAVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SdiSourceModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
