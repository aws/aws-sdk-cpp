/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationEventDatasetOperationType.h>
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
      namespace DataIntegrationEventDatasetOperationTypeMapper
      {

        static const int APPEND_HASH = HashingUtils::HashString("APPEND");
        static const int UPSERT_HASH = HashingUtils::HashString("UPSERT");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        DataIntegrationEventDatasetOperationType GetDataIntegrationEventDatasetOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPEND_HASH)
          {
            return DataIntegrationEventDatasetOperationType::APPEND;
          }
          else if (hashCode == UPSERT_HASH)
          {
            return DataIntegrationEventDatasetOperationType::UPSERT;
          }
          else if (hashCode == DELETE__HASH)
          {
            return DataIntegrationEventDatasetOperationType::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIntegrationEventDatasetOperationType>(hashCode);
          }

          return DataIntegrationEventDatasetOperationType::NOT_SET;
        }

        Aws::String GetNameForDataIntegrationEventDatasetOperationType(DataIntegrationEventDatasetOperationType enumValue)
        {
          switch(enumValue)
          {
          case DataIntegrationEventDatasetOperationType::NOT_SET:
            return {};
          case DataIntegrationEventDatasetOperationType::APPEND:
            return "APPEND";
          case DataIntegrationEventDatasetOperationType::UPSERT:
            return "UPSERT";
          case DataIntegrationEventDatasetOperationType::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataIntegrationEventDatasetOperationTypeMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
