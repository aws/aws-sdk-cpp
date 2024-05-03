/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TransformInstanceType.h>
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
      namespace TransformInstanceTypeMapper
      {

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
        static const int ml_m6i_large_HASH = HashingUtils::HashString("ml.m6i.large");
        static const int ml_m6i_xlarge_HASH = HashingUtils::HashString("ml.m6i.xlarge");
        static const int ml_m6i_2xlarge_HASH = HashingUtils::HashString("ml.m6i.2xlarge");
        static const int ml_m6i_4xlarge_HASH = HashingUtils::HashString("ml.m6i.4xlarge");
        static const int ml_m6i_8xlarge_HASH = HashingUtils::HashString("ml.m6i.8xlarge");
        static const int ml_m6i_12xlarge_HASH = HashingUtils::HashString("ml.m6i.12xlarge");
        static const int ml_m6i_16xlarge_HASH = HashingUtils::HashString("ml.m6i.16xlarge");
        static const int ml_m6i_24xlarge_HASH = HashingUtils::HashString("ml.m6i.24xlarge");
        static const int ml_m6i_32xlarge_HASH = HashingUtils::HashString("ml.m6i.32xlarge");
        static const int ml_c6i_large_HASH = HashingUtils::HashString("ml.c6i.large");
        static const int ml_c6i_xlarge_HASH = HashingUtils::HashString("ml.c6i.xlarge");
        static const int ml_c6i_2xlarge_HASH = HashingUtils::HashString("ml.c6i.2xlarge");
        static const int ml_c6i_4xlarge_HASH = HashingUtils::HashString("ml.c6i.4xlarge");
        static const int ml_c6i_8xlarge_HASH = HashingUtils::HashString("ml.c6i.8xlarge");
        static const int ml_c6i_12xlarge_HASH = HashingUtils::HashString("ml.c6i.12xlarge");
        static const int ml_c6i_16xlarge_HASH = HashingUtils::HashString("ml.c6i.16xlarge");
        static const int ml_c6i_24xlarge_HASH = HashingUtils::HashString("ml.c6i.24xlarge");
        static const int ml_c6i_32xlarge_HASH = HashingUtils::HashString("ml.c6i.32xlarge");
        static const int ml_r6i_large_HASH = HashingUtils::HashString("ml.r6i.large");
        static const int ml_r6i_xlarge_HASH = HashingUtils::HashString("ml.r6i.xlarge");
        static const int ml_r6i_2xlarge_HASH = HashingUtils::HashString("ml.r6i.2xlarge");
        static const int ml_r6i_4xlarge_HASH = HashingUtils::HashString("ml.r6i.4xlarge");
        static const int ml_r6i_8xlarge_HASH = HashingUtils::HashString("ml.r6i.8xlarge");
        static const int ml_r6i_12xlarge_HASH = HashingUtils::HashString("ml.r6i.12xlarge");
        static const int ml_r6i_16xlarge_HASH = HashingUtils::HashString("ml.r6i.16xlarge");
        static const int ml_r6i_24xlarge_HASH = HashingUtils::HashString("ml.r6i.24xlarge");
        static const int ml_r6i_32xlarge_HASH = HashingUtils::HashString("ml.r6i.32xlarge");
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
        static const int ml_g5_12xlarge_HASH = HashingUtils::HashString("ml.g5.12xlarge");
        static const int ml_g5_16xlarge_HASH = HashingUtils::HashString("ml.g5.16xlarge");
        static const int ml_g5_24xlarge_HASH = HashingUtils::HashString("ml.g5.24xlarge");
        static const int ml_g5_48xlarge_HASH = HashingUtils::HashString("ml.g5.48xlarge");


        TransformInstanceType GetTransformInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ml_m4_xlarge_HASH)
          {
            return TransformInstanceType::ml_m4_xlarge;
          }
          else if (hashCode == ml_m4_2xlarge_HASH)
          {
            return TransformInstanceType::ml_m4_2xlarge;
          }
          else if (hashCode == ml_m4_4xlarge_HASH)
          {
            return TransformInstanceType::ml_m4_4xlarge;
          }
          else if (hashCode == ml_m4_10xlarge_HASH)
          {
            return TransformInstanceType::ml_m4_10xlarge;
          }
          else if (hashCode == ml_m4_16xlarge_HASH)
          {
            return TransformInstanceType::ml_m4_16xlarge;
          }
          else if (hashCode == ml_c4_xlarge_HASH)
          {
            return TransformInstanceType::ml_c4_xlarge;
          }
          else if (hashCode == ml_c4_2xlarge_HASH)
          {
            return TransformInstanceType::ml_c4_2xlarge;
          }
          else if (hashCode == ml_c4_4xlarge_HASH)
          {
            return TransformInstanceType::ml_c4_4xlarge;
          }
          else if (hashCode == ml_c4_8xlarge_HASH)
          {
            return TransformInstanceType::ml_c4_8xlarge;
          }
          else if (hashCode == ml_p2_xlarge_HASH)
          {
            return TransformInstanceType::ml_p2_xlarge;
          }
          else if (hashCode == ml_p2_8xlarge_HASH)
          {
            return TransformInstanceType::ml_p2_8xlarge;
          }
          else if (hashCode == ml_p2_16xlarge_HASH)
          {
            return TransformInstanceType::ml_p2_16xlarge;
          }
          else if (hashCode == ml_p3_2xlarge_HASH)
          {
            return TransformInstanceType::ml_p3_2xlarge;
          }
          else if (hashCode == ml_p3_8xlarge_HASH)
          {
            return TransformInstanceType::ml_p3_8xlarge;
          }
          else if (hashCode == ml_p3_16xlarge_HASH)
          {
            return TransformInstanceType::ml_p3_16xlarge;
          }
          else if (hashCode == ml_c5_xlarge_HASH)
          {
            return TransformInstanceType::ml_c5_xlarge;
          }
          else if (hashCode == ml_c5_2xlarge_HASH)
          {
            return TransformInstanceType::ml_c5_2xlarge;
          }
          else if (hashCode == ml_c5_4xlarge_HASH)
          {
            return TransformInstanceType::ml_c5_4xlarge;
          }
          else if (hashCode == ml_c5_9xlarge_HASH)
          {
            return TransformInstanceType::ml_c5_9xlarge;
          }
          else if (hashCode == ml_c5_18xlarge_HASH)
          {
            return TransformInstanceType::ml_c5_18xlarge;
          }
          else if (hashCode == ml_m5_large_HASH)
          {
            return TransformInstanceType::ml_m5_large;
          }
          else if (hashCode == ml_m5_xlarge_HASH)
          {
            return TransformInstanceType::ml_m5_xlarge;
          }
          else if (hashCode == ml_m5_2xlarge_HASH)
          {
            return TransformInstanceType::ml_m5_2xlarge;
          }
          else if (hashCode == ml_m5_4xlarge_HASH)
          {
            return TransformInstanceType::ml_m5_4xlarge;
          }
          else if (hashCode == ml_m5_12xlarge_HASH)
          {
            return TransformInstanceType::ml_m5_12xlarge;
          }
          else if (hashCode == ml_m5_24xlarge_HASH)
          {
            return TransformInstanceType::ml_m5_24xlarge;
          }
          else if (hashCode == ml_m6i_large_HASH)
          {
            return TransformInstanceType::ml_m6i_large;
          }
          else if (hashCode == ml_m6i_xlarge_HASH)
          {
            return TransformInstanceType::ml_m6i_xlarge;
          }
          else if (hashCode == ml_m6i_2xlarge_HASH)
          {
            return TransformInstanceType::ml_m6i_2xlarge;
          }
          else if (hashCode == ml_m6i_4xlarge_HASH)
          {
            return TransformInstanceType::ml_m6i_4xlarge;
          }
          else if (hashCode == ml_m6i_8xlarge_HASH)
          {
            return TransformInstanceType::ml_m6i_8xlarge;
          }
          else if (hashCode == ml_m6i_12xlarge_HASH)
          {
            return TransformInstanceType::ml_m6i_12xlarge;
          }
          else if (hashCode == ml_m6i_16xlarge_HASH)
          {
            return TransformInstanceType::ml_m6i_16xlarge;
          }
          else if (hashCode == ml_m6i_24xlarge_HASH)
          {
            return TransformInstanceType::ml_m6i_24xlarge;
          }
          else if (hashCode == ml_m6i_32xlarge_HASH)
          {
            return TransformInstanceType::ml_m6i_32xlarge;
          }
          else if (hashCode == ml_c6i_large_HASH)
          {
            return TransformInstanceType::ml_c6i_large;
          }
          else if (hashCode == ml_c6i_xlarge_HASH)
          {
            return TransformInstanceType::ml_c6i_xlarge;
          }
          else if (hashCode == ml_c6i_2xlarge_HASH)
          {
            return TransformInstanceType::ml_c6i_2xlarge;
          }
          else if (hashCode == ml_c6i_4xlarge_HASH)
          {
            return TransformInstanceType::ml_c6i_4xlarge;
          }
          else if (hashCode == ml_c6i_8xlarge_HASH)
          {
            return TransformInstanceType::ml_c6i_8xlarge;
          }
          else if (hashCode == ml_c6i_12xlarge_HASH)
          {
            return TransformInstanceType::ml_c6i_12xlarge;
          }
          else if (hashCode == ml_c6i_16xlarge_HASH)
          {
            return TransformInstanceType::ml_c6i_16xlarge;
          }
          else if (hashCode == ml_c6i_24xlarge_HASH)
          {
            return TransformInstanceType::ml_c6i_24xlarge;
          }
          else if (hashCode == ml_c6i_32xlarge_HASH)
          {
            return TransformInstanceType::ml_c6i_32xlarge;
          }
          else if (hashCode == ml_r6i_large_HASH)
          {
            return TransformInstanceType::ml_r6i_large;
          }
          else if (hashCode == ml_r6i_xlarge_HASH)
          {
            return TransformInstanceType::ml_r6i_xlarge;
          }
          else if (hashCode == ml_r6i_2xlarge_HASH)
          {
            return TransformInstanceType::ml_r6i_2xlarge;
          }
          else if (hashCode == ml_r6i_4xlarge_HASH)
          {
            return TransformInstanceType::ml_r6i_4xlarge;
          }
          else if (hashCode == ml_r6i_8xlarge_HASH)
          {
            return TransformInstanceType::ml_r6i_8xlarge;
          }
          else if (hashCode == ml_r6i_12xlarge_HASH)
          {
            return TransformInstanceType::ml_r6i_12xlarge;
          }
          else if (hashCode == ml_r6i_16xlarge_HASH)
          {
            return TransformInstanceType::ml_r6i_16xlarge;
          }
          else if (hashCode == ml_r6i_24xlarge_HASH)
          {
            return TransformInstanceType::ml_r6i_24xlarge;
          }
          else if (hashCode == ml_r6i_32xlarge_HASH)
          {
            return TransformInstanceType::ml_r6i_32xlarge;
          }
          else if (hashCode == ml_m7i_large_HASH)
          {
            return TransformInstanceType::ml_m7i_large;
          }
          else if (hashCode == ml_m7i_xlarge_HASH)
          {
            return TransformInstanceType::ml_m7i_xlarge;
          }
          else if (hashCode == ml_m7i_2xlarge_HASH)
          {
            return TransformInstanceType::ml_m7i_2xlarge;
          }
          else if (hashCode == ml_m7i_4xlarge_HASH)
          {
            return TransformInstanceType::ml_m7i_4xlarge;
          }
          else if (hashCode == ml_m7i_8xlarge_HASH)
          {
            return TransformInstanceType::ml_m7i_8xlarge;
          }
          else if (hashCode == ml_m7i_12xlarge_HASH)
          {
            return TransformInstanceType::ml_m7i_12xlarge;
          }
          else if (hashCode == ml_m7i_16xlarge_HASH)
          {
            return TransformInstanceType::ml_m7i_16xlarge;
          }
          else if (hashCode == ml_m7i_24xlarge_HASH)
          {
            return TransformInstanceType::ml_m7i_24xlarge;
          }
          else if (hashCode == ml_m7i_48xlarge_HASH)
          {
            return TransformInstanceType::ml_m7i_48xlarge;
          }
          else if (hashCode == ml_c7i_large_HASH)
          {
            return TransformInstanceType::ml_c7i_large;
          }
          else if (hashCode == ml_c7i_xlarge_HASH)
          {
            return TransformInstanceType::ml_c7i_xlarge;
          }
          else if (hashCode == ml_c7i_2xlarge_HASH)
          {
            return TransformInstanceType::ml_c7i_2xlarge;
          }
          else if (hashCode == ml_c7i_4xlarge_HASH)
          {
            return TransformInstanceType::ml_c7i_4xlarge;
          }
          else if (hashCode == ml_c7i_8xlarge_HASH)
          {
            return TransformInstanceType::ml_c7i_8xlarge;
          }
          else if (hashCode == ml_c7i_12xlarge_HASH)
          {
            return TransformInstanceType::ml_c7i_12xlarge;
          }
          else if (hashCode == ml_c7i_16xlarge_HASH)
          {
            return TransformInstanceType::ml_c7i_16xlarge;
          }
          else if (hashCode == ml_c7i_24xlarge_HASH)
          {
            return TransformInstanceType::ml_c7i_24xlarge;
          }
          else if (hashCode == ml_c7i_48xlarge_HASH)
          {
            return TransformInstanceType::ml_c7i_48xlarge;
          }
          else if (hashCode == ml_r7i_large_HASH)
          {
            return TransformInstanceType::ml_r7i_large;
          }
          else if (hashCode == ml_r7i_xlarge_HASH)
          {
            return TransformInstanceType::ml_r7i_xlarge;
          }
          else if (hashCode == ml_r7i_2xlarge_HASH)
          {
            return TransformInstanceType::ml_r7i_2xlarge;
          }
          else if (hashCode == ml_r7i_4xlarge_HASH)
          {
            return TransformInstanceType::ml_r7i_4xlarge;
          }
          else if (hashCode == ml_r7i_8xlarge_HASH)
          {
            return TransformInstanceType::ml_r7i_8xlarge;
          }
          else if (hashCode == ml_r7i_12xlarge_HASH)
          {
            return TransformInstanceType::ml_r7i_12xlarge;
          }
          else if (hashCode == ml_r7i_16xlarge_HASH)
          {
            return TransformInstanceType::ml_r7i_16xlarge;
          }
          else if (hashCode == ml_r7i_24xlarge_HASH)
          {
            return TransformInstanceType::ml_r7i_24xlarge;
          }
          else if (hashCode == ml_r7i_48xlarge_HASH)
          {
            return TransformInstanceType::ml_r7i_48xlarge;
          }
          else if (hashCode == ml_g4dn_xlarge_HASH)
          {
            return TransformInstanceType::ml_g4dn_xlarge;
          }
          else if (hashCode == ml_g4dn_2xlarge_HASH)
          {
            return TransformInstanceType::ml_g4dn_2xlarge;
          }
          else if (hashCode == ml_g4dn_4xlarge_HASH)
          {
            return TransformInstanceType::ml_g4dn_4xlarge;
          }
          else if (hashCode == ml_g4dn_8xlarge_HASH)
          {
            return TransformInstanceType::ml_g4dn_8xlarge;
          }
          else if (hashCode == ml_g4dn_12xlarge_HASH)
          {
            return TransformInstanceType::ml_g4dn_12xlarge;
          }
          else if (hashCode == ml_g4dn_16xlarge_HASH)
          {
            return TransformInstanceType::ml_g4dn_16xlarge;
          }
          else if (hashCode == ml_g5_xlarge_HASH)
          {
            return TransformInstanceType::ml_g5_xlarge;
          }
          else if (hashCode == ml_g5_2xlarge_HASH)
          {
            return TransformInstanceType::ml_g5_2xlarge;
          }
          else if (hashCode == ml_g5_4xlarge_HASH)
          {
            return TransformInstanceType::ml_g5_4xlarge;
          }
          else if (hashCode == ml_g5_8xlarge_HASH)
          {
            return TransformInstanceType::ml_g5_8xlarge;
          }
          else if (hashCode == ml_g5_12xlarge_HASH)
          {
            return TransformInstanceType::ml_g5_12xlarge;
          }
          else if (hashCode == ml_g5_16xlarge_HASH)
          {
            return TransformInstanceType::ml_g5_16xlarge;
          }
          else if (hashCode == ml_g5_24xlarge_HASH)
          {
            return TransformInstanceType::ml_g5_24xlarge;
          }
          else if (hashCode == ml_g5_48xlarge_HASH)
          {
            return TransformInstanceType::ml_g5_48xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransformInstanceType>(hashCode);
          }

          return TransformInstanceType::NOT_SET;
        }

        Aws::String GetNameForTransformInstanceType(TransformInstanceType enumValue)
        {
          switch(enumValue)
          {
          case TransformInstanceType::NOT_SET:
            return {};
          case TransformInstanceType::ml_m4_xlarge:
            return "ml.m4.xlarge";
          case TransformInstanceType::ml_m4_2xlarge:
            return "ml.m4.2xlarge";
          case TransformInstanceType::ml_m4_4xlarge:
            return "ml.m4.4xlarge";
          case TransformInstanceType::ml_m4_10xlarge:
            return "ml.m4.10xlarge";
          case TransformInstanceType::ml_m4_16xlarge:
            return "ml.m4.16xlarge";
          case TransformInstanceType::ml_c4_xlarge:
            return "ml.c4.xlarge";
          case TransformInstanceType::ml_c4_2xlarge:
            return "ml.c4.2xlarge";
          case TransformInstanceType::ml_c4_4xlarge:
            return "ml.c4.4xlarge";
          case TransformInstanceType::ml_c4_8xlarge:
            return "ml.c4.8xlarge";
          case TransformInstanceType::ml_p2_xlarge:
            return "ml.p2.xlarge";
          case TransformInstanceType::ml_p2_8xlarge:
            return "ml.p2.8xlarge";
          case TransformInstanceType::ml_p2_16xlarge:
            return "ml.p2.16xlarge";
          case TransformInstanceType::ml_p3_2xlarge:
            return "ml.p3.2xlarge";
          case TransformInstanceType::ml_p3_8xlarge:
            return "ml.p3.8xlarge";
          case TransformInstanceType::ml_p3_16xlarge:
            return "ml.p3.16xlarge";
          case TransformInstanceType::ml_c5_xlarge:
            return "ml.c5.xlarge";
          case TransformInstanceType::ml_c5_2xlarge:
            return "ml.c5.2xlarge";
          case TransformInstanceType::ml_c5_4xlarge:
            return "ml.c5.4xlarge";
          case TransformInstanceType::ml_c5_9xlarge:
            return "ml.c5.9xlarge";
          case TransformInstanceType::ml_c5_18xlarge:
            return "ml.c5.18xlarge";
          case TransformInstanceType::ml_m5_large:
            return "ml.m5.large";
          case TransformInstanceType::ml_m5_xlarge:
            return "ml.m5.xlarge";
          case TransformInstanceType::ml_m5_2xlarge:
            return "ml.m5.2xlarge";
          case TransformInstanceType::ml_m5_4xlarge:
            return "ml.m5.4xlarge";
          case TransformInstanceType::ml_m5_12xlarge:
            return "ml.m5.12xlarge";
          case TransformInstanceType::ml_m5_24xlarge:
            return "ml.m5.24xlarge";
          case TransformInstanceType::ml_m6i_large:
            return "ml.m6i.large";
          case TransformInstanceType::ml_m6i_xlarge:
            return "ml.m6i.xlarge";
          case TransformInstanceType::ml_m6i_2xlarge:
            return "ml.m6i.2xlarge";
          case TransformInstanceType::ml_m6i_4xlarge:
            return "ml.m6i.4xlarge";
          case TransformInstanceType::ml_m6i_8xlarge:
            return "ml.m6i.8xlarge";
          case TransformInstanceType::ml_m6i_12xlarge:
            return "ml.m6i.12xlarge";
          case TransformInstanceType::ml_m6i_16xlarge:
            return "ml.m6i.16xlarge";
          case TransformInstanceType::ml_m6i_24xlarge:
            return "ml.m6i.24xlarge";
          case TransformInstanceType::ml_m6i_32xlarge:
            return "ml.m6i.32xlarge";
          case TransformInstanceType::ml_c6i_large:
            return "ml.c6i.large";
          case TransformInstanceType::ml_c6i_xlarge:
            return "ml.c6i.xlarge";
          case TransformInstanceType::ml_c6i_2xlarge:
            return "ml.c6i.2xlarge";
          case TransformInstanceType::ml_c6i_4xlarge:
            return "ml.c6i.4xlarge";
          case TransformInstanceType::ml_c6i_8xlarge:
            return "ml.c6i.8xlarge";
          case TransformInstanceType::ml_c6i_12xlarge:
            return "ml.c6i.12xlarge";
          case TransformInstanceType::ml_c6i_16xlarge:
            return "ml.c6i.16xlarge";
          case TransformInstanceType::ml_c6i_24xlarge:
            return "ml.c6i.24xlarge";
          case TransformInstanceType::ml_c6i_32xlarge:
            return "ml.c6i.32xlarge";
          case TransformInstanceType::ml_r6i_large:
            return "ml.r6i.large";
          case TransformInstanceType::ml_r6i_xlarge:
            return "ml.r6i.xlarge";
          case TransformInstanceType::ml_r6i_2xlarge:
            return "ml.r6i.2xlarge";
          case TransformInstanceType::ml_r6i_4xlarge:
            return "ml.r6i.4xlarge";
          case TransformInstanceType::ml_r6i_8xlarge:
            return "ml.r6i.8xlarge";
          case TransformInstanceType::ml_r6i_12xlarge:
            return "ml.r6i.12xlarge";
          case TransformInstanceType::ml_r6i_16xlarge:
            return "ml.r6i.16xlarge";
          case TransformInstanceType::ml_r6i_24xlarge:
            return "ml.r6i.24xlarge";
          case TransformInstanceType::ml_r6i_32xlarge:
            return "ml.r6i.32xlarge";
          case TransformInstanceType::ml_m7i_large:
            return "ml.m7i.large";
          case TransformInstanceType::ml_m7i_xlarge:
            return "ml.m7i.xlarge";
          case TransformInstanceType::ml_m7i_2xlarge:
            return "ml.m7i.2xlarge";
          case TransformInstanceType::ml_m7i_4xlarge:
            return "ml.m7i.4xlarge";
          case TransformInstanceType::ml_m7i_8xlarge:
            return "ml.m7i.8xlarge";
          case TransformInstanceType::ml_m7i_12xlarge:
            return "ml.m7i.12xlarge";
          case TransformInstanceType::ml_m7i_16xlarge:
            return "ml.m7i.16xlarge";
          case TransformInstanceType::ml_m7i_24xlarge:
            return "ml.m7i.24xlarge";
          case TransformInstanceType::ml_m7i_48xlarge:
            return "ml.m7i.48xlarge";
          case TransformInstanceType::ml_c7i_large:
            return "ml.c7i.large";
          case TransformInstanceType::ml_c7i_xlarge:
            return "ml.c7i.xlarge";
          case TransformInstanceType::ml_c7i_2xlarge:
            return "ml.c7i.2xlarge";
          case TransformInstanceType::ml_c7i_4xlarge:
            return "ml.c7i.4xlarge";
          case TransformInstanceType::ml_c7i_8xlarge:
            return "ml.c7i.8xlarge";
          case TransformInstanceType::ml_c7i_12xlarge:
            return "ml.c7i.12xlarge";
          case TransformInstanceType::ml_c7i_16xlarge:
            return "ml.c7i.16xlarge";
          case TransformInstanceType::ml_c7i_24xlarge:
            return "ml.c7i.24xlarge";
          case TransformInstanceType::ml_c7i_48xlarge:
            return "ml.c7i.48xlarge";
          case TransformInstanceType::ml_r7i_large:
            return "ml.r7i.large";
          case TransformInstanceType::ml_r7i_xlarge:
            return "ml.r7i.xlarge";
          case TransformInstanceType::ml_r7i_2xlarge:
            return "ml.r7i.2xlarge";
          case TransformInstanceType::ml_r7i_4xlarge:
            return "ml.r7i.4xlarge";
          case TransformInstanceType::ml_r7i_8xlarge:
            return "ml.r7i.8xlarge";
          case TransformInstanceType::ml_r7i_12xlarge:
            return "ml.r7i.12xlarge";
          case TransformInstanceType::ml_r7i_16xlarge:
            return "ml.r7i.16xlarge";
          case TransformInstanceType::ml_r7i_24xlarge:
            return "ml.r7i.24xlarge";
          case TransformInstanceType::ml_r7i_48xlarge:
            return "ml.r7i.48xlarge";
          case TransformInstanceType::ml_g4dn_xlarge:
            return "ml.g4dn.xlarge";
          case TransformInstanceType::ml_g4dn_2xlarge:
            return "ml.g4dn.2xlarge";
          case TransformInstanceType::ml_g4dn_4xlarge:
            return "ml.g4dn.4xlarge";
          case TransformInstanceType::ml_g4dn_8xlarge:
            return "ml.g4dn.8xlarge";
          case TransformInstanceType::ml_g4dn_12xlarge:
            return "ml.g4dn.12xlarge";
          case TransformInstanceType::ml_g4dn_16xlarge:
            return "ml.g4dn.16xlarge";
          case TransformInstanceType::ml_g5_xlarge:
            return "ml.g5.xlarge";
          case TransformInstanceType::ml_g5_2xlarge:
            return "ml.g5.2xlarge";
          case TransformInstanceType::ml_g5_4xlarge:
            return "ml.g5.4xlarge";
          case TransformInstanceType::ml_g5_8xlarge:
            return "ml.g5.8xlarge";
          case TransformInstanceType::ml_g5_12xlarge:
            return "ml.g5.12xlarge";
          case TransformInstanceType::ml_g5_16xlarge:
            return "ml.g5.16xlarge";
          case TransformInstanceType::ml_g5_24xlarge:
            return "ml.g5.24xlarge";
          case TransformInstanceType::ml_g5_48xlarge:
            return "ml.g5.48xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransformInstanceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
