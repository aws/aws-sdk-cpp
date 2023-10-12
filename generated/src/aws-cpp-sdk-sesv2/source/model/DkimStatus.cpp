/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DkimStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace DkimStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t TEMPORARY_FAILURE_HASH = ConstExprHashingUtils::HashString("TEMPORARY_FAILURE");
        static constexpr uint32_t NOT_STARTED_HASH = ConstExprHashingUtils::HashString("NOT_STARTED");


        DkimStatus GetDkimStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return DkimStatus::PENDING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return DkimStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DkimStatus::FAILED;
          }
          else if (hashCode == TEMPORARY_FAILURE_HASH)
          {
            return DkimStatus::TEMPORARY_FAILURE;
          }
          else if (hashCode == NOT_STARTED_HASH)
          {
            return DkimStatus::NOT_STARTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DkimStatus>(hashCode);
          }

          return DkimStatus::NOT_SET;
        }

        Aws::String GetNameForDkimStatus(DkimStatus enumValue)
        {
          switch(enumValue)
          {
          case DkimStatus::NOT_SET:
            return {};
          case DkimStatus::PENDING:
            return "PENDING";
          case DkimStatus::SUCCESS:
            return "SUCCESS";
          case DkimStatus::FAILED:
            return "FAILED";
          case DkimStatus::TEMPORARY_FAILURE:
            return "TEMPORARY_FAILURE";
          case DkimStatus::NOT_STARTED:
            return "NOT_STARTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DkimStatusMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
