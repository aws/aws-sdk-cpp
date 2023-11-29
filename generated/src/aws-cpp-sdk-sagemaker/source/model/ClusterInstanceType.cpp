/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterInstanceType.h>
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
      namespace ClusterInstanceTypeMapper
      {

        static const int ml_p4d_24xlarge_HASH = HashingUtils::HashString("ml.p4d.24xlarge");
        static const int ml_p4de_24xlarge_HASH = HashingUtils::HashString("ml.p4de.24xlarge");
        static const int ml_p5_48xlarge_HASH = HashingUtils::HashString("ml.p5.48xlarge");
        static const int ml_trn1_32xlarge_HASH = HashingUtils::HashString("ml.trn1.32xlarge");
        static const int ml_trn1n_32xlarge_HASH = HashingUtils::HashString("ml.trn1n.32xlarge");
        static const int ml_g5_xlarge_HASH = HashingUtils::HashString("ml.g5.xlarge");
        static const int ml_g5_2xlarge_HASH = HashingUtils::HashString("ml.g5.2xlarge");
        static const int ml_g5_4xlarge_HASH = HashingUtils::HashString("ml.g5.4xlarge");
        static const int ml_g5_8xlarge_HASH = HashingUtils::HashString("ml.g5.8xlarge");
        static const int ml_g5_12xlarge_HASH = HashingUtils::HashString("ml.g5.12xlarge");
        static const int ml_g5_16xlarge_HASH = HashingUtils::HashString("ml.g5.16xlarge");
        static const int ml_g5_24xlarge_HASH = HashingUtils::HashString("ml.g5.24xlarge");
        static const int ml_g5_48xlarge_HASH = HashingUtils::HashString("ml.g5.48xlarge");
        static const int ml_c5_large_HASH = HashingUtils::HashString("ml.c5.large");
        static const int ml_c5_xlarge_HASH = HashingUtils::HashString("ml.c5.xlarge");
        static const int ml_c5_2xlarge_HASH = HashingUtils::HashString("ml.c5.2xlarge");
        static const int ml_c5_4xlarge_HASH = HashingUtils::HashString("ml.c5.4xlarge");
        static const int ml_c5_9xlarge_HASH = HashingUtils::HashString("ml.c5.9xlarge");
        static const int ml_c5_12xlarge_HASH = HashingUtils::HashString("ml.c5.12xlarge");
        static const int ml_c5_18xlarge_HASH = HashingUtils::HashString("ml.c5.18xlarge");
        static const int ml_c5_24xlarge_HASH = HashingUtils::HashString("ml.c5.24xlarge");
        static const int ml_c5n_large_HASH = HashingUtils::HashString("ml.c5n.large");
        static const int ml_c5n_2xlarge_HASH = HashingUtils::HashString("ml.c5n.2xlarge");
        static const int ml_c5n_4xlarge_HASH = HashingUtils::HashString("ml.c5n.4xlarge");
        static const int ml_c5n_9xlarge_HASH = HashingUtils::HashString("ml.c5n.9xlarge");
        static const int ml_c5n_18xlarge_HASH = HashingUtils::HashString("ml.c5n.18xlarge");
        static const int ml_m5_large_HASH = HashingUtils::HashString("ml.m5.large");
        static const int ml_m5_xlarge_HASH = HashingUtils::HashString("ml.m5.xlarge");
        static const int ml_m5_2xlarge_HASH = HashingUtils::HashString("ml.m5.2xlarge");
        static const int ml_m5_4xlarge_HASH = HashingUtils::HashString("ml.m5.4xlarge");
        static const int ml_m5_8xlarge_HASH = HashingUtils::HashString("ml.m5.8xlarge");
        static const int ml_m5_12xlarge_HASH = HashingUtils::HashString("ml.m5.12xlarge");
        static const int ml_m5_16xlarge_HASH = HashingUtils::HashString("ml.m5.16xlarge");
        static const int ml_m5_24xlarge_HASH = HashingUtils::HashString("ml.m5.24xlarge");
        static const int ml_t3_medium_HASH = HashingUtils::HashString("ml.t3.medium");
        static const int ml_t3_large_HASH = HashingUtils::HashString("ml.t3.large");
        static const int ml_t3_xlarge_HASH = HashingUtils::HashString("ml.t3.xlarge");
        static const int ml_t3_2xlarge_HASH = HashingUtils::HashString("ml.t3.2xlarge");


        ClusterInstanceType GetClusterInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ml_p4d_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_p4d_24xlarge;
          }
          else if (hashCode == ml_p4de_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_p4de_24xlarge;
          }
          else if (hashCode == ml_p5_48xlarge_HASH)
          {
            return ClusterInstanceType::ml_p5_48xlarge;
          }
          else if (hashCode == ml_trn1_32xlarge_HASH)
          {
            return ClusterInstanceType::ml_trn1_32xlarge;
          }
          else if (hashCode == ml_trn1n_32xlarge_HASH)
          {
            return ClusterInstanceType::ml_trn1n_32xlarge;
          }
          else if (hashCode == ml_g5_xlarge_HASH)
          {
            return ClusterInstanceType::ml_g5_xlarge;
          }
          else if (hashCode == ml_g5_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_g5_2xlarge;
          }
          else if (hashCode == ml_g5_4xlarge_HASH)
          {
            return ClusterInstanceType::ml_g5_4xlarge;
          }
          else if (hashCode == ml_g5_8xlarge_HASH)
          {
            return ClusterInstanceType::ml_g5_8xlarge;
          }
          else if (hashCode == ml_g5_12xlarge_HASH)
          {
            return ClusterInstanceType::ml_g5_12xlarge;
          }
          else if (hashCode == ml_g5_16xlarge_HASH)
          {
            return ClusterInstanceType::ml_g5_16xlarge;
          }
          else if (hashCode == ml_g5_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_g5_24xlarge;
          }
          else if (hashCode == ml_g5_48xlarge_HASH)
          {
            return ClusterInstanceType::ml_g5_48xlarge;
          }
          else if (hashCode == ml_c5_large_HASH)
          {
            return ClusterInstanceType::ml_c5_large;
          }
          else if (hashCode == ml_c5_xlarge_HASH)
          {
            return ClusterInstanceType::ml_c5_xlarge;
          }
          else if (hashCode == ml_c5_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_c5_2xlarge;
          }
          else if (hashCode == ml_c5_4xlarge_HASH)
          {
            return ClusterInstanceType::ml_c5_4xlarge;
          }
          else if (hashCode == ml_c5_9xlarge_HASH)
          {
            return ClusterInstanceType::ml_c5_9xlarge;
          }
          else if (hashCode == ml_c5_12xlarge_HASH)
          {
            return ClusterInstanceType::ml_c5_12xlarge;
          }
          else if (hashCode == ml_c5_18xlarge_HASH)
          {
            return ClusterInstanceType::ml_c5_18xlarge;
          }
          else if (hashCode == ml_c5_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_c5_24xlarge;
          }
          else if (hashCode == ml_c5n_large_HASH)
          {
            return ClusterInstanceType::ml_c5n_large;
          }
          else if (hashCode == ml_c5n_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_c5n_2xlarge;
          }
          else if (hashCode == ml_c5n_4xlarge_HASH)
          {
            return ClusterInstanceType::ml_c5n_4xlarge;
          }
          else if (hashCode == ml_c5n_9xlarge_HASH)
          {
            return ClusterInstanceType::ml_c5n_9xlarge;
          }
          else if (hashCode == ml_c5n_18xlarge_HASH)
          {
            return ClusterInstanceType::ml_c5n_18xlarge;
          }
          else if (hashCode == ml_m5_large_HASH)
          {
            return ClusterInstanceType::ml_m5_large;
          }
          else if (hashCode == ml_m5_xlarge_HASH)
          {
            return ClusterInstanceType::ml_m5_xlarge;
          }
          else if (hashCode == ml_m5_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_m5_2xlarge;
          }
          else if (hashCode == ml_m5_4xlarge_HASH)
          {
            return ClusterInstanceType::ml_m5_4xlarge;
          }
          else if (hashCode == ml_m5_8xlarge_HASH)
          {
            return ClusterInstanceType::ml_m5_8xlarge;
          }
          else if (hashCode == ml_m5_12xlarge_HASH)
          {
            return ClusterInstanceType::ml_m5_12xlarge;
          }
          else if (hashCode == ml_m5_16xlarge_HASH)
          {
            return ClusterInstanceType::ml_m5_16xlarge;
          }
          else if (hashCode == ml_m5_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_m5_24xlarge;
          }
          else if (hashCode == ml_t3_medium_HASH)
          {
            return ClusterInstanceType::ml_t3_medium;
          }
          else if (hashCode == ml_t3_large_HASH)
          {
            return ClusterInstanceType::ml_t3_large;
          }
          else if (hashCode == ml_t3_xlarge_HASH)
          {
            return ClusterInstanceType::ml_t3_xlarge;
          }
          else if (hashCode == ml_t3_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_t3_2xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterInstanceType>(hashCode);
          }

          return ClusterInstanceType::NOT_SET;
        }

        Aws::String GetNameForClusterInstanceType(ClusterInstanceType enumValue)
        {
          switch(enumValue)
          {
          case ClusterInstanceType::NOT_SET:
            return {};
          case ClusterInstanceType::ml_p4d_24xlarge:
            return "ml.p4d.24xlarge";
          case ClusterInstanceType::ml_p4de_24xlarge:
            return "ml.p4de.24xlarge";
          case ClusterInstanceType::ml_p5_48xlarge:
            return "ml.p5.48xlarge";
          case ClusterInstanceType::ml_trn1_32xlarge:
            return "ml.trn1.32xlarge";
          case ClusterInstanceType::ml_trn1n_32xlarge:
            return "ml.trn1n.32xlarge";
          case ClusterInstanceType::ml_g5_xlarge:
            return "ml.g5.xlarge";
          case ClusterInstanceType::ml_g5_2xlarge:
            return "ml.g5.2xlarge";
          case ClusterInstanceType::ml_g5_4xlarge:
            return "ml.g5.4xlarge";
          case ClusterInstanceType::ml_g5_8xlarge:
            return "ml.g5.8xlarge";
          case ClusterInstanceType::ml_g5_12xlarge:
            return "ml.g5.12xlarge";
          case ClusterInstanceType::ml_g5_16xlarge:
            return "ml.g5.16xlarge";
          case ClusterInstanceType::ml_g5_24xlarge:
            return "ml.g5.24xlarge";
          case ClusterInstanceType::ml_g5_48xlarge:
            return "ml.g5.48xlarge";
          case ClusterInstanceType::ml_c5_large:
            return "ml.c5.large";
          case ClusterInstanceType::ml_c5_xlarge:
            return "ml.c5.xlarge";
          case ClusterInstanceType::ml_c5_2xlarge:
            return "ml.c5.2xlarge";
          case ClusterInstanceType::ml_c5_4xlarge:
            return "ml.c5.4xlarge";
          case ClusterInstanceType::ml_c5_9xlarge:
            return "ml.c5.9xlarge";
          case ClusterInstanceType::ml_c5_12xlarge:
            return "ml.c5.12xlarge";
          case ClusterInstanceType::ml_c5_18xlarge:
            return "ml.c5.18xlarge";
          case ClusterInstanceType::ml_c5_24xlarge:
            return "ml.c5.24xlarge";
          case ClusterInstanceType::ml_c5n_large:
            return "ml.c5n.large";
          case ClusterInstanceType::ml_c5n_2xlarge:
            return "ml.c5n.2xlarge";
          case ClusterInstanceType::ml_c5n_4xlarge:
            return "ml.c5n.4xlarge";
          case ClusterInstanceType::ml_c5n_9xlarge:
            return "ml.c5n.9xlarge";
          case ClusterInstanceType::ml_c5n_18xlarge:
            return "ml.c5n.18xlarge";
          case ClusterInstanceType::ml_m5_large:
            return "ml.m5.large";
          case ClusterInstanceType::ml_m5_xlarge:
            return "ml.m5.xlarge";
          case ClusterInstanceType::ml_m5_2xlarge:
            return "ml.m5.2xlarge";
          case ClusterInstanceType::ml_m5_4xlarge:
            return "ml.m5.4xlarge";
          case ClusterInstanceType::ml_m5_8xlarge:
            return "ml.m5.8xlarge";
          case ClusterInstanceType::ml_m5_12xlarge:
            return "ml.m5.12xlarge";
          case ClusterInstanceType::ml_m5_16xlarge:
            return "ml.m5.16xlarge";
          case ClusterInstanceType::ml_m5_24xlarge:
            return "ml.m5.24xlarge";
          case ClusterInstanceType::ml_t3_medium:
            return "ml.t3.medium";
          case ClusterInstanceType::ml_t3_large:
            return "ml.t3.large";
          case ClusterInstanceType::ml_t3_xlarge:
            return "ml.t3.xlarge";
          case ClusterInstanceType::ml_t3_2xlarge:
            return "ml.t3.2xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterInstanceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
