/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterScalingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace HyperParameterScalingTypeMapper
      {

        static constexpr uint32_t Auto_HASH = ConstExprHashingUtils::HashString("Auto");
        static constexpr uint32_t Linear_HASH = ConstExprHashingUtils::HashString("Linear");
        static constexpr uint32_t Logarithmic_HASH = ConstExprHashingUtils::HashString("Logarithmic");
        static constexpr uint32_t ReverseLogarithmic_HASH = ConstExprHashingUtils::HashString("ReverseLogarithmic");


        HyperParameterScalingType GetHyperParameterScalingTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Auto_HASH)
          {
            return HyperParameterScalingType::Auto;
          }
          else if (hashCode == Linear_HASH)
          {
            return HyperParameterScalingType::Linear;
          }
          else if (hashCode == Logarithmic_HASH)
          {
            return HyperParameterScalingType::Logarithmic;
          }
          else if (hashCode == ReverseLogarithmic_HASH)
          {
            return HyperParameterScalingType::ReverseLogarithmic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperParameterScalingType>(hashCode);
          }

          return HyperParameterScalingType::NOT_SET;
        }

        Aws::String GetNameForHyperParameterScalingType(HyperParameterScalingType enumValue)
        {
          switch(enumValue)
          {
          case HyperParameterScalingType::NOT_SET:
            return {};
          case HyperParameterScalingType::Auto:
            return "Auto";
          case HyperParameterScalingType::Linear:
            return "Linear";
          case HyperParameterScalingType::Logarithmic:
            return "Logarithmic";
          case HyperParameterScalingType::ReverseLogarithmic:
            return "ReverseLogarithmic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HyperParameterScalingTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
