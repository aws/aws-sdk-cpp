/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanProductType.h>
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
      namespace SavingsPlanProductTypeMapper
      {

        static constexpr uint32_t EC2_HASH = ConstExprHashingUtils::HashString("EC2");
        static constexpr uint32_t Fargate_HASH = ConstExprHashingUtils::HashString("Fargate");
        static constexpr uint32_t Lambda_HASH = ConstExprHashingUtils::HashString("Lambda");
        static constexpr uint32_t SageMaker_HASH = ConstExprHashingUtils::HashString("SageMaker");


        SavingsPlanProductType GetSavingsPlanProductTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_HASH)
          {
            return SavingsPlanProductType::EC2;
          }
          else if (hashCode == Fargate_HASH)
          {
            return SavingsPlanProductType::Fargate;
          }
          else if (hashCode == Lambda_HASH)
          {
            return SavingsPlanProductType::Lambda;
          }
          else if (hashCode == SageMaker_HASH)
          {
            return SavingsPlanProductType::SageMaker;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanProductType>(hashCode);
          }

          return SavingsPlanProductType::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanProductType(SavingsPlanProductType enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanProductType::NOT_SET:
            return {};
          case SavingsPlanProductType::EC2:
            return "EC2";
          case SavingsPlanProductType::Fargate:
            return "Fargate";
          case SavingsPlanProductType::Lambda:
            return "Lambda";
          case SavingsPlanProductType::SageMaker:
            return "SageMaker";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanProductTypeMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
