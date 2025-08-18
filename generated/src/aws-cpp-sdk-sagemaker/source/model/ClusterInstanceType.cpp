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
        static const int ml_p6e_gb200_36xlarge_HASH = HashingUtils::HashString("ml.p6e-gb200.36xlarge");
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
        static const int ml_g6_xlarge_HASH = HashingUtils::HashString("ml.g6.xlarge");
        static const int ml_g6_2xlarge_HASH = HashingUtils::HashString("ml.g6.2xlarge");
        static const int ml_g6_4xlarge_HASH = HashingUtils::HashString("ml.g6.4xlarge");
        static const int ml_g6_8xlarge_HASH = HashingUtils::HashString("ml.g6.8xlarge");
        static const int ml_g6_16xlarge_HASH = HashingUtils::HashString("ml.g6.16xlarge");
        static const int ml_g6_12xlarge_HASH = HashingUtils::HashString("ml.g6.12xlarge");
        static const int ml_g6_24xlarge_HASH = HashingUtils::HashString("ml.g6.24xlarge");
        static const int ml_g6_48xlarge_HASH = HashingUtils::HashString("ml.g6.48xlarge");
        static const int ml_gr6_4xlarge_HASH = HashingUtils::HashString("ml.gr6.4xlarge");
        static const int ml_gr6_8xlarge_HASH = HashingUtils::HashString("ml.gr6.8xlarge");
        static const int ml_g6e_xlarge_HASH = HashingUtils::HashString("ml.g6e.xlarge");
        static const int ml_g6e_2xlarge_HASH = HashingUtils::HashString("ml.g6e.2xlarge");
        static const int ml_g6e_4xlarge_HASH = HashingUtils::HashString("ml.g6e.4xlarge");
        static const int ml_g6e_8xlarge_HASH = HashingUtils::HashString("ml.g6e.8xlarge");
        static const int ml_g6e_16xlarge_HASH = HashingUtils::HashString("ml.g6e.16xlarge");
        static const int ml_g6e_12xlarge_HASH = HashingUtils::HashString("ml.g6e.12xlarge");
        static const int ml_g6e_24xlarge_HASH = HashingUtils::HashString("ml.g6e.24xlarge");
        static const int ml_g6e_48xlarge_HASH = HashingUtils::HashString("ml.g6e.48xlarge");
        static const int ml_p5e_48xlarge_HASH = HashingUtils::HashString("ml.p5e.48xlarge");
        static const int ml_p5en_48xlarge_HASH = HashingUtils::HashString("ml.p5en.48xlarge");
        static const int ml_p6_b200_48xlarge_HASH = HashingUtils::HashString("ml.p6-b200.48xlarge");
        static const int ml_trn2_48xlarge_HASH = HashingUtils::HashString("ml.trn2.48xlarge");
        static const int ml_c6i_large_HASH = HashingUtils::HashString("ml.c6i.large");
        static const int ml_c6i_xlarge_HASH = HashingUtils::HashString("ml.c6i.xlarge");
        static const int ml_c6i_2xlarge_HASH = HashingUtils::HashString("ml.c6i.2xlarge");
        static const int ml_c6i_4xlarge_HASH = HashingUtils::HashString("ml.c6i.4xlarge");
        static const int ml_c6i_8xlarge_HASH = HashingUtils::HashString("ml.c6i.8xlarge");
        static const int ml_c6i_12xlarge_HASH = HashingUtils::HashString("ml.c6i.12xlarge");
        static const int ml_c6i_16xlarge_HASH = HashingUtils::HashString("ml.c6i.16xlarge");
        static const int ml_c6i_24xlarge_HASH = HashingUtils::HashString("ml.c6i.24xlarge");
        static const int ml_c6i_32xlarge_HASH = HashingUtils::HashString("ml.c6i.32xlarge");
        static const int ml_m6i_large_HASH = HashingUtils::HashString("ml.m6i.large");
        static const int ml_m6i_xlarge_HASH = HashingUtils::HashString("ml.m6i.xlarge");
        static const int ml_m6i_2xlarge_HASH = HashingUtils::HashString("ml.m6i.2xlarge");
        static const int ml_m6i_4xlarge_HASH = HashingUtils::HashString("ml.m6i.4xlarge");
        static const int ml_m6i_8xlarge_HASH = HashingUtils::HashString("ml.m6i.8xlarge");
        static const int ml_m6i_12xlarge_HASH = HashingUtils::HashString("ml.m6i.12xlarge");
        static const int ml_m6i_16xlarge_HASH = HashingUtils::HashString("ml.m6i.16xlarge");
        static const int ml_m6i_24xlarge_HASH = HashingUtils::HashString("ml.m6i.24xlarge");
        static const int ml_m6i_32xlarge_HASH = HashingUtils::HashString("ml.m6i.32xlarge");
        static const int ml_r6i_large_HASH = HashingUtils::HashString("ml.r6i.large");
        static const int ml_r6i_xlarge_HASH = HashingUtils::HashString("ml.r6i.xlarge");
        static const int ml_r6i_2xlarge_HASH = HashingUtils::HashString("ml.r6i.2xlarge");
        static const int ml_r6i_4xlarge_HASH = HashingUtils::HashString("ml.r6i.4xlarge");
        static const int ml_r6i_8xlarge_HASH = HashingUtils::HashString("ml.r6i.8xlarge");
        static const int ml_r6i_12xlarge_HASH = HashingUtils::HashString("ml.r6i.12xlarge");
        static const int ml_r6i_16xlarge_HASH = HashingUtils::HashString("ml.r6i.16xlarge");
        static const int ml_r6i_24xlarge_HASH = HashingUtils::HashString("ml.r6i.24xlarge");
        static const int ml_r6i_32xlarge_HASH = HashingUtils::HashString("ml.r6i.32xlarge");
        static const int ml_i3en_large_HASH = HashingUtils::HashString("ml.i3en.large");
        static const int ml_i3en_xlarge_HASH = HashingUtils::HashString("ml.i3en.xlarge");
        static const int ml_i3en_2xlarge_HASH = HashingUtils::HashString("ml.i3en.2xlarge");
        static const int ml_i3en_3xlarge_HASH = HashingUtils::HashString("ml.i3en.3xlarge");
        static const int ml_i3en_6xlarge_HASH = HashingUtils::HashString("ml.i3en.6xlarge");
        static const int ml_i3en_12xlarge_HASH = HashingUtils::HashString("ml.i3en.12xlarge");
        static const int ml_i3en_24xlarge_HASH = HashingUtils::HashString("ml.i3en.24xlarge");
        static const int ml_m7i_large_HASH = HashingUtils::HashString("ml.m7i.large");
        static const int ml_m7i_xlarge_HASH = HashingUtils::HashString("ml.m7i.xlarge");
        static const int ml_m7i_2xlarge_HASH = HashingUtils::HashString("ml.m7i.2xlarge");
        static const int ml_m7i_4xlarge_HASH = HashingUtils::HashString("ml.m7i.4xlarge");
        static const int ml_m7i_8xlarge_HASH = HashingUtils::HashString("ml.m7i.8xlarge");
        static const int ml_m7i_12xlarge_HASH = HashingUtils::HashString("ml.m7i.12xlarge");
        static const int ml_m7i_16xlarge_HASH = HashingUtils::HashString("ml.m7i.16xlarge");
        static const int ml_m7i_24xlarge_HASH = HashingUtils::HashString("ml.m7i.24xlarge");
        static const int ml_m7i_48xlarge_HASH = HashingUtils::HashString("ml.m7i.48xlarge");
        static const int ml_r7i_large_HASH = HashingUtils::HashString("ml.r7i.large");
        static const int ml_r7i_xlarge_HASH = HashingUtils::HashString("ml.r7i.xlarge");
        static const int ml_r7i_2xlarge_HASH = HashingUtils::HashString("ml.r7i.2xlarge");
        static const int ml_r7i_4xlarge_HASH = HashingUtils::HashString("ml.r7i.4xlarge");
        static const int ml_r7i_8xlarge_HASH = HashingUtils::HashString("ml.r7i.8xlarge");
        static const int ml_r7i_12xlarge_HASH = HashingUtils::HashString("ml.r7i.12xlarge");
        static const int ml_r7i_16xlarge_HASH = HashingUtils::HashString("ml.r7i.16xlarge");
        static const int ml_r7i_24xlarge_HASH = HashingUtils::HashString("ml.r7i.24xlarge");
        static const int ml_r7i_48xlarge_HASH = HashingUtils::HashString("ml.r7i.48xlarge");


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
          else if (hashCode == ml_p6e_gb200_36xlarge_HASH)
          {
            return ClusterInstanceType::ml_p6e_gb200_36xlarge;
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
          else if (hashCode == ml_g6_xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6_xlarge;
          }
          else if (hashCode == ml_g6_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6_2xlarge;
          }
          else if (hashCode == ml_g6_4xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6_4xlarge;
          }
          else if (hashCode == ml_g6_8xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6_8xlarge;
          }
          else if (hashCode == ml_g6_16xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6_16xlarge;
          }
          else if (hashCode == ml_g6_12xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6_12xlarge;
          }
          else if (hashCode == ml_g6_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6_24xlarge;
          }
          else if (hashCode == ml_g6_48xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6_48xlarge;
          }
          else if (hashCode == ml_gr6_4xlarge_HASH)
          {
            return ClusterInstanceType::ml_gr6_4xlarge;
          }
          else if (hashCode == ml_gr6_8xlarge_HASH)
          {
            return ClusterInstanceType::ml_gr6_8xlarge;
          }
          else if (hashCode == ml_g6e_xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6e_xlarge;
          }
          else if (hashCode == ml_g6e_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6e_2xlarge;
          }
          else if (hashCode == ml_g6e_4xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6e_4xlarge;
          }
          else if (hashCode == ml_g6e_8xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6e_8xlarge;
          }
          else if (hashCode == ml_g6e_16xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6e_16xlarge;
          }
          else if (hashCode == ml_g6e_12xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6e_12xlarge;
          }
          else if (hashCode == ml_g6e_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6e_24xlarge;
          }
          else if (hashCode == ml_g6e_48xlarge_HASH)
          {
            return ClusterInstanceType::ml_g6e_48xlarge;
          }
          else if (hashCode == ml_p5e_48xlarge_HASH)
          {
            return ClusterInstanceType::ml_p5e_48xlarge;
          }
          else if (hashCode == ml_p5en_48xlarge_HASH)
          {
            return ClusterInstanceType::ml_p5en_48xlarge;
          }
          else if (hashCode == ml_p6_b200_48xlarge_HASH)
          {
            return ClusterInstanceType::ml_p6_b200_48xlarge;
          }
          else if (hashCode == ml_trn2_48xlarge_HASH)
          {
            return ClusterInstanceType::ml_trn2_48xlarge;
          }
          else if (hashCode == ml_c6i_large_HASH)
          {
            return ClusterInstanceType::ml_c6i_large;
          }
          else if (hashCode == ml_c6i_xlarge_HASH)
          {
            return ClusterInstanceType::ml_c6i_xlarge;
          }
          else if (hashCode == ml_c6i_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_c6i_2xlarge;
          }
          else if (hashCode == ml_c6i_4xlarge_HASH)
          {
            return ClusterInstanceType::ml_c6i_4xlarge;
          }
          else if (hashCode == ml_c6i_8xlarge_HASH)
          {
            return ClusterInstanceType::ml_c6i_8xlarge;
          }
          else if (hashCode == ml_c6i_12xlarge_HASH)
          {
            return ClusterInstanceType::ml_c6i_12xlarge;
          }
          else if (hashCode == ml_c6i_16xlarge_HASH)
          {
            return ClusterInstanceType::ml_c6i_16xlarge;
          }
          else if (hashCode == ml_c6i_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_c6i_24xlarge;
          }
          else if (hashCode == ml_c6i_32xlarge_HASH)
          {
            return ClusterInstanceType::ml_c6i_32xlarge;
          }
          else if (hashCode == ml_m6i_large_HASH)
          {
            return ClusterInstanceType::ml_m6i_large;
          }
          else if (hashCode == ml_m6i_xlarge_HASH)
          {
            return ClusterInstanceType::ml_m6i_xlarge;
          }
          else if (hashCode == ml_m6i_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_m6i_2xlarge;
          }
          else if (hashCode == ml_m6i_4xlarge_HASH)
          {
            return ClusterInstanceType::ml_m6i_4xlarge;
          }
          else if (hashCode == ml_m6i_8xlarge_HASH)
          {
            return ClusterInstanceType::ml_m6i_8xlarge;
          }
          else if (hashCode == ml_m6i_12xlarge_HASH)
          {
            return ClusterInstanceType::ml_m6i_12xlarge;
          }
          else if (hashCode == ml_m6i_16xlarge_HASH)
          {
            return ClusterInstanceType::ml_m6i_16xlarge;
          }
          else if (hashCode == ml_m6i_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_m6i_24xlarge;
          }
          else if (hashCode == ml_m6i_32xlarge_HASH)
          {
            return ClusterInstanceType::ml_m6i_32xlarge;
          }
          else if (hashCode == ml_r6i_large_HASH)
          {
            return ClusterInstanceType::ml_r6i_large;
          }
          else if (hashCode == ml_r6i_xlarge_HASH)
          {
            return ClusterInstanceType::ml_r6i_xlarge;
          }
          else if (hashCode == ml_r6i_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_r6i_2xlarge;
          }
          else if (hashCode == ml_r6i_4xlarge_HASH)
          {
            return ClusterInstanceType::ml_r6i_4xlarge;
          }
          else if (hashCode == ml_r6i_8xlarge_HASH)
          {
            return ClusterInstanceType::ml_r6i_8xlarge;
          }
          else if (hashCode == ml_r6i_12xlarge_HASH)
          {
            return ClusterInstanceType::ml_r6i_12xlarge;
          }
          else if (hashCode == ml_r6i_16xlarge_HASH)
          {
            return ClusterInstanceType::ml_r6i_16xlarge;
          }
          else if (hashCode == ml_r6i_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_r6i_24xlarge;
          }
          else if (hashCode == ml_r6i_32xlarge_HASH)
          {
            return ClusterInstanceType::ml_r6i_32xlarge;
          }
          else if (hashCode == ml_i3en_large_HASH)
          {
            return ClusterInstanceType::ml_i3en_large;
          }
          else if (hashCode == ml_i3en_xlarge_HASH)
          {
            return ClusterInstanceType::ml_i3en_xlarge;
          }
          else if (hashCode == ml_i3en_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_i3en_2xlarge;
          }
          else if (hashCode == ml_i3en_3xlarge_HASH)
          {
            return ClusterInstanceType::ml_i3en_3xlarge;
          }
          else if (hashCode == ml_i3en_6xlarge_HASH)
          {
            return ClusterInstanceType::ml_i3en_6xlarge;
          }
          else if (hashCode == ml_i3en_12xlarge_HASH)
          {
            return ClusterInstanceType::ml_i3en_12xlarge;
          }
          else if (hashCode == ml_i3en_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_i3en_24xlarge;
          }
          else if (hashCode == ml_m7i_large_HASH)
          {
            return ClusterInstanceType::ml_m7i_large;
          }
          else if (hashCode == ml_m7i_xlarge_HASH)
          {
            return ClusterInstanceType::ml_m7i_xlarge;
          }
          else if (hashCode == ml_m7i_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_m7i_2xlarge;
          }
          else if (hashCode == ml_m7i_4xlarge_HASH)
          {
            return ClusterInstanceType::ml_m7i_4xlarge;
          }
          else if (hashCode == ml_m7i_8xlarge_HASH)
          {
            return ClusterInstanceType::ml_m7i_8xlarge;
          }
          else if (hashCode == ml_m7i_12xlarge_HASH)
          {
            return ClusterInstanceType::ml_m7i_12xlarge;
          }
          else if (hashCode == ml_m7i_16xlarge_HASH)
          {
            return ClusterInstanceType::ml_m7i_16xlarge;
          }
          else if (hashCode == ml_m7i_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_m7i_24xlarge;
          }
          else if (hashCode == ml_m7i_48xlarge_HASH)
          {
            return ClusterInstanceType::ml_m7i_48xlarge;
          }
          else if (hashCode == ml_r7i_large_HASH)
          {
            return ClusterInstanceType::ml_r7i_large;
          }
          else if (hashCode == ml_r7i_xlarge_HASH)
          {
            return ClusterInstanceType::ml_r7i_xlarge;
          }
          else if (hashCode == ml_r7i_2xlarge_HASH)
          {
            return ClusterInstanceType::ml_r7i_2xlarge;
          }
          else if (hashCode == ml_r7i_4xlarge_HASH)
          {
            return ClusterInstanceType::ml_r7i_4xlarge;
          }
          else if (hashCode == ml_r7i_8xlarge_HASH)
          {
            return ClusterInstanceType::ml_r7i_8xlarge;
          }
          else if (hashCode == ml_r7i_12xlarge_HASH)
          {
            return ClusterInstanceType::ml_r7i_12xlarge;
          }
          else if (hashCode == ml_r7i_16xlarge_HASH)
          {
            return ClusterInstanceType::ml_r7i_16xlarge;
          }
          else if (hashCode == ml_r7i_24xlarge_HASH)
          {
            return ClusterInstanceType::ml_r7i_24xlarge;
          }
          else if (hashCode == ml_r7i_48xlarge_HASH)
          {
            return ClusterInstanceType::ml_r7i_48xlarge;
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
          case ClusterInstanceType::ml_p6e_gb200_36xlarge:
            return "ml.p6e-gb200.36xlarge";
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
          case ClusterInstanceType::ml_g6_xlarge:
            return "ml.g6.xlarge";
          case ClusterInstanceType::ml_g6_2xlarge:
            return "ml.g6.2xlarge";
          case ClusterInstanceType::ml_g6_4xlarge:
            return "ml.g6.4xlarge";
          case ClusterInstanceType::ml_g6_8xlarge:
            return "ml.g6.8xlarge";
          case ClusterInstanceType::ml_g6_16xlarge:
            return "ml.g6.16xlarge";
          case ClusterInstanceType::ml_g6_12xlarge:
            return "ml.g6.12xlarge";
          case ClusterInstanceType::ml_g6_24xlarge:
            return "ml.g6.24xlarge";
          case ClusterInstanceType::ml_g6_48xlarge:
            return "ml.g6.48xlarge";
          case ClusterInstanceType::ml_gr6_4xlarge:
            return "ml.gr6.4xlarge";
          case ClusterInstanceType::ml_gr6_8xlarge:
            return "ml.gr6.8xlarge";
          case ClusterInstanceType::ml_g6e_xlarge:
            return "ml.g6e.xlarge";
          case ClusterInstanceType::ml_g6e_2xlarge:
            return "ml.g6e.2xlarge";
          case ClusterInstanceType::ml_g6e_4xlarge:
            return "ml.g6e.4xlarge";
          case ClusterInstanceType::ml_g6e_8xlarge:
            return "ml.g6e.8xlarge";
          case ClusterInstanceType::ml_g6e_16xlarge:
            return "ml.g6e.16xlarge";
          case ClusterInstanceType::ml_g6e_12xlarge:
            return "ml.g6e.12xlarge";
          case ClusterInstanceType::ml_g6e_24xlarge:
            return "ml.g6e.24xlarge";
          case ClusterInstanceType::ml_g6e_48xlarge:
            return "ml.g6e.48xlarge";
          case ClusterInstanceType::ml_p5e_48xlarge:
            return "ml.p5e.48xlarge";
          case ClusterInstanceType::ml_p5en_48xlarge:
            return "ml.p5en.48xlarge";
          case ClusterInstanceType::ml_p6_b200_48xlarge:
            return "ml.p6-b200.48xlarge";
          case ClusterInstanceType::ml_trn2_48xlarge:
            return "ml.trn2.48xlarge";
          case ClusterInstanceType::ml_c6i_large:
            return "ml.c6i.large";
          case ClusterInstanceType::ml_c6i_xlarge:
            return "ml.c6i.xlarge";
          case ClusterInstanceType::ml_c6i_2xlarge:
            return "ml.c6i.2xlarge";
          case ClusterInstanceType::ml_c6i_4xlarge:
            return "ml.c6i.4xlarge";
          case ClusterInstanceType::ml_c6i_8xlarge:
            return "ml.c6i.8xlarge";
          case ClusterInstanceType::ml_c6i_12xlarge:
            return "ml.c6i.12xlarge";
          case ClusterInstanceType::ml_c6i_16xlarge:
            return "ml.c6i.16xlarge";
          case ClusterInstanceType::ml_c6i_24xlarge:
            return "ml.c6i.24xlarge";
          case ClusterInstanceType::ml_c6i_32xlarge:
            return "ml.c6i.32xlarge";
          case ClusterInstanceType::ml_m6i_large:
            return "ml.m6i.large";
          case ClusterInstanceType::ml_m6i_xlarge:
            return "ml.m6i.xlarge";
          case ClusterInstanceType::ml_m6i_2xlarge:
            return "ml.m6i.2xlarge";
          case ClusterInstanceType::ml_m6i_4xlarge:
            return "ml.m6i.4xlarge";
          case ClusterInstanceType::ml_m6i_8xlarge:
            return "ml.m6i.8xlarge";
          case ClusterInstanceType::ml_m6i_12xlarge:
            return "ml.m6i.12xlarge";
          case ClusterInstanceType::ml_m6i_16xlarge:
            return "ml.m6i.16xlarge";
          case ClusterInstanceType::ml_m6i_24xlarge:
            return "ml.m6i.24xlarge";
          case ClusterInstanceType::ml_m6i_32xlarge:
            return "ml.m6i.32xlarge";
          case ClusterInstanceType::ml_r6i_large:
            return "ml.r6i.large";
          case ClusterInstanceType::ml_r6i_xlarge:
            return "ml.r6i.xlarge";
          case ClusterInstanceType::ml_r6i_2xlarge:
            return "ml.r6i.2xlarge";
          case ClusterInstanceType::ml_r6i_4xlarge:
            return "ml.r6i.4xlarge";
          case ClusterInstanceType::ml_r6i_8xlarge:
            return "ml.r6i.8xlarge";
          case ClusterInstanceType::ml_r6i_12xlarge:
            return "ml.r6i.12xlarge";
          case ClusterInstanceType::ml_r6i_16xlarge:
            return "ml.r6i.16xlarge";
          case ClusterInstanceType::ml_r6i_24xlarge:
            return "ml.r6i.24xlarge";
          case ClusterInstanceType::ml_r6i_32xlarge:
            return "ml.r6i.32xlarge";
          case ClusterInstanceType::ml_i3en_large:
            return "ml.i3en.large";
          case ClusterInstanceType::ml_i3en_xlarge:
            return "ml.i3en.xlarge";
          case ClusterInstanceType::ml_i3en_2xlarge:
            return "ml.i3en.2xlarge";
          case ClusterInstanceType::ml_i3en_3xlarge:
            return "ml.i3en.3xlarge";
          case ClusterInstanceType::ml_i3en_6xlarge:
            return "ml.i3en.6xlarge";
          case ClusterInstanceType::ml_i3en_12xlarge:
            return "ml.i3en.12xlarge";
          case ClusterInstanceType::ml_i3en_24xlarge:
            return "ml.i3en.24xlarge";
          case ClusterInstanceType::ml_m7i_large:
            return "ml.m7i.large";
          case ClusterInstanceType::ml_m7i_xlarge:
            return "ml.m7i.xlarge";
          case ClusterInstanceType::ml_m7i_2xlarge:
            return "ml.m7i.2xlarge";
          case ClusterInstanceType::ml_m7i_4xlarge:
            return "ml.m7i.4xlarge";
          case ClusterInstanceType::ml_m7i_8xlarge:
            return "ml.m7i.8xlarge";
          case ClusterInstanceType::ml_m7i_12xlarge:
            return "ml.m7i.12xlarge";
          case ClusterInstanceType::ml_m7i_16xlarge:
            return "ml.m7i.16xlarge";
          case ClusterInstanceType::ml_m7i_24xlarge:
            return "ml.m7i.24xlarge";
          case ClusterInstanceType::ml_m7i_48xlarge:
            return "ml.m7i.48xlarge";
          case ClusterInstanceType::ml_r7i_large:
            return "ml.r7i.large";
          case ClusterInstanceType::ml_r7i_xlarge:
            return "ml.r7i.xlarge";
          case ClusterInstanceType::ml_r7i_2xlarge:
            return "ml.r7i.2xlarge";
          case ClusterInstanceType::ml_r7i_4xlarge:
            return "ml.r7i.4xlarge";
          case ClusterInstanceType::ml_r7i_8xlarge:
            return "ml.r7i.8xlarge";
          case ClusterInstanceType::ml_r7i_12xlarge:
            return "ml.r7i.12xlarge";
          case ClusterInstanceType::ml_r7i_16xlarge:
            return "ml.r7i.16xlarge";
          case ClusterInstanceType::ml_r7i_24xlarge:
            return "ml.r7i.24xlarge";
          case ClusterInstanceType::ml_r7i_48xlarge:
            return "ml.r7i.48xlarge";
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
