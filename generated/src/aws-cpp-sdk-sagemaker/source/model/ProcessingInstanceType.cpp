/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingInstanceType.h>
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
      namespace ProcessingInstanceTypeMapper
      {

        static const int ml_t3_medium_HASH = HashingUtils::HashString("ml.t3.medium");
        static const int ml_t3_large_HASH = HashingUtils::HashString("ml.t3.large");
        static const int ml_t3_xlarge_HASH = HashingUtils::HashString("ml.t3.xlarge");
        static const int ml_t3_2xlarge_HASH = HashingUtils::HashString("ml.t3.2xlarge");
        static const int ml_m4_xlarge_HASH = HashingUtils::HashString("ml.m4.xlarge");
        static const int ml_m4_2xlarge_HASH = HashingUtils::HashString("ml.m4.2xlarge");
        static const int ml_m4_4xlarge_HASH = HashingUtils::HashString("ml.m4.4xlarge");
        static const int ml_m4_10xlarge_HASH = HashingUtils::HashString("ml.m4.10xlarge");
        static const int ml_m4_16xlarge_HASH = HashingUtils::HashString("ml.m4.16xlarge");
        static const int ml_c4_xlarge_HASH = HashingUtils::HashString("ml.c4.xlarge");
        static const int ml_c4_2xlarge_HASH = HashingUtils::HashString("ml.c4.2xlarge");
        static const int ml_c4_4xlarge_HASH = HashingUtils::HashString("ml.c4.4xlarge");
        static const int ml_c4_8xlarge_HASH = HashingUtils::HashString("ml.c4.8xlarge");
        static const int ml_p2_xlarge_HASH = HashingUtils::HashString("ml.p2.xlarge");
        static const int ml_p2_8xlarge_HASH = HashingUtils::HashString("ml.p2.8xlarge");
        static const int ml_p2_16xlarge_HASH = HashingUtils::HashString("ml.p2.16xlarge");
        static const int ml_p3_2xlarge_HASH = HashingUtils::HashString("ml.p3.2xlarge");
        static const int ml_p3_8xlarge_HASH = HashingUtils::HashString("ml.p3.8xlarge");
        static const int ml_p3_16xlarge_HASH = HashingUtils::HashString("ml.p3.16xlarge");
        static const int ml_c5_xlarge_HASH = HashingUtils::HashString("ml.c5.xlarge");
        static const int ml_c5_2xlarge_HASH = HashingUtils::HashString("ml.c5.2xlarge");
        static const int ml_c5_4xlarge_HASH = HashingUtils::HashString("ml.c5.4xlarge");
        static const int ml_c5_9xlarge_HASH = HashingUtils::HashString("ml.c5.9xlarge");
        static const int ml_c5_18xlarge_HASH = HashingUtils::HashString("ml.c5.18xlarge");
        static const int ml_m5_large_HASH = HashingUtils::HashString("ml.m5.large");
        static const int ml_m5_xlarge_HASH = HashingUtils::HashString("ml.m5.xlarge");
        static const int ml_m5_2xlarge_HASH = HashingUtils::HashString("ml.m5.2xlarge");
        static const int ml_m5_4xlarge_HASH = HashingUtils::HashString("ml.m5.4xlarge");
        static const int ml_m5_12xlarge_HASH = HashingUtils::HashString("ml.m5.12xlarge");
        static const int ml_m5_24xlarge_HASH = HashingUtils::HashString("ml.m5.24xlarge");
        static const int ml_r5_large_HASH = HashingUtils::HashString("ml.r5.large");
        static const int ml_r5_xlarge_HASH = HashingUtils::HashString("ml.r5.xlarge");
        static const int ml_r5_2xlarge_HASH = HashingUtils::HashString("ml.r5.2xlarge");
        static const int ml_r5_4xlarge_HASH = HashingUtils::HashString("ml.r5.4xlarge");
        static const int ml_r5_8xlarge_HASH = HashingUtils::HashString("ml.r5.8xlarge");
        static const int ml_r5_12xlarge_HASH = HashingUtils::HashString("ml.r5.12xlarge");
        static const int ml_r5_16xlarge_HASH = HashingUtils::HashString("ml.r5.16xlarge");
        static const int ml_r5_24xlarge_HASH = HashingUtils::HashString("ml.r5.24xlarge");
        static const int ml_g4dn_xlarge_HASH = HashingUtils::HashString("ml.g4dn.xlarge");
        static const int ml_g4dn_2xlarge_HASH = HashingUtils::HashString("ml.g4dn.2xlarge");
        static const int ml_g4dn_4xlarge_HASH = HashingUtils::HashString("ml.g4dn.4xlarge");
        static const int ml_g4dn_8xlarge_HASH = HashingUtils::HashString("ml.g4dn.8xlarge");
        static const int ml_g4dn_12xlarge_HASH = HashingUtils::HashString("ml.g4dn.12xlarge");
        static const int ml_g4dn_16xlarge_HASH = HashingUtils::HashString("ml.g4dn.16xlarge");
        static const int ml_g5_xlarge_HASH = HashingUtils::HashString("ml.g5.xlarge");
        static const int ml_g5_2xlarge_HASH = HashingUtils::HashString("ml.g5.2xlarge");
        static const int ml_g5_4xlarge_HASH = HashingUtils::HashString("ml.g5.4xlarge");
        static const int ml_g5_8xlarge_HASH = HashingUtils::HashString("ml.g5.8xlarge");
        static const int ml_g5_16xlarge_HASH = HashingUtils::HashString("ml.g5.16xlarge");
        static const int ml_g5_12xlarge_HASH = HashingUtils::HashString("ml.g5.12xlarge");
        static const int ml_g5_24xlarge_HASH = HashingUtils::HashString("ml.g5.24xlarge");
        static const int ml_g5_48xlarge_HASH = HashingUtils::HashString("ml.g5.48xlarge");
        static const int ml_r5d_large_HASH = HashingUtils::HashString("ml.r5d.large");
        static const int ml_r5d_xlarge_HASH = HashingUtils::HashString("ml.r5d.xlarge");
        static const int ml_r5d_2xlarge_HASH = HashingUtils::HashString("ml.r5d.2xlarge");
        static const int ml_r5d_4xlarge_HASH = HashingUtils::HashString("ml.r5d.4xlarge");
        static const int ml_r5d_8xlarge_HASH = HashingUtils::HashString("ml.r5d.8xlarge");
        static const int ml_r5d_12xlarge_HASH = HashingUtils::HashString("ml.r5d.12xlarge");
        static const int ml_r5d_16xlarge_HASH = HashingUtils::HashString("ml.r5d.16xlarge");
        static const int ml_r5d_24xlarge_HASH = HashingUtils::HashString("ml.r5d.24xlarge");
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
        static const int ml_m6i_large_HASH = HashingUtils::HashString("ml.m6i.large");
        static const int ml_m6i_xlarge_HASH = HashingUtils::HashString("ml.m6i.xlarge");
        static const int ml_m6i_2xlarge_HASH = HashingUtils::HashString("ml.m6i.2xlarge");
        static const int ml_m6i_4xlarge_HASH = HashingUtils::HashString("ml.m6i.4xlarge");
        static const int ml_m6i_8xlarge_HASH = HashingUtils::HashString("ml.m6i.8xlarge");
        static const int ml_m6i_12xlarge_HASH = HashingUtils::HashString("ml.m6i.12xlarge");
        static const int ml_m6i_16xlarge_HASH = HashingUtils::HashString("ml.m6i.16xlarge");
        static const int ml_m6i_24xlarge_HASH = HashingUtils::HashString("ml.m6i.24xlarge");
        static const int ml_m6i_32xlarge_HASH = HashingUtils::HashString("ml.m6i.32xlarge");
        static const int ml_c6i_xlarge_HASH = HashingUtils::HashString("ml.c6i.xlarge");
        static const int ml_c6i_2xlarge_HASH = HashingUtils::HashString("ml.c6i.2xlarge");
        static const int ml_c6i_4xlarge_HASH = HashingUtils::HashString("ml.c6i.4xlarge");
        static const int ml_c6i_8xlarge_HASH = HashingUtils::HashString("ml.c6i.8xlarge");
        static const int ml_c6i_12xlarge_HASH = HashingUtils::HashString("ml.c6i.12xlarge");
        static const int ml_c6i_16xlarge_HASH = HashingUtils::HashString("ml.c6i.16xlarge");
        static const int ml_c6i_24xlarge_HASH = HashingUtils::HashString("ml.c6i.24xlarge");
        static const int ml_c6i_32xlarge_HASH = HashingUtils::HashString("ml.c6i.32xlarge");
        static const int ml_m7i_large_HASH = HashingUtils::HashString("ml.m7i.large");
        static const int ml_m7i_xlarge_HASH = HashingUtils::HashString("ml.m7i.xlarge");
        static const int ml_m7i_2xlarge_HASH = HashingUtils::HashString("ml.m7i.2xlarge");
        static const int ml_m7i_4xlarge_HASH = HashingUtils::HashString("ml.m7i.4xlarge");
        static const int ml_m7i_8xlarge_HASH = HashingUtils::HashString("ml.m7i.8xlarge");
        static const int ml_m7i_12xlarge_HASH = HashingUtils::HashString("ml.m7i.12xlarge");
        static const int ml_m7i_16xlarge_HASH = HashingUtils::HashString("ml.m7i.16xlarge");
        static const int ml_m7i_24xlarge_HASH = HashingUtils::HashString("ml.m7i.24xlarge");
        static const int ml_m7i_48xlarge_HASH = HashingUtils::HashString("ml.m7i.48xlarge");
        static const int ml_c7i_large_HASH = HashingUtils::HashString("ml.c7i.large");
        static const int ml_c7i_xlarge_HASH = HashingUtils::HashString("ml.c7i.xlarge");
        static const int ml_c7i_2xlarge_HASH = HashingUtils::HashString("ml.c7i.2xlarge");
        static const int ml_c7i_4xlarge_HASH = HashingUtils::HashString("ml.c7i.4xlarge");
        static const int ml_c7i_8xlarge_HASH = HashingUtils::HashString("ml.c7i.8xlarge");
        static const int ml_c7i_12xlarge_HASH = HashingUtils::HashString("ml.c7i.12xlarge");
        static const int ml_c7i_16xlarge_HASH = HashingUtils::HashString("ml.c7i.16xlarge");
        static const int ml_c7i_24xlarge_HASH = HashingUtils::HashString("ml.c7i.24xlarge");
        static const int ml_c7i_48xlarge_HASH = HashingUtils::HashString("ml.c7i.48xlarge");
        static const int ml_r7i_large_HASH = HashingUtils::HashString("ml.r7i.large");
        static const int ml_r7i_xlarge_HASH = HashingUtils::HashString("ml.r7i.xlarge");
        static const int ml_r7i_2xlarge_HASH = HashingUtils::HashString("ml.r7i.2xlarge");
        static const int ml_r7i_4xlarge_HASH = HashingUtils::HashString("ml.r7i.4xlarge");
        static const int ml_r7i_8xlarge_HASH = HashingUtils::HashString("ml.r7i.8xlarge");
        static const int ml_r7i_12xlarge_HASH = HashingUtils::HashString("ml.r7i.12xlarge");
        static const int ml_r7i_16xlarge_HASH = HashingUtils::HashString("ml.r7i.16xlarge");
        static const int ml_r7i_24xlarge_HASH = HashingUtils::HashString("ml.r7i.24xlarge");
        static const int ml_r7i_48xlarge_HASH = HashingUtils::HashString("ml.r7i.48xlarge");
        static const int ml_p5_4xlarge_HASH = HashingUtils::HashString("ml.p5.4xlarge");


        ProcessingInstanceType GetProcessingInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ml_t3_medium_HASH)
          {
            return ProcessingInstanceType::ml_t3_medium;
          }
          else if (hashCode == ml_t3_large_HASH)
          {
            return ProcessingInstanceType::ml_t3_large;
          }
          else if (hashCode == ml_t3_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_t3_xlarge;
          }
          else if (hashCode == ml_t3_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_t3_2xlarge;
          }
          else if (hashCode == ml_m4_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m4_xlarge;
          }
          else if (hashCode == ml_m4_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m4_2xlarge;
          }
          else if (hashCode == ml_m4_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m4_4xlarge;
          }
          else if (hashCode == ml_m4_10xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m4_10xlarge;
          }
          else if (hashCode == ml_m4_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m4_16xlarge;
          }
          else if (hashCode == ml_c4_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c4_xlarge;
          }
          else if (hashCode == ml_c4_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c4_2xlarge;
          }
          else if (hashCode == ml_c4_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c4_4xlarge;
          }
          else if (hashCode == ml_c4_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c4_8xlarge;
          }
          else if (hashCode == ml_p2_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_p2_xlarge;
          }
          else if (hashCode == ml_p2_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_p2_8xlarge;
          }
          else if (hashCode == ml_p2_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_p2_16xlarge;
          }
          else if (hashCode == ml_p3_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_p3_2xlarge;
          }
          else if (hashCode == ml_p3_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_p3_8xlarge;
          }
          else if (hashCode == ml_p3_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_p3_16xlarge;
          }
          else if (hashCode == ml_c5_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c5_xlarge;
          }
          else if (hashCode == ml_c5_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c5_2xlarge;
          }
          else if (hashCode == ml_c5_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c5_4xlarge;
          }
          else if (hashCode == ml_c5_9xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c5_9xlarge;
          }
          else if (hashCode == ml_c5_18xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c5_18xlarge;
          }
          else if (hashCode == ml_m5_large_HASH)
          {
            return ProcessingInstanceType::ml_m5_large;
          }
          else if (hashCode == ml_m5_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m5_xlarge;
          }
          else if (hashCode == ml_m5_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m5_2xlarge;
          }
          else if (hashCode == ml_m5_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m5_4xlarge;
          }
          else if (hashCode == ml_m5_12xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m5_12xlarge;
          }
          else if (hashCode == ml_m5_24xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m5_24xlarge;
          }
          else if (hashCode == ml_r5_large_HASH)
          {
            return ProcessingInstanceType::ml_r5_large;
          }
          else if (hashCode == ml_r5_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5_xlarge;
          }
          else if (hashCode == ml_r5_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5_2xlarge;
          }
          else if (hashCode == ml_r5_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5_4xlarge;
          }
          else if (hashCode == ml_r5_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5_8xlarge;
          }
          else if (hashCode == ml_r5_12xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5_12xlarge;
          }
          else if (hashCode == ml_r5_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5_16xlarge;
          }
          else if (hashCode == ml_r5_24xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5_24xlarge;
          }
          else if (hashCode == ml_g4dn_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g4dn_xlarge;
          }
          else if (hashCode == ml_g4dn_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g4dn_2xlarge;
          }
          else if (hashCode == ml_g4dn_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g4dn_4xlarge;
          }
          else if (hashCode == ml_g4dn_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g4dn_8xlarge;
          }
          else if (hashCode == ml_g4dn_12xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g4dn_12xlarge;
          }
          else if (hashCode == ml_g4dn_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g4dn_16xlarge;
          }
          else if (hashCode == ml_g5_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g5_xlarge;
          }
          else if (hashCode == ml_g5_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g5_2xlarge;
          }
          else if (hashCode == ml_g5_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g5_4xlarge;
          }
          else if (hashCode == ml_g5_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g5_8xlarge;
          }
          else if (hashCode == ml_g5_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g5_16xlarge;
          }
          else if (hashCode == ml_g5_12xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g5_12xlarge;
          }
          else if (hashCode == ml_g5_24xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g5_24xlarge;
          }
          else if (hashCode == ml_g5_48xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g5_48xlarge;
          }
          else if (hashCode == ml_r5d_large_HASH)
          {
            return ProcessingInstanceType::ml_r5d_large;
          }
          else if (hashCode == ml_r5d_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5d_xlarge;
          }
          else if (hashCode == ml_r5d_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5d_2xlarge;
          }
          else if (hashCode == ml_r5d_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5d_4xlarge;
          }
          else if (hashCode == ml_r5d_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5d_8xlarge;
          }
          else if (hashCode == ml_r5d_12xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5d_12xlarge;
          }
          else if (hashCode == ml_r5d_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5d_16xlarge;
          }
          else if (hashCode == ml_r5d_24xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r5d_24xlarge;
          }
          else if (hashCode == ml_g6_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6_xlarge;
          }
          else if (hashCode == ml_g6_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6_2xlarge;
          }
          else if (hashCode == ml_g6_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6_4xlarge;
          }
          else if (hashCode == ml_g6_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6_8xlarge;
          }
          else if (hashCode == ml_g6_12xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6_12xlarge;
          }
          else if (hashCode == ml_g6_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6_16xlarge;
          }
          else if (hashCode == ml_g6_24xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6_24xlarge;
          }
          else if (hashCode == ml_g6_48xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6_48xlarge;
          }
          else if (hashCode == ml_g6e_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6e_xlarge;
          }
          else if (hashCode == ml_g6e_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6e_2xlarge;
          }
          else if (hashCode == ml_g6e_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6e_4xlarge;
          }
          else if (hashCode == ml_g6e_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6e_8xlarge;
          }
          else if (hashCode == ml_g6e_12xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6e_12xlarge;
          }
          else if (hashCode == ml_g6e_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6e_16xlarge;
          }
          else if (hashCode == ml_g6e_24xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6e_24xlarge;
          }
          else if (hashCode == ml_g6e_48xlarge_HASH)
          {
            return ProcessingInstanceType::ml_g6e_48xlarge;
          }
          else if (hashCode == ml_m6i_large_HASH)
          {
            return ProcessingInstanceType::ml_m6i_large;
          }
          else if (hashCode == ml_m6i_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m6i_xlarge;
          }
          else if (hashCode == ml_m6i_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m6i_2xlarge;
          }
          else if (hashCode == ml_m6i_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m6i_4xlarge;
          }
          else if (hashCode == ml_m6i_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m6i_8xlarge;
          }
          else if (hashCode == ml_m6i_12xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m6i_12xlarge;
          }
          else if (hashCode == ml_m6i_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m6i_16xlarge;
          }
          else if (hashCode == ml_m6i_24xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m6i_24xlarge;
          }
          else if (hashCode == ml_m6i_32xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m6i_32xlarge;
          }
          else if (hashCode == ml_c6i_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c6i_xlarge;
          }
          else if (hashCode == ml_c6i_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c6i_2xlarge;
          }
          else if (hashCode == ml_c6i_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c6i_4xlarge;
          }
          else if (hashCode == ml_c6i_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c6i_8xlarge;
          }
          else if (hashCode == ml_c6i_12xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c6i_12xlarge;
          }
          else if (hashCode == ml_c6i_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c6i_16xlarge;
          }
          else if (hashCode == ml_c6i_24xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c6i_24xlarge;
          }
          else if (hashCode == ml_c6i_32xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c6i_32xlarge;
          }
          else if (hashCode == ml_m7i_large_HASH)
          {
            return ProcessingInstanceType::ml_m7i_large;
          }
          else if (hashCode == ml_m7i_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m7i_xlarge;
          }
          else if (hashCode == ml_m7i_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m7i_2xlarge;
          }
          else if (hashCode == ml_m7i_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m7i_4xlarge;
          }
          else if (hashCode == ml_m7i_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m7i_8xlarge;
          }
          else if (hashCode == ml_m7i_12xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m7i_12xlarge;
          }
          else if (hashCode == ml_m7i_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m7i_16xlarge;
          }
          else if (hashCode == ml_m7i_24xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m7i_24xlarge;
          }
          else if (hashCode == ml_m7i_48xlarge_HASH)
          {
            return ProcessingInstanceType::ml_m7i_48xlarge;
          }
          else if (hashCode == ml_c7i_large_HASH)
          {
            return ProcessingInstanceType::ml_c7i_large;
          }
          else if (hashCode == ml_c7i_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c7i_xlarge;
          }
          else if (hashCode == ml_c7i_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c7i_2xlarge;
          }
          else if (hashCode == ml_c7i_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c7i_4xlarge;
          }
          else if (hashCode == ml_c7i_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c7i_8xlarge;
          }
          else if (hashCode == ml_c7i_12xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c7i_12xlarge;
          }
          else if (hashCode == ml_c7i_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c7i_16xlarge;
          }
          else if (hashCode == ml_c7i_24xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c7i_24xlarge;
          }
          else if (hashCode == ml_c7i_48xlarge_HASH)
          {
            return ProcessingInstanceType::ml_c7i_48xlarge;
          }
          else if (hashCode == ml_r7i_large_HASH)
          {
            return ProcessingInstanceType::ml_r7i_large;
          }
          else if (hashCode == ml_r7i_xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r7i_xlarge;
          }
          else if (hashCode == ml_r7i_2xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r7i_2xlarge;
          }
          else if (hashCode == ml_r7i_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r7i_4xlarge;
          }
          else if (hashCode == ml_r7i_8xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r7i_8xlarge;
          }
          else if (hashCode == ml_r7i_12xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r7i_12xlarge;
          }
          else if (hashCode == ml_r7i_16xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r7i_16xlarge;
          }
          else if (hashCode == ml_r7i_24xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r7i_24xlarge;
          }
          else if (hashCode == ml_r7i_48xlarge_HASH)
          {
            return ProcessingInstanceType::ml_r7i_48xlarge;
          }
          else if (hashCode == ml_p5_4xlarge_HASH)
          {
            return ProcessingInstanceType::ml_p5_4xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessingInstanceType>(hashCode);
          }

          return ProcessingInstanceType::NOT_SET;
        }

        Aws::String GetNameForProcessingInstanceType(ProcessingInstanceType enumValue)
        {
          switch(enumValue)
          {
          case ProcessingInstanceType::NOT_SET:
            return {};
          case ProcessingInstanceType::ml_t3_medium:
            return "ml.t3.medium";
          case ProcessingInstanceType::ml_t3_large:
            return "ml.t3.large";
          case ProcessingInstanceType::ml_t3_xlarge:
            return "ml.t3.xlarge";
          case ProcessingInstanceType::ml_t3_2xlarge:
            return "ml.t3.2xlarge";
          case ProcessingInstanceType::ml_m4_xlarge:
            return "ml.m4.xlarge";
          case ProcessingInstanceType::ml_m4_2xlarge:
            return "ml.m4.2xlarge";
          case ProcessingInstanceType::ml_m4_4xlarge:
            return "ml.m4.4xlarge";
          case ProcessingInstanceType::ml_m4_10xlarge:
            return "ml.m4.10xlarge";
          case ProcessingInstanceType::ml_m4_16xlarge:
            return "ml.m4.16xlarge";
          case ProcessingInstanceType::ml_c4_xlarge:
            return "ml.c4.xlarge";
          case ProcessingInstanceType::ml_c4_2xlarge:
            return "ml.c4.2xlarge";
          case ProcessingInstanceType::ml_c4_4xlarge:
            return "ml.c4.4xlarge";
          case ProcessingInstanceType::ml_c4_8xlarge:
            return "ml.c4.8xlarge";
          case ProcessingInstanceType::ml_p2_xlarge:
            return "ml.p2.xlarge";
          case ProcessingInstanceType::ml_p2_8xlarge:
            return "ml.p2.8xlarge";
          case ProcessingInstanceType::ml_p2_16xlarge:
            return "ml.p2.16xlarge";
          case ProcessingInstanceType::ml_p3_2xlarge:
            return "ml.p3.2xlarge";
          case ProcessingInstanceType::ml_p3_8xlarge:
            return "ml.p3.8xlarge";
          case ProcessingInstanceType::ml_p3_16xlarge:
            return "ml.p3.16xlarge";
          case ProcessingInstanceType::ml_c5_xlarge:
            return "ml.c5.xlarge";
          case ProcessingInstanceType::ml_c5_2xlarge:
            return "ml.c5.2xlarge";
          case ProcessingInstanceType::ml_c5_4xlarge:
            return "ml.c5.4xlarge";
          case ProcessingInstanceType::ml_c5_9xlarge:
            return "ml.c5.9xlarge";
          case ProcessingInstanceType::ml_c5_18xlarge:
            return "ml.c5.18xlarge";
          case ProcessingInstanceType::ml_m5_large:
            return "ml.m5.large";
          case ProcessingInstanceType::ml_m5_xlarge:
            return "ml.m5.xlarge";
          case ProcessingInstanceType::ml_m5_2xlarge:
            return "ml.m5.2xlarge";
          case ProcessingInstanceType::ml_m5_4xlarge:
            return "ml.m5.4xlarge";
          case ProcessingInstanceType::ml_m5_12xlarge:
            return "ml.m5.12xlarge";
          case ProcessingInstanceType::ml_m5_24xlarge:
            return "ml.m5.24xlarge";
          case ProcessingInstanceType::ml_r5_large:
            return "ml.r5.large";
          case ProcessingInstanceType::ml_r5_xlarge:
            return "ml.r5.xlarge";
          case ProcessingInstanceType::ml_r5_2xlarge:
            return "ml.r5.2xlarge";
          case ProcessingInstanceType::ml_r5_4xlarge:
            return "ml.r5.4xlarge";
          case ProcessingInstanceType::ml_r5_8xlarge:
            return "ml.r5.8xlarge";
          case ProcessingInstanceType::ml_r5_12xlarge:
            return "ml.r5.12xlarge";
          case ProcessingInstanceType::ml_r5_16xlarge:
            return "ml.r5.16xlarge";
          case ProcessingInstanceType::ml_r5_24xlarge:
            return "ml.r5.24xlarge";
          case ProcessingInstanceType::ml_g4dn_xlarge:
            return "ml.g4dn.xlarge";
          case ProcessingInstanceType::ml_g4dn_2xlarge:
            return "ml.g4dn.2xlarge";
          case ProcessingInstanceType::ml_g4dn_4xlarge:
            return "ml.g4dn.4xlarge";
          case ProcessingInstanceType::ml_g4dn_8xlarge:
            return "ml.g4dn.8xlarge";
          case ProcessingInstanceType::ml_g4dn_12xlarge:
            return "ml.g4dn.12xlarge";
          case ProcessingInstanceType::ml_g4dn_16xlarge:
            return "ml.g4dn.16xlarge";
          case ProcessingInstanceType::ml_g5_xlarge:
            return "ml.g5.xlarge";
          case ProcessingInstanceType::ml_g5_2xlarge:
            return "ml.g5.2xlarge";
          case ProcessingInstanceType::ml_g5_4xlarge:
            return "ml.g5.4xlarge";
          case ProcessingInstanceType::ml_g5_8xlarge:
            return "ml.g5.8xlarge";
          case ProcessingInstanceType::ml_g5_16xlarge:
            return "ml.g5.16xlarge";
          case ProcessingInstanceType::ml_g5_12xlarge:
            return "ml.g5.12xlarge";
          case ProcessingInstanceType::ml_g5_24xlarge:
            return "ml.g5.24xlarge";
          case ProcessingInstanceType::ml_g5_48xlarge:
            return "ml.g5.48xlarge";
          case ProcessingInstanceType::ml_r5d_large:
            return "ml.r5d.large";
          case ProcessingInstanceType::ml_r5d_xlarge:
            return "ml.r5d.xlarge";
          case ProcessingInstanceType::ml_r5d_2xlarge:
            return "ml.r5d.2xlarge";
          case ProcessingInstanceType::ml_r5d_4xlarge:
            return "ml.r5d.4xlarge";
          case ProcessingInstanceType::ml_r5d_8xlarge:
            return "ml.r5d.8xlarge";
          case ProcessingInstanceType::ml_r5d_12xlarge:
            return "ml.r5d.12xlarge";
          case ProcessingInstanceType::ml_r5d_16xlarge:
            return "ml.r5d.16xlarge";
          case ProcessingInstanceType::ml_r5d_24xlarge:
            return "ml.r5d.24xlarge";
          case ProcessingInstanceType::ml_g6_xlarge:
            return "ml.g6.xlarge";
          case ProcessingInstanceType::ml_g6_2xlarge:
            return "ml.g6.2xlarge";
          case ProcessingInstanceType::ml_g6_4xlarge:
            return "ml.g6.4xlarge";
          case ProcessingInstanceType::ml_g6_8xlarge:
            return "ml.g6.8xlarge";
          case ProcessingInstanceType::ml_g6_12xlarge:
            return "ml.g6.12xlarge";
          case ProcessingInstanceType::ml_g6_16xlarge:
            return "ml.g6.16xlarge";
          case ProcessingInstanceType::ml_g6_24xlarge:
            return "ml.g6.24xlarge";
          case ProcessingInstanceType::ml_g6_48xlarge:
            return "ml.g6.48xlarge";
          case ProcessingInstanceType::ml_g6e_xlarge:
            return "ml.g6e.xlarge";
          case ProcessingInstanceType::ml_g6e_2xlarge:
            return "ml.g6e.2xlarge";
          case ProcessingInstanceType::ml_g6e_4xlarge:
            return "ml.g6e.4xlarge";
          case ProcessingInstanceType::ml_g6e_8xlarge:
            return "ml.g6e.8xlarge";
          case ProcessingInstanceType::ml_g6e_12xlarge:
            return "ml.g6e.12xlarge";
          case ProcessingInstanceType::ml_g6e_16xlarge:
            return "ml.g6e.16xlarge";
          case ProcessingInstanceType::ml_g6e_24xlarge:
            return "ml.g6e.24xlarge";
          case ProcessingInstanceType::ml_g6e_48xlarge:
            return "ml.g6e.48xlarge";
          case ProcessingInstanceType::ml_m6i_large:
            return "ml.m6i.large";
          case ProcessingInstanceType::ml_m6i_xlarge:
            return "ml.m6i.xlarge";
          case ProcessingInstanceType::ml_m6i_2xlarge:
            return "ml.m6i.2xlarge";
          case ProcessingInstanceType::ml_m6i_4xlarge:
            return "ml.m6i.4xlarge";
          case ProcessingInstanceType::ml_m6i_8xlarge:
            return "ml.m6i.8xlarge";
          case ProcessingInstanceType::ml_m6i_12xlarge:
            return "ml.m6i.12xlarge";
          case ProcessingInstanceType::ml_m6i_16xlarge:
            return "ml.m6i.16xlarge";
          case ProcessingInstanceType::ml_m6i_24xlarge:
            return "ml.m6i.24xlarge";
          case ProcessingInstanceType::ml_m6i_32xlarge:
            return "ml.m6i.32xlarge";
          case ProcessingInstanceType::ml_c6i_xlarge:
            return "ml.c6i.xlarge";
          case ProcessingInstanceType::ml_c6i_2xlarge:
            return "ml.c6i.2xlarge";
          case ProcessingInstanceType::ml_c6i_4xlarge:
            return "ml.c6i.4xlarge";
          case ProcessingInstanceType::ml_c6i_8xlarge:
            return "ml.c6i.8xlarge";
          case ProcessingInstanceType::ml_c6i_12xlarge:
            return "ml.c6i.12xlarge";
          case ProcessingInstanceType::ml_c6i_16xlarge:
            return "ml.c6i.16xlarge";
          case ProcessingInstanceType::ml_c6i_24xlarge:
            return "ml.c6i.24xlarge";
          case ProcessingInstanceType::ml_c6i_32xlarge:
            return "ml.c6i.32xlarge";
          case ProcessingInstanceType::ml_m7i_large:
            return "ml.m7i.large";
          case ProcessingInstanceType::ml_m7i_xlarge:
            return "ml.m7i.xlarge";
          case ProcessingInstanceType::ml_m7i_2xlarge:
            return "ml.m7i.2xlarge";
          case ProcessingInstanceType::ml_m7i_4xlarge:
            return "ml.m7i.4xlarge";
          case ProcessingInstanceType::ml_m7i_8xlarge:
            return "ml.m7i.8xlarge";
          case ProcessingInstanceType::ml_m7i_12xlarge:
            return "ml.m7i.12xlarge";
          case ProcessingInstanceType::ml_m7i_16xlarge:
            return "ml.m7i.16xlarge";
          case ProcessingInstanceType::ml_m7i_24xlarge:
            return "ml.m7i.24xlarge";
          case ProcessingInstanceType::ml_m7i_48xlarge:
            return "ml.m7i.48xlarge";
          case ProcessingInstanceType::ml_c7i_large:
            return "ml.c7i.large";
          case ProcessingInstanceType::ml_c7i_xlarge:
            return "ml.c7i.xlarge";
          case ProcessingInstanceType::ml_c7i_2xlarge:
            return "ml.c7i.2xlarge";
          case ProcessingInstanceType::ml_c7i_4xlarge:
            return "ml.c7i.4xlarge";
          case ProcessingInstanceType::ml_c7i_8xlarge:
            return "ml.c7i.8xlarge";
          case ProcessingInstanceType::ml_c7i_12xlarge:
            return "ml.c7i.12xlarge";
          case ProcessingInstanceType::ml_c7i_16xlarge:
            return "ml.c7i.16xlarge";
          case ProcessingInstanceType::ml_c7i_24xlarge:
            return "ml.c7i.24xlarge";
          case ProcessingInstanceType::ml_c7i_48xlarge:
            return "ml.c7i.48xlarge";
          case ProcessingInstanceType::ml_r7i_large:
            return "ml.r7i.large";
          case ProcessingInstanceType::ml_r7i_xlarge:
            return "ml.r7i.xlarge";
          case ProcessingInstanceType::ml_r7i_2xlarge:
            return "ml.r7i.2xlarge";
          case ProcessingInstanceType::ml_r7i_4xlarge:
            return "ml.r7i.4xlarge";
          case ProcessingInstanceType::ml_r7i_8xlarge:
            return "ml.r7i.8xlarge";
          case ProcessingInstanceType::ml_r7i_12xlarge:
            return "ml.r7i.12xlarge";
          case ProcessingInstanceType::ml_r7i_16xlarge:
            return "ml.r7i.16xlarge";
          case ProcessingInstanceType::ml_r7i_24xlarge:
            return "ml.r7i.24xlarge";
          case ProcessingInstanceType::ml_r7i_48xlarge:
            return "ml.r7i.48xlarge";
          case ProcessingInstanceType::ml_p5_4xlarge:
            return "ml.p5.4xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProcessingInstanceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
