/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/AccessorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace AccessorStatusMapper
      {

        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t PENDING_DELETION_HASH = ConstExprHashingUtils::HashString("PENDING_DELETION");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        AccessorStatus GetAccessorStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return AccessorStatus::AVAILABLE;
          }
          else if (hashCode == PENDING_DELETION_HASH)
          {
            return AccessorStatus::PENDING_DELETION;
          }
          else if (hashCode == DELETED_HASH)
          {
            return AccessorStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessorStatus>(hashCode);
          }

          return AccessorStatus::NOT_SET;
        }

        Aws::String GetNameForAccessorStatus(AccessorStatus enumValue)
        {
          switch(enumValue)
          {
          case AccessorStatus::NOT_SET:
            return {};
          case AccessorStatus::AVAILABLE:
            return "AVAILABLE";
          case AccessorStatus::PENDING_DELETION:
            return "PENDING_DELETION";
          case AccessorStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessorStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
