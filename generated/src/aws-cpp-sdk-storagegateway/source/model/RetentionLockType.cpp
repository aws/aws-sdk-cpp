/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/RetentionLockType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace RetentionLockTypeMapper
      {

        static const int COMPLIANCE_HASH = HashingUtils::HashString("COMPLIANCE");
        static const int GOVERNANCE_HASH = HashingUtils::HashString("GOVERNANCE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        RetentionLockType GetRetentionLockTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLIANCE_HASH)
          {
            return RetentionLockType::COMPLIANCE;
          }
          else if (hashCode == GOVERNANCE_HASH)
          {
            return RetentionLockType::GOVERNANCE;
          }
          else if (hashCode == NONE_HASH)
          {
            return RetentionLockType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetentionLockType>(hashCode);
          }

          return RetentionLockType::NOT_SET;
        }

        Aws::String GetNameForRetentionLockType(RetentionLockType enumValue)
        {
          switch(enumValue)
          {
          case RetentionLockType::COMPLIANCE:
            return "COMPLIANCE";
          case RetentionLockType::GOVERNANCE:
            return "GOVERNANCE";
          case RetentionLockType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetentionLockTypeMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
