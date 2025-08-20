/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ReservedCapacityInstanceType.h>
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
      namespace ReservedCapacityInstanceTypeMapper
      {

        static const int ml_p4d_24xlarge_HASH = HashingUtils::HashString("ml.p4d.24xlarge");
        static const int ml_p5_48xlarge_HASH = HashingUtils::HashString("ml.p5.48xlarge");
        static const int ml_p5e_48xlarge_HASH = HashingUtils::HashString("ml.p5e.48xlarge");
        static const int ml_p5en_48xlarge_HASH = HashingUtils::HashString("ml.p5en.48xlarge");
        static const int ml_trn1_32xlarge_HASH = HashingUtils::HashString("ml.trn1.32xlarge");
        static const int ml_trn2_48xlarge_HASH = HashingUtils::HashString("ml.trn2.48xlarge");
        static const int ml_p6_b200_48xlarge_HASH = HashingUtils::HashString("ml.p6-b200.48xlarge");
        static const int ml_p4de_24xlarge_HASH = HashingUtils::HashString("ml.p4de.24xlarge");
        static const int ml_p6e_gb200_36xlarge_HASH = HashingUtils::HashString("ml.p6e-gb200.36xlarge");
        static const int ml_p5_4xlarge_HASH = HashingUtils::HashString("ml.p5.4xlarge");


        ReservedCapacityInstanceType GetReservedCapacityInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ml_p4d_24xlarge_HASH)
          {
            return ReservedCapacityInstanceType::ml_p4d_24xlarge;
          }
          else if (hashCode == ml_p5_48xlarge_HASH)
          {
            return ReservedCapacityInstanceType::ml_p5_48xlarge;
          }
          else if (hashCode == ml_p5e_48xlarge_HASH)
          {
            return ReservedCapacityInstanceType::ml_p5e_48xlarge;
          }
          else if (hashCode == ml_p5en_48xlarge_HASH)
          {
            return ReservedCapacityInstanceType::ml_p5en_48xlarge;
          }
          else if (hashCode == ml_trn1_32xlarge_HASH)
          {
            return ReservedCapacityInstanceType::ml_trn1_32xlarge;
          }
          else if (hashCode == ml_trn2_48xlarge_HASH)
          {
            return ReservedCapacityInstanceType::ml_trn2_48xlarge;
          }
          else if (hashCode == ml_p6_b200_48xlarge_HASH)
          {
            return ReservedCapacityInstanceType::ml_p6_b200_48xlarge;
          }
          else if (hashCode == ml_p4de_24xlarge_HASH)
          {
            return ReservedCapacityInstanceType::ml_p4de_24xlarge;
          }
          else if (hashCode == ml_p6e_gb200_36xlarge_HASH)
          {
            return ReservedCapacityInstanceType::ml_p6e_gb200_36xlarge;
          }
          else if (hashCode == ml_p5_4xlarge_HASH)
          {
            return ReservedCapacityInstanceType::ml_p5_4xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservedCapacityInstanceType>(hashCode);
          }

          return ReservedCapacityInstanceType::NOT_SET;
        }

        Aws::String GetNameForReservedCapacityInstanceType(ReservedCapacityInstanceType enumValue)
        {
          switch(enumValue)
          {
          case ReservedCapacityInstanceType::NOT_SET:
            return {};
          case ReservedCapacityInstanceType::ml_p4d_24xlarge:
            return "ml.p4d.24xlarge";
          case ReservedCapacityInstanceType::ml_p5_48xlarge:
            return "ml.p5.48xlarge";
          case ReservedCapacityInstanceType::ml_p5e_48xlarge:
            return "ml.p5e.48xlarge";
          case ReservedCapacityInstanceType::ml_p5en_48xlarge:
            return "ml.p5en.48xlarge";
          case ReservedCapacityInstanceType::ml_trn1_32xlarge:
            return "ml.trn1.32xlarge";
          case ReservedCapacityInstanceType::ml_trn2_48xlarge:
            return "ml.trn2.48xlarge";
          case ReservedCapacityInstanceType::ml_p6_b200_48xlarge:
            return "ml.p6-b200.48xlarge";
          case ReservedCapacityInstanceType::ml_p4de_24xlarge:
            return "ml.p4de.24xlarge";
          case ReservedCapacityInstanceType::ml_p6e_gb200_36xlarge:
            return "ml.p6e-gb200.36xlarge";
          case ReservedCapacityInstanceType::ml_p5_4xlarge:
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

      } // namespace ReservedCapacityInstanceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
