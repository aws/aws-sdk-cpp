/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Av1FramerateConversionAlgorithm.h>
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
      namespace Av1FramerateConversionAlgorithmMapper
      {

        static constexpr uint32_t DUPLICATE_DROP_HASH = ConstExprHashingUtils::HashString("DUPLICATE_DROP");
        static constexpr uint32_t INTERPOLATE_HASH = ConstExprHashingUtils::HashString("INTERPOLATE");
        static constexpr uint32_t FRAMEFORMER_HASH = ConstExprHashingUtils::HashString("FRAMEFORMER");


        Av1FramerateConversionAlgorithm GetAv1FramerateConversionAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_DROP_HASH)
          {
            return Av1FramerateConversionAlgorithm::DUPLICATE_DROP;
          }
          else if (hashCode == INTERPOLATE_HASH)
          {
            return Av1FramerateConversionAlgorithm::INTERPOLATE;
          }
          else if (hashCode == FRAMEFORMER_HASH)
          {
            return Av1FramerateConversionAlgorithm::FRAMEFORMER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Av1FramerateConversionAlgorithm>(hashCode);
          }

          return Av1FramerateConversionAlgorithm::NOT_SET;
        }

        Aws::String GetNameForAv1FramerateConversionAlgorithm(Av1FramerateConversionAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case Av1FramerateConversionAlgorithm::NOT_SET:
            return {};
          case Av1FramerateConversionAlgorithm::DUPLICATE_DROP:
            return "DUPLICATE_DROP";
          case Av1FramerateConversionAlgorithm::INTERPOLATE:
            return "INTERPOLATE";
          case Av1FramerateConversionAlgorithm::FRAMEFORMER:
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

      } // namespace Av1FramerateConversionAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
