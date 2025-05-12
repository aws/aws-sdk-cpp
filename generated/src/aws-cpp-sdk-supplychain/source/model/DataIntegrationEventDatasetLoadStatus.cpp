/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationEventDatasetLoadStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SupplyChain
  {
    namespace Model
    {
      namespace DataIntegrationEventDatasetLoadStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DataIntegrationEventDatasetLoadStatus GetDataIntegrationEventDatasetLoadStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return DataIntegrationEventDatasetLoadStatus::SUCCEEDED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return DataIntegrationEventDatasetLoadStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DataIntegrationEventDatasetLoadStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIntegrationEventDatasetLoadStatus>(hashCode);
          }

          return DataIntegrationEventDatasetLoadStatus::NOT_SET;
        }

        Aws::String GetNameForDataIntegrationEventDatasetLoadStatus(DataIntegrationEventDatasetLoadStatus enumValue)
        {
          switch(enumValue)
          {
          case DataIntegrationEventDatasetLoadStatus::NOT_SET:
            return {};
          case DataIntegrationEventDatasetLoadStatus::SUCCEEDED:
            return "SUCCEEDED";
          case DataIntegrationEventDatasetLoadStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DataIntegrationEventDatasetLoadStatus::FAILED:
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

      } // namespace DataIntegrationEventDatasetLoadStatusMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
