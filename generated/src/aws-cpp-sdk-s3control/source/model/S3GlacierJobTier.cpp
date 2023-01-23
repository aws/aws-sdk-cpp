/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3GlacierJobTier.h>
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
      namespace S3GlacierJobTierMapper
      {

        static const int BULK_HASH = HashingUtils::HashString("BULK");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        S3GlacierJobTier GetS3GlacierJobTierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BULK_HASH)
          {
            return S3GlacierJobTier::BULK;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return S3GlacierJobTier::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3GlacierJobTier>(hashCode);
          }

          return S3GlacierJobTier::NOT_SET;
        }

        Aws::String GetNameForS3GlacierJobTier(S3GlacierJobTier enumValue)
        {
          switch(enumValue)
          {
          case S3GlacierJobTier::BULK:
            return "BULK";
          case S3GlacierJobTier::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3GlacierJobTierMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
