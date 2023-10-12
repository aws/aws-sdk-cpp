/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265FramerateConversionAlgorithm.h>
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
      namespace H265FramerateConversionAlgorithmMapper
      {

        static constexpr uint32_t DUPLICATE_DROP_HASH = ConstExprHashingUtils::HashString("DUPLICATE_DROP");
        static constexpr uint32_t INTERPOLATE_HASH = ConstExprHashingUtils::HashString("INTERPOLATE");
        static constexpr uint32_t FRAMEFORMER_HASH = ConstExprHashingUtils::HashString("FRAMEFORMER");


        H265FramerateConversionAlgorithm GetH265FramerateConversionAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_DROP_HASH)
          {
            return H265FramerateConversionAlgorithm::DUPLICATE_DROP;
          }
          else if (hashCode == INTERPOLATE_HASH)
          {
            return H265FramerateConversionAlgorithm::INTERPOLATE;
          }
          else if (hashCode == FRAMEFORMER_HASH)
          {
            return H265FramerateConversionAlgorithm::FRAMEFORMER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265FramerateConversionAlgorithm>(hashCode);
          }

          return H265FramerateConversionAlgorithm::NOT_SET;
        }

        Aws::String GetNameForH265FramerateConversionAlgorithm(H265FramerateConversionAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case H265FramerateConversionAlgorithm::NOT_SET:
            return {};
          case H265FramerateConversionAlgorithm::DUPLICATE_DROP:
            return "DUPLICATE_DROP";
          case H265FramerateConversionAlgorithm::INTERPOLATE:
            return "INTERPOLATE";
          case H265FramerateConversionAlgorithm::FRAMEFORMER:
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

      } // namespace H265FramerateConversionAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
