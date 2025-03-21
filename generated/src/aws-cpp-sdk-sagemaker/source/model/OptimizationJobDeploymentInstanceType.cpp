/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OptimizationJobDeploymentInstanceType.h>
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
      namespace OptimizationJobDeploymentInstanceTypeMapper
      {

        static const int ml_p4d_24xlarge_HASH = HashingUtils::HashString("ml.p4d.24xlarge");
        static const int ml_p4de_24xlarge_HASH = HashingUtils::HashString("ml.p4de.24xlarge");
        static const int ml_p5_48xlarge_HASH = HashingUtils::HashString("ml.p5.48xlarge");
        static const int ml_g5_xlarge_HASH = HashingUtils::HashString("ml.g5.xlarge");
        static const int ml_g5_2xlarge_HASH = HashingUtils::HashString("ml.g5.2xlarge");
        static const int ml_g5_4xlarge_HASH = HashingUtils::HashString("ml.g5.4xlarge");
        static const int ml_g5_8xlarge_HASH = HashingUtils::HashString("ml.g5.8xlarge");
        static const int ml_g5_12xlarge_HASH = HashingUtils::HashString("ml.g5.12xlarge");
        static const int ml_g5_16xlarge_HASH = HashingUtils::HashString("ml.g5.16xlarge");
        static const int ml_g5_24xlarge_HASH = HashingUtils::HashString("ml.g5.24xlarge");
        static const int ml_g5_48xlarge_HASH = HashingUtils::HashString("ml.g5.48xlarge");
        static const int ml_g6_xlarge_HASH = HashingUtils::HashString("ml.g6.xlarge");
        static const int ml_g6_2xlarge_HASH = HashingUtils::HashString("ml.g6.2xlarge");
        static const int ml_g6_4xlarge_HASH = HashingUtils::HashString("ml.g6.4xlarge");
        static const int ml_g6_8xlarge_HASH = HashingUtils::HashString("ml.g6.8xlarge");
        static const int ml_g6_12xlarge_HASH = HashingUtils::HashString("ml.g6.12xlarge");
        static const int ml_g6_16xlarge_HASH = HashingUtils::HashString("ml.g6.16xlarge");
        static const int ml_g6_24xlarge_HASH = HashingUtils::HashString("ml.g6.24xlarge");
        static const int ml_g6_48xlarge_HASH = HashingUtils::HashString("ml.g6.48xlarge");
        static const int ml_g6e_xlarge_HASH = HashingUtils::HashString("ml.g6e.xlarge");
        static const int ml_g6e_2xlarge_HASH = HashingUtils::HashString("ml.g6e.2xlarge");
        static const int ml_g6e_4xlarge_HASH = HashingUtils::HashString("ml.g6e.4xlarge");
        static const int ml_g6e_8xlarge_HASH = HashingUtils::HashString("ml.g6e.8xlarge");
        static const int ml_g6e_12xlarge_HASH = HashingUtils::HashString("ml.g6e.12xlarge");
        static const int ml_g6e_16xlarge_HASH = HashingUtils::HashString("ml.g6e.16xlarge");
        static const int ml_g6e_24xlarge_HASH = HashingUtils::HashString("ml.g6e.24xlarge");
        static const int ml_g6e_48xlarge_HASH = HashingUtils::HashString("ml.g6e.48xlarge");
        static const int ml_inf2_xlarge_HASH = HashingUtils::HashString("ml.inf2.xlarge");
        static const int ml_inf2_8xlarge_HASH = HashingUtils::HashString("ml.inf2.8xlarge");
        static const int ml_inf2_24xlarge_HASH = HashingUtils::HashString("ml.inf2.24xlarge");
        static const int ml_inf2_48xlarge_HASH = HashingUtils::HashString("ml.inf2.48xlarge");
        static const int ml_trn1_2xlarge_HASH = HashingUtils::HashString("ml.trn1.2xlarge");
        static const int ml_trn1_32xlarge_HASH = HashingUtils::HashString("ml.trn1.32xlarge");
        static const int ml_trn1n_32xlarge_HASH = HashingUtils::HashString("ml.trn1n.32xlarge");


        OptimizationJobDeploymentInstanceType GetOptimizationJobDeploymentInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ml_p4d_24xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_p4d_24xlarge;
          }
          else if (hashCode == ml_p4de_24xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_p4de_24xlarge;
          }
          else if (hashCode == ml_p5_48xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_p5_48xlarge;
          }
          else if (hashCode == ml_g5_xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g5_xlarge;
          }
          else if (hashCode == ml_g5_2xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g5_2xlarge;
          }
          else if (hashCode == ml_g5_4xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g5_4xlarge;
          }
          else if (hashCode == ml_g5_8xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g5_8xlarge;
          }
          else if (hashCode == ml_g5_12xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g5_12xlarge;
          }
          else if (hashCode == ml_g5_16xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g5_16xlarge;
          }
          else if (hashCode == ml_g5_24xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g5_24xlarge;
          }
          else if (hashCode == ml_g5_48xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g5_48xlarge;
          }
          else if (hashCode == ml_g6_xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6_xlarge;
          }
          else if (hashCode == ml_g6_2xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6_2xlarge;
          }
          else if (hashCode == ml_g6_4xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6_4xlarge;
          }
          else if (hashCode == ml_g6_8xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6_8xlarge;
          }
          else if (hashCode == ml_g6_12xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6_12xlarge;
          }
          else if (hashCode == ml_g6_16xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6_16xlarge;
          }
          else if (hashCode == ml_g6_24xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6_24xlarge;
          }
          else if (hashCode == ml_g6_48xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6_48xlarge;
          }
          else if (hashCode == ml_g6e_xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6e_xlarge;
          }
          else if (hashCode == ml_g6e_2xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6e_2xlarge;
          }
          else if (hashCode == ml_g6e_4xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6e_4xlarge;
          }
          else if (hashCode == ml_g6e_8xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6e_8xlarge;
          }
          else if (hashCode == ml_g6e_12xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6e_12xlarge;
          }
          else if (hashCode == ml_g6e_16xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6e_16xlarge;
          }
          else if (hashCode == ml_g6e_24xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6e_24xlarge;
          }
          else if (hashCode == ml_g6e_48xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_g6e_48xlarge;
          }
          else if (hashCode == ml_inf2_xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_inf2_xlarge;
          }
          else if (hashCode == ml_inf2_8xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_inf2_8xlarge;
          }
          else if (hashCode == ml_inf2_24xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_inf2_24xlarge;
          }
          else if (hashCode == ml_inf2_48xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_inf2_48xlarge;
          }
          else if (hashCode == ml_trn1_2xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_trn1_2xlarge;
          }
          else if (hashCode == ml_trn1_32xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_trn1_32xlarge;
          }
          else if (hashCode == ml_trn1n_32xlarge_HASH)
          {
            return OptimizationJobDeploymentInstanceType::ml_trn1n_32xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OptimizationJobDeploymentInstanceType>(hashCode);
          }

          return OptimizationJobDeploymentInstanceType::NOT_SET;
        }

        Aws::String GetNameForOptimizationJobDeploymentInstanceType(OptimizationJobDeploymentInstanceType enumValue)
        {
          switch(enumValue)
          {
          case OptimizationJobDeploymentInstanceType::NOT_SET:
            return {};
          case OptimizationJobDeploymentInstanceType::ml_p4d_24xlarge:
            return "ml.p4d.24xlarge";
          case OptimizationJobDeploymentInstanceType::ml_p4de_24xlarge:
            return "ml.p4de.24xlarge";
          case OptimizationJobDeploymentInstanceType::ml_p5_48xlarge:
            return "ml.p5.48xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g5_xlarge:
            return "ml.g5.xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g5_2xlarge:
            return "ml.g5.2xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g5_4xlarge:
            return "ml.g5.4xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g5_8xlarge:
            return "ml.g5.8xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g5_12xlarge:
            return "ml.g5.12xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g5_16xlarge:
            return "ml.g5.16xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g5_24xlarge:
            return "ml.g5.24xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g5_48xlarge:
            return "ml.g5.48xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6_xlarge:
            return "ml.g6.xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6_2xlarge:
            return "ml.g6.2xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6_4xlarge:
            return "ml.g6.4xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6_8xlarge:
            return "ml.g6.8xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6_12xlarge:
            return "ml.g6.12xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6_16xlarge:
            return "ml.g6.16xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6_24xlarge:
            return "ml.g6.24xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6_48xlarge:
            return "ml.g6.48xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6e_xlarge:
            return "ml.g6e.xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6e_2xlarge:
            return "ml.g6e.2xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6e_4xlarge:
            return "ml.g6e.4xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6e_8xlarge:
            return "ml.g6e.8xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6e_12xlarge:
            return "ml.g6e.12xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6e_16xlarge:
            return "ml.g6e.16xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6e_24xlarge:
            return "ml.g6e.24xlarge";
          case OptimizationJobDeploymentInstanceType::ml_g6e_48xlarge:
            return "ml.g6e.48xlarge";
          case OptimizationJobDeploymentInstanceType::ml_inf2_xlarge:
            return "ml.inf2.xlarge";
          case OptimizationJobDeploymentInstanceType::ml_inf2_8xlarge:
            return "ml.inf2.8xlarge";
          case OptimizationJobDeploymentInstanceType::ml_inf2_24xlarge:
            return "ml.inf2.24xlarge";
          case OptimizationJobDeploymentInstanceType::ml_inf2_48xlarge:
            return "ml.inf2.48xlarge";
          case OptimizationJobDeploymentInstanceType::ml_trn1_2xlarge:
            return "ml.trn1.2xlarge";
          case OptimizationJobDeploymentInstanceType::ml_trn1_32xlarge:
            return "ml.trn1.32xlarge";
          case OptimizationJobDeploymentInstanceType::ml_trn1n_32xlarge:
            return "ml.trn1n.32xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OptimizationJobDeploymentInstanceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
