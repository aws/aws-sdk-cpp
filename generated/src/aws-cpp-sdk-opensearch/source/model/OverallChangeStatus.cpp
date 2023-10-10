/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/OverallChangeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace OverallChangeStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        OverallChangeStatus GetOverallChangeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return OverallChangeStatus::PENDING;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return OverallChangeStatus::PROCESSING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return OverallChangeStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return OverallChangeStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OverallChangeStatus>(hashCode);
          }

          return OverallChangeStatus::NOT_SET;
        }

        Aws::String GetNameForOverallChangeStatus(OverallChangeStatus enumValue)
        {
          switch(enumValue)
          {
          case OverallChangeStatus::NOT_SET:
            return {};
          case OverallChangeStatus::PENDING:
            return "PENDING";
          case OverallChangeStatus::PROCESSING:
            return "PROCESSING";
          case OverallChangeStatus::COMPLETED:
            return "COMPLETED";
          case OverallChangeStatus::FAILED:
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

      } // namespace OverallChangeStatusMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
