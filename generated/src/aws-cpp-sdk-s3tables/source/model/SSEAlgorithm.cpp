/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/SSEAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Tables
  {
    namespace Model
    {
      namespace SSEAlgorithmMapper
      {

        static const int AES256_HASH = HashingUtils::HashString("AES256");
        static const int aws_kms_HASH = HashingUtils::HashString("aws:kms");


        SSEAlgorithm GetSSEAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AES256_HASH)
          {
            return SSEAlgorithm::AES256;
          }
          else if (hashCode == aws_kms_HASH)
          {
            return SSEAlgorithm::aws_kms;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SSEAlgorithm>(hashCode);
          }

          return SSEAlgorithm::NOT_SET;
        }

        Aws::String GetNameForSSEAlgorithm(SSEAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case SSEAlgorithm::NOT_SET:
            return {};
          case SSEAlgorithm::AES256:
            return "AES256";
          case SSEAlgorithm::aws_kms:
            return "aws:kms";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SSEAlgorithmMapper
    } // namespace Model
  } // namespace S3Tables
} // namespace Aws
