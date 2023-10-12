/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vp9FramerateConversionAlgorithm.h>
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
      namespace Vp9FramerateConversionAlgorithmMapper
      {

        static constexpr uint32_t DUPLICATE_DROP_HASH = ConstExprHashingUtils::HashString("DUPLICATE_DROP");
        static constexpr uint32_t INTERPOLATE_HASH = ConstExprHashingUtils::HashString("INTERPOLATE");
        static constexpr uint32_t FRAMEFORMER_HASH = ConstExprHashingUtils::HashString("FRAMEFORMER");


        Vp9FramerateConversionAlgorithm GetVp9FramerateConversionAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_DROP_HASH)
          {
            return Vp9FramerateConversionAlgorithm::DUPLICATE_DROP;
          }
          else if (hashCode == INTERPOLATE_HASH)
          {
            return Vp9FramerateConversionAlgorithm::INTERPOLATE;
          }
          else if (hashCode == FRAMEFORMER_HASH)
          {
            return Vp9FramerateConversionAlgorithm::FRAMEFORMER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vp9FramerateConversionAlgorithm>(hashCode);
          }

          return Vp9FramerateConversionAlgorithm::NOT_SET;
        }

        Aws::String GetNameForVp9FramerateConversionAlgorithm(Vp9FramerateConversionAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case Vp9FramerateConversionAlgorithm::NOT_SET:
            return {};
          case Vp9FramerateConversionAlgorithm::DUPLICATE_DROP:
            return "DUPLICATE_DROP";
          case Vp9FramerateConversionAlgorithm::INTERPOLATE:
            return "INTERPOLATE";
          case Vp9FramerateConversionAlgorithm::FRAMEFORMER:
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

      } // namespace Vp9FramerateConversionAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
