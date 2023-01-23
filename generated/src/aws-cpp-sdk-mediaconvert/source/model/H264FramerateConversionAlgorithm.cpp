/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264FramerateConversionAlgorithm.h>
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
      namespace H264FramerateConversionAlgorithmMapper
      {

        static const int DUPLICATE_DROP_HASH = HashingUtils::HashString("DUPLICATE_DROP");
        static const int INTERPOLATE_HASH = HashingUtils::HashString("INTERPOLATE");
        static const int FRAMEFORMER_HASH = HashingUtils::HashString("FRAMEFORMER");


        H264FramerateConversionAlgorithm GetH264FramerateConversionAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_DROP_HASH)
          {
            return H264FramerateConversionAlgorithm::DUPLICATE_DROP;
          }
          else if (hashCode == INTERPOLATE_HASH)
          {
            return H264FramerateConversionAlgorithm::INTERPOLATE;
          }
          else if (hashCode == FRAMEFORMER_HASH)
          {
            return H264FramerateConversionAlgorithm::FRAMEFORMER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264FramerateConversionAlgorithm>(hashCode);
          }

          return H264FramerateConversionAlgorithm::NOT_SET;
        }

        Aws::String GetNameForH264FramerateConversionAlgorithm(H264FramerateConversionAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case H264FramerateConversionAlgorithm::DUPLICATE_DROP:
            return "DUPLICATE_DROP";
          case H264FramerateConversionAlgorithm::INTERPOLATE:
            return "INTERPOLATE";
          case H264FramerateConversionAlgorithm::FRAMEFORMER:
            return "FRAMEFORMER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264FramerateConversionAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
