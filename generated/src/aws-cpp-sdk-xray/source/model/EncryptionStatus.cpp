/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/EncryptionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace XRay
  {
    namespace Model
    {
      namespace EncryptionStatusMapper
      {

        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");


        EncryptionStatus GetEncryptionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATING_HASH)
          {
            return EncryptionStatus::UPDATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return EncryptionStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionStatus>(hashCode);
          }

          return EncryptionStatus::NOT_SET;
        }

        Aws::String GetNameForEncryptionStatus(EncryptionStatus enumValue)
        {
          switch(enumValue)
          {
          case EncryptionStatus::NOT_SET:
            return {};
          case EncryptionStatus::UPDATING:
            return "UPDATING";
          case EncryptionStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionStatusMapper
    } // namespace Model
  } // namespace XRay
} // namespace Aws
