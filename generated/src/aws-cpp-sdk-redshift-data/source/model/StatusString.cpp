/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/StatusString.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RedshiftDataAPIService
  {
    namespace Model
    {
      namespace StatusStringMapper
      {

        static constexpr uint32_t SUBMITTED_HASH = ConstExprHashingUtils::HashString("SUBMITTED");
        static constexpr uint32_t PICKED_HASH = ConstExprHashingUtils::HashString("PICKED");
        static constexpr uint32_t STARTED_HASH = ConstExprHashingUtils::HashString("STARTED");
        static constexpr uint32_t FINISHED_HASH = ConstExprHashingUtils::HashString("FINISHED");
        static constexpr uint32_t ABORTED_HASH = ConstExprHashingUtils::HashString("ABORTED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        StatusString GetStatusStringForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return StatusString::SUBMITTED;
          }
          else if (hashCode == PICKED_HASH)
          {
            return StatusString::PICKED;
          }
          else if (hashCode == STARTED_HASH)
          {
            return StatusString::STARTED;
          }
          else if (hashCode == FINISHED_HASH)
          {
            return StatusString::FINISHED;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return StatusString::ABORTED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StatusString::FAILED;
          }
          else if (hashCode == ALL_HASH)
          {
            return StatusString::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusString>(hashCode);
          }

          return StatusString::NOT_SET;
        }

        Aws::String GetNameForStatusString(StatusString enumValue)
        {
          switch(enumValue)
          {
          case StatusString::NOT_SET:
            return {};
          case StatusString::SUBMITTED:
            return "SUBMITTED";
          case StatusString::PICKED:
            return "PICKED";
          case StatusString::STARTED:
            return "STARTED";
          case StatusString::FINISHED:
            return "FINISHED";
          case StatusString::ABORTED:
            return "ABORTED";
          case StatusString::FAILED:
            return "FAILED";
          case StatusString::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusStringMapper
    } // namespace Model
  } // namespace RedshiftDataAPIService
} // namespace Aws
