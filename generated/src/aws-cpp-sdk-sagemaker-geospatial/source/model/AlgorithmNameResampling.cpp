/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/AlgorithmNameResampling.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerGeospatial
  {
    namespace Model
    {
      namespace AlgorithmNameResamplingMapper
      {

        static constexpr uint32_t NEAR_HASH = ConstExprHashingUtils::HashString("NEAR");
        static constexpr uint32_t BILINEAR_HASH = ConstExprHashingUtils::HashString("BILINEAR");
        static constexpr uint32_t CUBIC_HASH = ConstExprHashingUtils::HashString("CUBIC");
        static constexpr uint32_t CUBICSPLINE_HASH = ConstExprHashingUtils::HashString("CUBICSPLINE");
        static constexpr uint32_t LANCZOS_HASH = ConstExprHashingUtils::HashString("LANCZOS");
        static constexpr uint32_t AVERAGE_HASH = ConstExprHashingUtils::HashString("AVERAGE");
        static constexpr uint32_t RMS_HASH = ConstExprHashingUtils::HashString("RMS");
        static constexpr uint32_t MODE_HASH = ConstExprHashingUtils::HashString("MODE");
        static constexpr uint32_t MAX_HASH = ConstExprHashingUtils::HashString("MAX");
        static constexpr uint32_t MIN_HASH = ConstExprHashingUtils::HashString("MIN");
        static constexpr uint32_t MED_HASH = ConstExprHashingUtils::HashString("MED");
        static constexpr uint32_t Q1_HASH = ConstExprHashingUtils::HashString("Q1");
        static constexpr uint32_t Q3_HASH = ConstExprHashingUtils::HashString("Q3");
        static constexpr uint32_t SUM_HASH = ConstExprHashingUtils::HashString("SUM");


        AlgorithmNameResampling GetAlgorithmNameResamplingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEAR_HASH)
          {
            return AlgorithmNameResampling::NEAR;
          }
          else if (hashCode == BILINEAR_HASH)
          {
            return AlgorithmNameResampling::BILINEAR;
          }
          else if (hashCode == CUBIC_HASH)
          {
            return AlgorithmNameResampling::CUBIC;
          }
          else if (hashCode == CUBICSPLINE_HASH)
          {
            return AlgorithmNameResampling::CUBICSPLINE;
          }
          else if (hashCode == LANCZOS_HASH)
          {
            return AlgorithmNameResampling::LANCZOS;
          }
          else if (hashCode == AVERAGE_HASH)
          {
            return AlgorithmNameResampling::AVERAGE;
          }
          else if (hashCode == RMS_HASH)
          {
            return AlgorithmNameResampling::RMS;
          }
          else if (hashCode == MODE_HASH)
          {
            return AlgorithmNameResampling::MODE;
          }
          else if (hashCode == MAX_HASH)
          {
            return AlgorithmNameResampling::MAX;
          }
          else if (hashCode == MIN_HASH)
          {
            return AlgorithmNameResampling::MIN;
          }
          else if (hashCode == MED_HASH)
          {
            return AlgorithmNameResampling::MED;
          }
          else if (hashCode == Q1_HASH)
          {
            return AlgorithmNameResampling::Q1;
          }
          else if (hashCode == Q3_HASH)
          {
            return AlgorithmNameResampling::Q3;
          }
          else if (hashCode == SUM_HASH)
          {
            return AlgorithmNameResampling::SUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlgorithmNameResampling>(hashCode);
          }

          return AlgorithmNameResampling::NOT_SET;
        }

        Aws::String GetNameForAlgorithmNameResampling(AlgorithmNameResampling enumValue)
        {
          switch(enumValue)
          {
          case AlgorithmNameResampling::NOT_SET:
            return {};
          case AlgorithmNameResampling::NEAR:
            return "NEAR";
          case AlgorithmNameResampling::BILINEAR:
            return "BILINEAR";
          case AlgorithmNameResampling::CUBIC:
            return "CUBIC";
          case AlgorithmNameResampling::CUBICSPLINE:
            return "CUBICSPLINE";
          case AlgorithmNameResampling::LANCZOS:
            return "LANCZOS";
          case AlgorithmNameResampling::AVERAGE:
            return "AVERAGE";
          case AlgorithmNameResampling::RMS:
            return "RMS";
          case AlgorithmNameResampling::MODE:
            return "MODE";
          case AlgorithmNameResampling::MAX:
            return "MAX";
          case AlgorithmNameResampling::MIN:
            return "MIN";
          case AlgorithmNameResampling::MED:
            return "MED";
          case AlgorithmNameResampling::Q1:
            return "Q1";
          case AlgorithmNameResampling::Q3:
            return "Q3";
          case AlgorithmNameResampling::SUM:
            return "SUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlgorithmNameResamplingMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws
