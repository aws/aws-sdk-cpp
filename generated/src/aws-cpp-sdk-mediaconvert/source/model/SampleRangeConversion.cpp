/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/SampleRangeConversion.h>
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
      namespace SampleRangeConversionMapper
      {

        static const int LIMITED_RANGE_SQUEEZE_HASH = HashingUtils::HashString("LIMITED_RANGE_SQUEEZE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int LIMITED_RANGE_CLIP_HASH = HashingUtils::HashString("LIMITED_RANGE_CLIP");


        SampleRangeConversion GetSampleRangeConversionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIMITED_RANGE_SQUEEZE_HASH)
          {
            return SampleRangeConversion::LIMITED_RANGE_SQUEEZE;
          }
          else if (hashCode == NONE_HASH)
          {
            return SampleRangeConversion::NONE;
          }
          else if (hashCode == LIMITED_RANGE_CLIP_HASH)
          {
            return SampleRangeConversion::LIMITED_RANGE_CLIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SampleRangeConversion>(hashCode);
          }

          return SampleRangeConversion::NOT_SET;
        }

        Aws::String GetNameForSampleRangeConversion(SampleRangeConversion enumValue)
        {
          switch(enumValue)
          {
          case SampleRangeConversion::NOT_SET:
            return {};
          case SampleRangeConversion::LIMITED_RANGE_SQUEEZE:
            return "LIMITED_RANGE_SQUEEZE";
          case SampleRangeConversion::NONE:
            return "NONE";
          case SampleRangeConversion::LIMITED_RANGE_CLIP:
            return "LIMITED_RANGE_CLIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SampleRangeConversionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
