/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AvcIntraFramerateConversionAlgorithm.h>
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
      namespace AvcIntraFramerateConversionAlgorithmMapper
      {

        static constexpr uint32_t DUPLICATE_DROP_HASH = ConstExprHashingUtils::HashString("DUPLICATE_DROP");
        static constexpr uint32_t INTERPOLATE_HASH = ConstExprHashingUtils::HashString("INTERPOLATE");
        static constexpr uint32_t FRAMEFORMER_HASH = ConstExprHashingUtils::HashString("FRAMEFORMER");


        AvcIntraFramerateConversionAlgorithm GetAvcIntraFramerateConversionAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_DROP_HASH)
          {
            return AvcIntraFramerateConversionAlgorithm::DUPLICATE_DROP;
          }
          else if (hashCode == INTERPOLATE_HASH)
          {
            return AvcIntraFramerateConversionAlgorithm::INTERPOLATE;
          }
          else if (hashCode == FRAMEFORMER_HASH)
          {
            return AvcIntraFramerateConversionAlgorithm::FRAMEFORMER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AvcIntraFramerateConversionAlgorithm>(hashCode);
          }

          return AvcIntraFramerateConversionAlgorithm::NOT_SET;
        }

        Aws::String GetNameForAvcIntraFramerateConversionAlgorithm(AvcIntraFramerateConversionAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case AvcIntraFramerateConversionAlgorithm::NOT_SET:
            return {};
          case AvcIntraFramerateConversionAlgorithm::DUPLICATE_DROP:
            return "DUPLICATE_DROP";
          case AvcIntraFramerateConversionAlgorithm::INTERPOLATE:
            return "INTERPOLATE";
          case AvcIntraFramerateConversionAlgorithm::FRAMEFORMER:
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

      } // namespace AvcIntraFramerateConversionAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
