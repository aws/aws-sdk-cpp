/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanRateServiceCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SavingsPlans
  {
    namespace Model
    {
      namespace SavingsPlanRateServiceCodeMapper
      {

        static constexpr uint32_t AmazonEC2_HASH = ConstExprHashingUtils::HashString("AmazonEC2");
        static constexpr uint32_t AmazonECS_HASH = ConstExprHashingUtils::HashString("AmazonECS");
        static constexpr uint32_t AmazonEKS_HASH = ConstExprHashingUtils::HashString("AmazonEKS");
        static constexpr uint32_t AWSLambda_HASH = ConstExprHashingUtils::HashString("AWSLambda");
        static constexpr uint32_t AmazonSageMaker_HASH = ConstExprHashingUtils::HashString("AmazonSageMaker");


        SavingsPlanRateServiceCode GetSavingsPlanRateServiceCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AmazonEC2_HASH)
          {
            return SavingsPlanRateServiceCode::AmazonEC2;
          }
          else if (hashCode == AmazonECS_HASH)
          {
            return SavingsPlanRateServiceCode::AmazonECS;
          }
          else if (hashCode == AmazonEKS_HASH)
          {
            return SavingsPlanRateServiceCode::AmazonEKS;
          }
          else if (hashCode == AWSLambda_HASH)
          {
            return SavingsPlanRateServiceCode::AWSLambda;
          }
          else if (hashCode == AmazonSageMaker_HASH)
          {
            return SavingsPlanRateServiceCode::AmazonSageMaker;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanRateServiceCode>(hashCode);
          }

          return SavingsPlanRateServiceCode::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanRateServiceCode(SavingsPlanRateServiceCode enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanRateServiceCode::NOT_SET:
            return {};
          case SavingsPlanRateServiceCode::AmazonEC2:
            return "AmazonEC2";
          case SavingsPlanRateServiceCode::AmazonECS:
            return "AmazonECS";
          case SavingsPlanRateServiceCode::AmazonEKS:
            return "AmazonEKS";
          case SavingsPlanRateServiceCode::AWSLambda:
            return "AWSLambda";
          case SavingsPlanRateServiceCode::AmazonSageMaker:
            return "AmazonSageMaker";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanRateServiceCodeMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
