/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DedicatedTenancyModificationStateEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace DedicatedTenancyModificationStateEnumMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        DedicatedTenancyModificationStateEnum GetDedicatedTenancyModificationStateEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return DedicatedTenancyModificationStateEnum::PENDING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return DedicatedTenancyModificationStateEnum::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DedicatedTenancyModificationStateEnum::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DedicatedTenancyModificationStateEnum>(hashCode);
          }

          return DedicatedTenancyModificationStateEnum::NOT_SET;
        }

        Aws::String GetNameForDedicatedTenancyModificationStateEnum(DedicatedTenancyModificationStateEnum enumValue)
        {
          switch(enumValue)
          {
          case DedicatedTenancyModificationStateEnum::NOT_SET:
            return {};
          case DedicatedTenancyModificationStateEnum::PENDING:
            return "PENDING";
          case DedicatedTenancyModificationStateEnum::COMPLETED:
            return "COMPLETED";
          case DedicatedTenancyModificationStateEnum::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DedicatedTenancyModificationStateEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
