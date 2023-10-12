/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/OperationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace OperationStatusMapper
      {

        static constexpr uint32_t SUBMITTED_HASH = ConstExprHashingUtils::HashString("SUBMITTED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t FAIL_HASH = ConstExprHashingUtils::HashString("FAIL");


        OperationStatus GetOperationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return OperationStatus::SUBMITTED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return OperationStatus::PENDING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return OperationStatus::SUCCESS;
          }
          else if (hashCode == FAIL_HASH)
          {
            return OperationStatus::FAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationStatus>(hashCode);
          }

          return OperationStatus::NOT_SET;
        }

        Aws::String GetNameForOperationStatus(OperationStatus enumValue)
        {
          switch(enumValue)
          {
          case OperationStatus::NOT_SET:
            return {};
          case OperationStatus::SUBMITTED:
            return "SUBMITTED";
          case OperationStatus::PENDING:
            return "PENDING";
          case OperationStatus::SUCCESS:
            return "SUCCESS";
          case OperationStatus::FAIL:
            return "FAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationStatusMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
