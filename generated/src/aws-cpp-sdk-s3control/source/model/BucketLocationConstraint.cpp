﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/BucketLocationConstraint.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace BucketLocationConstraintMapper
      {

        static const int EU_HASH = HashingUtils::HashString("EU");
        static const int eu_west_1_HASH = HashingUtils::HashString("eu-west-1");
        static const int us_west_1_HASH = HashingUtils::HashString("us-west-1");
        static const int us_west_2_HASH = HashingUtils::HashString("us-west-2");
        static const int ap_south_1_HASH = HashingUtils::HashString("ap-south-1");
        static const int ap_southeast_1_HASH = HashingUtils::HashString("ap-southeast-1");
        static const int ap_southeast_2_HASH = HashingUtils::HashString("ap-southeast-2");
        static const int ap_northeast_1_HASH = HashingUtils::HashString("ap-northeast-1");
        static const int sa_east_1_HASH = HashingUtils::HashString("sa-east-1");
        static const int cn_north_1_HASH = HashingUtils::HashString("cn-north-1");
        static const int eu_central_1_HASH = HashingUtils::HashString("eu-central-1");


        BucketLocationConstraint GetBucketLocationConstraintForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EU_HASH)
          {
            return BucketLocationConstraint::EU;
          }
          else if (hashCode == eu_west_1_HASH)
          {
            return BucketLocationConstraint::eu_west_1;
          }
          else if (hashCode == us_west_1_HASH)
          {
            return BucketLocationConstraint::us_west_1;
          }
          else if (hashCode == us_west_2_HASH)
          {
            return BucketLocationConstraint::us_west_2;
          }
          else if (hashCode == ap_south_1_HASH)
          {
            return BucketLocationConstraint::ap_south_1;
          }
          else if (hashCode == ap_southeast_1_HASH)
          {
            return BucketLocationConstraint::ap_southeast_1;
          }
          else if (hashCode == ap_southeast_2_HASH)
          {
            return BucketLocationConstraint::ap_southeast_2;
          }
          else if (hashCode == ap_northeast_1_HASH)
          {
            return BucketLocationConstraint::ap_northeast_1;
          }
          else if (hashCode == sa_east_1_HASH)
          {
            return BucketLocationConstraint::sa_east_1;
          }
          else if (hashCode == cn_north_1_HASH)
          {
            return BucketLocationConstraint::cn_north_1;
          }
          else if (hashCode == eu_central_1_HASH)
          {
            return BucketLocationConstraint::eu_central_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BucketLocationConstraint>(hashCode);
          }

          return BucketLocationConstraint::NOT_SET;
        }

        Aws::String GetNameForBucketLocationConstraint(BucketLocationConstraint enumValue)
        {
          switch(enumValue)
          {
          case BucketLocationConstraint::NOT_SET:
            return {};
          case BucketLocationConstraint::EU:
            return "EU";
          case BucketLocationConstraint::eu_west_1:
            return "eu-west-1";
          case BucketLocationConstraint::us_west_1:
            return "us-west-1";
          case BucketLocationConstraint::us_west_2:
            return "us-west-2";
          case BucketLocationConstraint::ap_south_1:
            return "ap-south-1";
          case BucketLocationConstraint::ap_southeast_1:
            return "ap-southeast-1";
          case BucketLocationConstraint::ap_southeast_2:
            return "ap-southeast-2";
          case BucketLocationConstraint::ap_northeast_1:
            return "ap-northeast-1";
          case BucketLocationConstraint::sa_east_1:
            return "sa-east-1";
          case BucketLocationConstraint::cn_north_1:
            return "cn-north-1";
          case BucketLocationConstraint::eu_central_1:
            return "eu-central-1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BucketLocationConstraintMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
