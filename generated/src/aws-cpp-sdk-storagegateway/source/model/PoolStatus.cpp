/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/PoolStatus.h>
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
      namespace PoolStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        PoolStatus GetPoolStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return PoolStatus::ACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return PoolStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PoolStatus>(hashCode);
          }

          return PoolStatus::NOT_SET;
        }

        Aws::String GetNameForPoolStatus(PoolStatus enumValue)
        {
          switch(enumValue)
          {
          case PoolStatus::NOT_SET:
            return {};
          case PoolStatus::ACTIVE:
            return "ACTIVE";
          case PoolStatus::DELETED:
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

      } // namespace PoolStatusMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
