/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/RecordStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace RecordStatusMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t IN_PROGRESS_IN_ERROR_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS_IN_ERROR");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        RecordStatus GetRecordStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return RecordStatus::CREATED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return RecordStatus::IN_PROGRESS;
          }
          else if (hashCode == IN_PROGRESS_IN_ERROR_HASH)
          {
            return RecordStatus::IN_PROGRESS_IN_ERROR;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return RecordStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RecordStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordStatus>(hashCode);
          }

          return RecordStatus::NOT_SET;
        }

        Aws::String GetNameForRecordStatus(RecordStatus enumValue)
        {
          switch(enumValue)
          {
          case RecordStatus::NOT_SET:
            return {};
          case RecordStatus::CREATED:
            return "CREATED";
          case RecordStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case RecordStatus::IN_PROGRESS_IN_ERROR:
            return "IN_PROGRESS_IN_ERROR";
          case RecordStatus::SUCCEEDED:
            return "SUCCEEDED";
          case RecordStatus::FAILED:
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

      } // namespace RecordStatusMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
