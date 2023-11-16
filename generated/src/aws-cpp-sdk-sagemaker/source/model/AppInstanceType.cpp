/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppInstanceType.h>
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
      namespace AppInstanceTypeMapper
      {

        static const int system_HASH = HashingUtils::HashString("system");
        static const int ml_t3_micro_HASH = HashingUtils::HashString("ml.t3.micro");
        static const int ml_t3_small_HASH = HashingUtils::HashString("ml.t3.small");
        static const int ml_t3_medium_HASH = HashingUtils::HashString("ml.t3.medium");
        static const int ml_t3_large_HASH = HashingUtils::HashString("ml.t3.large");
        static const int ml_t3_xlarge_HASH = HashingUtils::HashString("ml.t3.xlarge");
        static const int ml_t3_2xlarge_HASH = HashingUtils::HashString("ml.t3.2xlarge");
        static const int ml_m5_large_HASH = HashingUtils::HashString("ml.m5.large");
        static const int ml_m5_xlarge_HASH = HashingUtils::HashString("ml.m5.xlarge");
        static const int ml_m5_2xlarge_HASH = HashingUtils::HashString("ml.m5.2xlarge");
        static const int ml_m5_4xlarge_HASH = HashingUtils::HashString("ml.m5.4xlarge");
        static const int ml_m5_8xlarge_HASH = HashingUtils::HashString("ml.m5.8xlarge");
        static const int ml_m5_12xlarge_HASH = HashingUtils::HashString("ml.m5.12xlarge");
        static const int ml_m5_16xlarge_HASH = HashingUtils::HashString("ml.m5.16xlarge");
        static const int ml_m5_24xlarge_HASH = HashingUtils::HashString("ml.m5.24xlarge");
        static const int ml_m5d_large_HASH = HashingUtils::HashString("ml.m5d.large");
        static const int ml_m5d_xlarge_HASH = HashingUtils::HashString("ml.m5d.xlarge");
        static const int ml_m5d_2xlarge_HASH = HashingUtils::HashString("ml.m5d.2xlarge");
        static const int ml_m5d_4xlarge_HASH = HashingUtils::HashString("ml.m5d.4xlarge");
        static const int ml_m5d_8xlarge_HASH = HashingUtils::HashString("ml.m5d.8xlarge");
        static const int ml_m5d_12xlarge_HASH = HashingUtils::HashString("ml.m5d.12xlarge");
        static const int ml_m5d_16xlarge_HASH = HashingUtils::HashString("ml.m5d.16xlarge");
        static const int ml_m5d_24xlarge_HASH = HashingUtils::HashString("ml.m5d.24xlarge");
        static const int ml_c5_large_HASH = HashingUtils::HashString("ml.c5.large");
        static const int ml_c5_xlarge_HASH = HashingUtils::HashString("ml.c5.xlarge");
        static const int ml_c5_2xlarge_HASH = HashingUtils::HashString("ml.c5.2xlarge");
        static const int ml_c5_4xlarge_HASH = HashingUtils::HashString("ml.c5.4xlarge");
        static const int ml_c5_9xlarge_HASH = HashingUtils::HashString("ml.c5.9xlarge");
        static const int ml_c5_12xlarge_HASH = HashingUtils::HashString("ml.c5.12xlarge");
        static const int ml_c5_18xlarge_HASH = HashingUtils::HashString("ml.c5.18xlarge");
        static const int ml_c5_24xlarge_HASH = HashingUtils::HashString("ml.c5.24xlarge");
        static const int ml_p3_2xlarge_HASH = HashingUtils::HashString("ml.p3.2xlarge");
        static const int ml_p3_8xlarge_HASH = HashingUtils::HashString("ml.p3.8xlarge");
        static const int ml_p3_16xlarge_HASH = HashingUtils::HashString("ml.p3.16xlarge");
        static const int ml_p3dn_24xlarge_HASH = HashingUtils::HashString("ml.p3dn.24xlarge");
        static const int ml_g4dn_xlarge_HASH = HashingUtils::HashString("ml.g4dn.xlarge");
        static const int ml_g4dn_2xlarge_HASH = HashingUtils::HashString("ml.g4dn.2xlarge");
        static const int ml_g4dn_4xlarge_HASH = HashingUtils::HashString("ml.g4dn.4xlarge");
        static const int ml_g4dn_8xlarge_HASH = HashingUtils::HashString("ml.g4dn.8xlarge");
        static const int ml_g4dn_12xlarge_HASH = HashingUtils::HashString("ml.g4dn.12xlarge");
        static const int ml_g4dn_16xlarge_HASH = HashingUtils::HashString("ml.g4dn.16xlarge");
        static const int ml_r5_large_HASH = HashingUtils::HashString("ml.r5.large");
        static const int ml_r5_xlarge_HASH = HashingUtils::HashString("ml.r5.xlarge");
        static const int ml_r5_2xlarge_HASH = HashingUtils::HashString("ml.r5.2xlarge");
        static const int ml_r5_4xlarge_HASH = HashingUtils::HashString("ml.r5.4xlarge");
        static const int ml_r5_8xlarge_HASH = HashingUtils::HashString("ml.r5.8xlarge");
        static const int ml_r5_12xlarge_HASH = HashingUtils::HashString("ml.r5.12xlarge");
        static const int ml_r5_16xlarge_HASH = HashingUtils::HashString("ml.r5.16xlarge");
        static const int ml_r5_24xlarge_HASH = HashingUtils::HashString("ml.r5.24xlarge");
        static const int ml_g5_xlarge_HASH = HashingUtils::HashString("ml.g5.xlarge");
        static const int ml_g5_2xlarge_HASH = HashingUtils::HashString("ml.g5.2xlarge");
        static const int ml_g5_4xlarge_HASH = HashingUtils::HashString("ml.g5.4xlarge");
        static const int ml_g5_8xlarge_HASH = HashingUtils::HashString("ml.g5.8xlarge");
        static const int ml_g5_16xlarge_HASH = HashingUtils::HashString("ml.g5.16xlarge");
        static const int ml_g5_12xlarge_HASH = HashingUtils::HashString("ml.g5.12xlarge");
        static const int ml_g5_24xlarge_HASH = HashingUtils::HashString("ml.g5.24xlarge");
        static const int ml_g5_48xlarge_HASH = HashingUtils::HashString("ml.g5.48xlarge");
        static const int ml_geospatial_interactive_HASH = HashingUtils::HashString("ml.geospatial.interactive");
        static const int ml_p4d_24xlarge_HASH = HashingUtils::HashString("ml.p4d.24xlarge");
        static const int ml_p4de_24xlarge_HASH = HashingUtils::HashString("ml.p4de.24xlarge");
        static const int ml_trn1_2xlarge_HASH = HashingUtils::HashString("ml.trn1.2xlarge");
        static const int ml_trn1_32xlarge_HASH = HashingUtils::HashString("ml.trn1.32xlarge");
        static const int ml_trn1n_32xlarge_HASH = HashingUtils::HashString("ml.trn1n.32xlarge");


        AppInstanceType GetAppInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == system_HASH)
          {
            return AppInstanceType::system;
          }
          else if (hashCode == ml_t3_micro_HASH)
          {
            return AppInstanceType::ml_t3_micro;
          }
          else if (hashCode == ml_t3_small_HASH)
          {
            return AppInstanceType::ml_t3_small;
          }
          else if (hashCode == ml_t3_medium_HASH)
          {
            return AppInstanceType::ml_t3_medium;
          }
          else if (hashCode == ml_t3_large_HASH)
          {
            return AppInstanceType::ml_t3_large;
          }
          else if (hashCode == ml_t3_xlarge_HASH)
          {
            return AppInstanceType::ml_t3_xlarge;
          }
          else if (hashCode == ml_t3_2xlarge_HASH)
          {
            return AppInstanceType::ml_t3_2xlarge;
          }
          else if (hashCode == ml_m5_large_HASH)
          {
            return AppInstanceType::ml_m5_large;
          }
          else if (hashCode == ml_m5_xlarge_HASH)
          {
            return AppInstanceType::ml_m5_xlarge;
          }
          else if (hashCode == ml_m5_2xlarge_HASH)
          {
            return AppInstanceType::ml_m5_2xlarge;
          }
          else if (hashCode == ml_m5_4xlarge_HASH)
          {
            return AppInstanceType::ml_m5_4xlarge;
          }
          else if (hashCode == ml_m5_8xlarge_HASH)
          {
            return AppInstanceType::ml_m5_8xlarge;
          }
          else if (hashCode == ml_m5_12xlarge_HASH)
          {
            return AppInstanceType::ml_m5_12xlarge;
          }
          else if (hashCode == ml_m5_16xlarge_HASH)
          {
            return AppInstanceType::ml_m5_16xlarge;
          }
          else if (hashCode == ml_m5_24xlarge_HASH)
          {
            return AppInstanceType::ml_m5_24xlarge;
          }
          else if (hashCode == ml_m5d_large_HASH)
          {
            return AppInstanceType::ml_m5d_large;
          }
          else if (hashCode == ml_m5d_xlarge_HASH)
          {
            return AppInstanceType::ml_m5d_xlarge;
          }
          else if (hashCode == ml_m5d_2xlarge_HASH)
          {
            return AppInstanceType::ml_m5d_2xlarge;
          }
          else if (hashCode == ml_m5d_4xlarge_HASH)
          {
            return AppInstanceType::ml_m5d_4xlarge;
          }
          else if (hashCode == ml_m5d_8xlarge_HASH)
          {
            return AppInstanceType::ml_m5d_8xlarge;
          }
          else if (hashCode == ml_m5d_12xlarge_HASH)
          {
            return AppInstanceType::ml_m5d_12xlarge;
          }
          else if (hashCode == ml_m5d_16xlarge_HASH)
          {
            return AppInstanceType::ml_m5d_16xlarge;
          }
          else if (hashCode == ml_m5d_24xlarge_HASH)
          {
            return AppInstanceType::ml_m5d_24xlarge;
          }
          else if (hashCode == ml_c5_large_HASH)
          {
            return AppInstanceType::ml_c5_large;
          }
          else if (hashCode == ml_c5_xlarge_HASH)
          {
            return AppInstanceType::ml_c5_xlarge;
          }
          else if (hashCode == ml_c5_2xlarge_HASH)
          {
            return AppInstanceType::ml_c5_2xlarge;
          }
          else if (hashCode == ml_c5_4xlarge_HASH)
          {
            return AppInstanceType::ml_c5_4xlarge;
          }
          else if (hashCode == ml_c5_9xlarge_HASH)
          {
            return AppInstanceType::ml_c5_9xlarge;
          }
          else if (hashCode == ml_c5_12xlarge_HASH)
          {
            return AppInstanceType::ml_c5_12xlarge;
          }
          else if (hashCode == ml_c5_18xlarge_HASH)
          {
            return AppInstanceType::ml_c5_18xlarge;
          }
          else if (hashCode == ml_c5_24xlarge_HASH)
          {
            return AppInstanceType::ml_c5_24xlarge;
          }
          else if (hashCode == ml_p3_2xlarge_HASH)
          {
            return AppInstanceType::ml_p3_2xlarge;
          }
          else if (hashCode == ml_p3_8xlarge_HASH)
          {
            return AppInstanceType::ml_p3_8xlarge;
          }
          else if (hashCode == ml_p3_16xlarge_HASH)
          {
            return AppInstanceType::ml_p3_16xlarge;
          }
          else if (hashCode == ml_p3dn_24xlarge_HASH)
          {
            return AppInstanceType::ml_p3dn_24xlarge;
          }
          else if (hashCode == ml_g4dn_xlarge_HASH)
          {
            return AppInstanceType::ml_g4dn_xlarge;
          }
          else if (hashCode == ml_g4dn_2xlarge_HASH)
          {
            return AppInstanceType::ml_g4dn_2xlarge;
          }
          else if (hashCode == ml_g4dn_4xlarge_HASH)
          {
            return AppInstanceType::ml_g4dn_4xlarge;
          }
          else if (hashCode == ml_g4dn_8xlarge_HASH)
          {
            return AppInstanceType::ml_g4dn_8xlarge;
          }
          else if (hashCode == ml_g4dn_12xlarge_HASH)
          {
            return AppInstanceType::ml_g4dn_12xlarge;
          }
          else if (hashCode == ml_g4dn_16xlarge_HASH)
          {
            return AppInstanceType::ml_g4dn_16xlarge;
          }
          else if (hashCode == ml_r5_large_HASH)
          {
            return AppInstanceType::ml_r5_large;
          }
          else if (hashCode == ml_r5_xlarge_HASH)
          {
            return AppInstanceType::ml_r5_xlarge;
          }
          else if (hashCode == ml_r5_2xlarge_HASH)
          {
            return AppInstanceType::ml_r5_2xlarge;
          }
          else if (hashCode == ml_r5_4xlarge_HASH)
          {
            return AppInstanceType::ml_r5_4xlarge;
          }
          else if (hashCode == ml_r5_8xlarge_HASH)
          {
            return AppInstanceType::ml_r5_8xlarge;
          }
          else if (hashCode == ml_r5_12xlarge_HASH)
          {
            return AppInstanceType::ml_r5_12xlarge;
          }
          else if (hashCode == ml_r5_16xlarge_HASH)
          {
            return AppInstanceType::ml_r5_16xlarge;
          }
          else if (hashCode == ml_r5_24xlarge_HASH)
          {
            return AppInstanceType::ml_r5_24xlarge;
          }
          else if (hashCode == ml_g5_xlarge_HASH)
          {
            return AppInstanceType::ml_g5_xlarge;
          }
          else if (hashCode == ml_g5_2xlarge_HASH)
          {
            return AppInstanceType::ml_g5_2xlarge;
          }
          else if (hashCode == ml_g5_4xlarge_HASH)
          {
            return AppInstanceType::ml_g5_4xlarge;
          }
          else if (hashCode == ml_g5_8xlarge_HASH)
          {
            return AppInstanceType::ml_g5_8xlarge;
          }
          else if (hashCode == ml_g5_16xlarge_HASH)
          {
            return AppInstanceType::ml_g5_16xlarge;
          }
          else if (hashCode == ml_g5_12xlarge_HASH)
          {
            return AppInstanceType::ml_g5_12xlarge;
          }
          else if (hashCode == ml_g5_24xlarge_HASH)
          {
            return AppInstanceType::ml_g5_24xlarge;
          }
          else if (hashCode == ml_g5_48xlarge_HASH)
          {
            return AppInstanceType::ml_g5_48xlarge;
          }
          else if (hashCode == ml_geospatial_interactive_HASH)
          {
            return AppInstanceType::ml_geospatial_interactive;
          }
          else if (hashCode == ml_p4d_24xlarge_HASH)
          {
            return AppInstanceType::ml_p4d_24xlarge;
          }
          else if (hashCode == ml_p4de_24xlarge_HASH)
          {
            return AppInstanceType::ml_p4de_24xlarge;
          }
          else if (hashCode == ml_trn1_2xlarge_HASH)
          {
            return AppInstanceType::ml_trn1_2xlarge;
          }
          else if (hashCode == ml_trn1_32xlarge_HASH)
          {
            return AppInstanceType::ml_trn1_32xlarge;
          }
          else if (hashCode == ml_trn1n_32xlarge_HASH)
          {
            return AppInstanceType::ml_trn1n_32xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppInstanceType>(hashCode);
          }

          return AppInstanceType::NOT_SET;
        }

        Aws::String GetNameForAppInstanceType(AppInstanceType enumValue)
        {
          switch(enumValue)
          {
          case AppInstanceType::NOT_SET:
            return {};
          case AppInstanceType::system:
            return "system";
          case AppInstanceType::ml_t3_micro:
            return "ml.t3.micro";
          case AppInstanceType::ml_t3_small:
            return "ml.t3.small";
          case AppInstanceType::ml_t3_medium:
            return "ml.t3.medium";
          case AppInstanceType::ml_t3_large:
            return "ml.t3.large";
          case AppInstanceType::ml_t3_xlarge:
            return "ml.t3.xlarge";
          case AppInstanceType::ml_t3_2xlarge:
            return "ml.t3.2xlarge";
          case AppInstanceType::ml_m5_large:
            return "ml.m5.large";
          case AppInstanceType::ml_m5_xlarge:
            return "ml.m5.xlarge";
          case AppInstanceType::ml_m5_2xlarge:
            return "ml.m5.2xlarge";
          case AppInstanceType::ml_m5_4xlarge:
            return "ml.m5.4xlarge";
          case AppInstanceType::ml_m5_8xlarge:
            return "ml.m5.8xlarge";
          case AppInstanceType::ml_m5_12xlarge:
            return "ml.m5.12xlarge";
          case AppInstanceType::ml_m5_16xlarge:
            return "ml.m5.16xlarge";
          case AppInstanceType::ml_m5_24xlarge:
            return "ml.m5.24xlarge";
          case AppInstanceType::ml_m5d_large:
            return "ml.m5d.large";
          case AppInstanceType::ml_m5d_xlarge:
            return "ml.m5d.xlarge";
          case AppInstanceType::ml_m5d_2xlarge:
            return "ml.m5d.2xlarge";
          case AppInstanceType::ml_m5d_4xlarge:
            return "ml.m5d.4xlarge";
          case AppInstanceType::ml_m5d_8xlarge:
            return "ml.m5d.8xlarge";
          case AppInstanceType::ml_m5d_12xlarge:
            return "ml.m5d.12xlarge";
          case AppInstanceType::ml_m5d_16xlarge:
            return "ml.m5d.16xlarge";
          case AppInstanceType::ml_m5d_24xlarge:
            return "ml.m5d.24xlarge";
          case AppInstanceType::ml_c5_large:
            return "ml.c5.large";
          case AppInstanceType::ml_c5_xlarge:
            return "ml.c5.xlarge";
          case AppInstanceType::ml_c5_2xlarge:
            return "ml.c5.2xlarge";
          case AppInstanceType::ml_c5_4xlarge:
            return "ml.c5.4xlarge";
          case AppInstanceType::ml_c5_9xlarge:
            return "ml.c5.9xlarge";
          case AppInstanceType::ml_c5_12xlarge:
            return "ml.c5.12xlarge";
          case AppInstanceType::ml_c5_18xlarge:
            return "ml.c5.18xlarge";
          case AppInstanceType::ml_c5_24xlarge:
            return "ml.c5.24xlarge";
          case AppInstanceType::ml_p3_2xlarge:
            return "ml.p3.2xlarge";
          case AppInstanceType::ml_p3_8xlarge:
            return "ml.p3.8xlarge";
          case AppInstanceType::ml_p3_16xlarge:
            return "ml.p3.16xlarge";
          case AppInstanceType::ml_p3dn_24xlarge:
            return "ml.p3dn.24xlarge";
          case AppInstanceType::ml_g4dn_xlarge:
            return "ml.g4dn.xlarge";
          case AppInstanceType::ml_g4dn_2xlarge:
            return "ml.g4dn.2xlarge";
          case AppInstanceType::ml_g4dn_4xlarge:
            return "ml.g4dn.4xlarge";
          case AppInstanceType::ml_g4dn_8xlarge:
            return "ml.g4dn.8xlarge";
          case AppInstanceType::ml_g4dn_12xlarge:
            return "ml.g4dn.12xlarge";
          case AppInstanceType::ml_g4dn_16xlarge:
            return "ml.g4dn.16xlarge";
          case AppInstanceType::ml_r5_large:
            return "ml.r5.large";
          case AppInstanceType::ml_r5_xlarge:
            return "ml.r5.xlarge";
          case AppInstanceType::ml_r5_2xlarge:
            return "ml.r5.2xlarge";
          case AppInstanceType::ml_r5_4xlarge:
            return "ml.r5.4xlarge";
          case AppInstanceType::ml_r5_8xlarge:
            return "ml.r5.8xlarge";
          case AppInstanceType::ml_r5_12xlarge:
            return "ml.r5.12xlarge";
          case AppInstanceType::ml_r5_16xlarge:
            return "ml.r5.16xlarge";
          case AppInstanceType::ml_r5_24xlarge:
            return "ml.r5.24xlarge";
          case AppInstanceType::ml_g5_xlarge:
            return "ml.g5.xlarge";
          case AppInstanceType::ml_g5_2xlarge:
            return "ml.g5.2xlarge";
          case AppInstanceType::ml_g5_4xlarge:
            return "ml.g5.4xlarge";
          case AppInstanceType::ml_g5_8xlarge:
            return "ml.g5.8xlarge";
          case AppInstanceType::ml_g5_16xlarge:
            return "ml.g5.16xlarge";
          case AppInstanceType::ml_g5_12xlarge:
            return "ml.g5.12xlarge";
          case AppInstanceType::ml_g5_24xlarge:
            return "ml.g5.24xlarge";
          case AppInstanceType::ml_g5_48xlarge:
            return "ml.g5.48xlarge";
          case AppInstanceType::ml_geospatial_interactive:
            return "ml.geospatial.interactive";
          case AppInstanceType::ml_p4d_24xlarge:
            return "ml.p4d.24xlarge";
          case AppInstanceType::ml_p4de_24xlarge:
            return "ml.p4de.24xlarge";
          case AppInstanceType::ml_trn1_2xlarge:
            return "ml.trn1.2xlarge";
          case AppInstanceType::ml_trn1_32xlarge:
            return "ml.trn1.32xlarge";
          case AppInstanceType::ml_trn1n_32xlarge:
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

      } // namespace AppInstanceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
