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

        static const int AmazonEC2_HASH = HashingUtils::HashString("AmazonEC2");
        static const int AmazonECS_HASH = HashingUtils::HashString("AmazonECS");
        static const int AmazonEKS_HASH = HashingUtils::HashString("AmazonEKS");
        static const int AWSLambda_HASH = HashingUtils::HashString("AWSLambda");
        static const int AmazonSageMaker_HASH = HashingUtils::HashString("AmazonSageMaker");


        SavingsPlanRateServiceCode GetSavingsPlanRateServiceCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
