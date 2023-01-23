/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3ObjectLockMode.h>
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
      namespace S3ObjectLockModeMapper
      {

        static const int COMPLIANCE_HASH = HashingUtils::HashString("COMPLIANCE");
        static const int GOVERNANCE_HASH = HashingUtils::HashString("GOVERNANCE");


        S3ObjectLockMode GetS3ObjectLockModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLIANCE_HASH)
          {
            return S3ObjectLockMode::COMPLIANCE;
          }
          else if (hashCode == GOVERNANCE_HASH)
          {
            return S3ObjectLockMode::GOVERNANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3ObjectLockMode>(hashCode);
          }

          return S3ObjectLockMode::NOT_SET;
        }

        Aws::String GetNameForS3ObjectLockMode(S3ObjectLockMode enumValue)
        {
          switch(enumValue)
          {
          case S3ObjectLockMode::COMPLIANCE:
            return "COMPLIANCE";
          case S3ObjectLockMode::GOVERNANCE:
            return "GOVERNANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3ObjectLockModeMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
