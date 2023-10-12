/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ProresFramerateConversionAlgorithm.h>
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
      namespace ProresFramerateConversionAlgorithmMapper
      {

        static constexpr uint32_t DUPLICATE_DROP_HASH = ConstExprHashingUtils::HashString("DUPLICATE_DROP");
        static constexpr uint32_t INTERPOLATE_HASH = ConstExprHashingUtils::HashString("INTERPOLATE");
        static constexpr uint32_t FRAMEFORMER_HASH = ConstExprHashingUtils::HashString("FRAMEFORMER");


        ProresFramerateConversionAlgorithm GetProresFramerateConversionAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_DROP_HASH)
          {
            return ProresFramerateConversionAlgorithm::DUPLICATE_DROP;
          }
          else if (hashCode == INTERPOLATE_HASH)
          {
            return ProresFramerateConversionAlgorithm::INTERPOLATE;
          }
          else if (hashCode == FRAMEFORMER_HASH)
          {
            return ProresFramerateConversionAlgorithm::FRAMEFORMER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProresFramerateConversionAlgorithm>(hashCode);
          }

          return ProresFramerateConversionAlgorithm::NOT_SET;
        }

        Aws::String GetNameForProresFramerateConversionAlgorithm(ProresFramerateConversionAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case ProresFramerateConversionAlgorithm::NOT_SET:
            return {};
          case ProresFramerateConversionAlgorithm::DUPLICATE_DROP:
            return "DUPLICATE_DROP";
          case ProresFramerateConversionAlgorithm::INTERPOLATE:
            return "INTERPOLATE";
          case ProresFramerateConversionAlgorithm::FRAMEFORMER:
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

      } // namespace ProresFramerateConversionAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
