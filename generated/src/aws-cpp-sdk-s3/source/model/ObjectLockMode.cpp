/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/ObjectLockMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3
  {
    namespace Model
    {
      namespace ObjectLockModeMapper
      {

        static constexpr uint32_t GOVERNANCE_HASH = ConstExprHashingUtils::HashString("GOVERNANCE");
        static constexpr uint32_t COMPLIANCE_HASH = ConstExprHashingUtils::HashString("COMPLIANCE");


        ObjectLockMode GetObjectLockModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GOVERNANCE_HASH)
          {
            return ObjectLockMode::GOVERNANCE;
          }
          else if (hashCode == COMPLIANCE_HASH)
          {
            return ObjectLockMode::COMPLIANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectLockMode>(hashCode);
          }

          return ObjectLockMode::NOT_SET;
        }

        Aws::String GetNameForObjectLockMode(ObjectLockMode enumValue)
        {
          switch(enumValue)
          {
          case ObjectLockMode::NOT_SET:
            return {};
          case ObjectLockMode::GOVERNANCE:
            return "GOVERNANCE";
          case ObjectLockMode::COMPLIANCE:
            return "COMPLIANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectLockModeMapper
    } // namespace Model
  } // namespace S3
} // namespace Aws
