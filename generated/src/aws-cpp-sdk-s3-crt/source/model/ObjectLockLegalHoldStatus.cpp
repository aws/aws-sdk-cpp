/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/ObjectLockLegalHoldStatus.h>
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
      namespace ObjectLockLegalHoldStatusMapper
      {

        static constexpr uint32_t ON_HASH = ConstExprHashingUtils::HashString("ON");
        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");


        ObjectLockLegalHoldStatus GetObjectLockLegalHoldStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_HASH)
          {
            return ObjectLockLegalHoldStatus::ON;
          }
          else if (hashCode == OFF_HASH)
          {
            return ObjectLockLegalHoldStatus::OFF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectLockLegalHoldStatus>(hashCode);
          }

          return ObjectLockLegalHoldStatus::NOT_SET;
        }

        Aws::String GetNameForObjectLockLegalHoldStatus(ObjectLockLegalHoldStatus enumValue)
        {
          switch(enumValue)
          {
          case ObjectLockLegalHoldStatus::NOT_SET:
            return {};
          case ObjectLockLegalHoldStatus::ON:
            return "ON";
          case ObjectLockLegalHoldStatus::OFF:
            return "OFF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectLockLegalHoldStatusMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
