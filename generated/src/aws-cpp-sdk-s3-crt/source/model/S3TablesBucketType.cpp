/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/S3TablesBucketType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Crt
  {
    namespace Model
    {
      namespace S3TablesBucketTypeMapper
      {

        static const int aws_HASH = HashingUtils::HashString("aws");
        static const int customer_HASH = HashingUtils::HashString("customer");


        S3TablesBucketType GetS3TablesBucketTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == aws_HASH)
          {
            return S3TablesBucketType::aws;
          }
          else if (hashCode == customer_HASH)
          {
            return S3TablesBucketType::customer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3TablesBucketType>(hashCode);
          }

          return S3TablesBucketType::NOT_SET;
        }

        Aws::String GetNameForS3TablesBucketType(S3TablesBucketType enumValue)
        {
          switch(enumValue)
          {
          case S3TablesBucketType::NOT_SET:
            return {};
          case S3TablesBucketType::aws:
            return "aws";
          case S3TablesBucketType::customer:
            return "customer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3TablesBucketTypeMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
