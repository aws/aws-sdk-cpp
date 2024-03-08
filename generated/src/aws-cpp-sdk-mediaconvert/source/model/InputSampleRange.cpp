/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/InputSampleRange.h>
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
      namespace InputSampleRangeMapper
      {

        static const int FOLLOW_HASH = HashingUtils::HashString("FOLLOW");
        static const int FULL_RANGE_HASH = HashingUtils::HashString("FULL_RANGE");
        static const int LIMITED_RANGE_HASH = HashingUtils::HashString("LIMITED_RANGE");


        InputSampleRange GetInputSampleRangeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_HASH)
          {
            return InputSampleRange::FOLLOW;
          }
          else if (hashCode == FULL_RANGE_HASH)
          {
            return InputSampleRange::FULL_RANGE;
          }
          else if (hashCode == LIMITED_RANGE_HASH)
          {
            return InputSampleRange::LIMITED_RANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputSampleRange>(hashCode);
          }

          return InputSampleRange::NOT_SET;
        }

        Aws::String GetNameForInputSampleRange(InputSampleRange enumValue)
        {
          switch(enumValue)
          {
          case InputSampleRange::NOT_SET:
            return {};
          case InputSampleRange::FOLLOW:
            return "FOLLOW";
          case InputSampleRange::FULL_RANGE:
            return "FULL_RANGE";
          case InputSampleRange::LIMITED_RANGE:
            return "LIMITED_RANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputSampleRangeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
