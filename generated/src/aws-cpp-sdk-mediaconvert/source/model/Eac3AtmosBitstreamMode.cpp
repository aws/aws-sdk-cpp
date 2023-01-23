/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3AtmosBitstreamMode.h>
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
      namespace Eac3AtmosBitstreamModeMapper
      {

        static const int COMPLETE_MAIN_HASH = HashingUtils::HashString("COMPLETE_MAIN");


        Eac3AtmosBitstreamMode GetEac3AtmosBitstreamModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETE_MAIN_HASH)
          {
            return Eac3AtmosBitstreamMode::COMPLETE_MAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3AtmosBitstreamMode>(hashCode);
          }

          return Eac3AtmosBitstreamMode::NOT_SET;
        }

        Aws::String GetNameForEac3AtmosBitstreamMode(Eac3AtmosBitstreamMode enumValue)
        {
          switch(enumValue)
          {
          case Eac3AtmosBitstreamMode::COMPLETE_MAIN:
            return "COMPLETE_MAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3AtmosBitstreamModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
