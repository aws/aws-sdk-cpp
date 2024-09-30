/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowLoadType.h>
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
      namespace DataIntegrationFlowLoadTypeMapper
      {

        static const int INCREMENTAL_HASH = HashingUtils::HashString("INCREMENTAL");
        static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");


        DataIntegrationFlowLoadType GetDataIntegrationFlowLoadTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCREMENTAL_HASH)
          {
            return DataIntegrationFlowLoadType::INCREMENTAL;
          }
          else if (hashCode == REPLACE_HASH)
          {
            return DataIntegrationFlowLoadType::REPLACE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIntegrationFlowLoadType>(hashCode);
          }

          return DataIntegrationFlowLoadType::NOT_SET;
        }

        Aws::String GetNameForDataIntegrationFlowLoadType(DataIntegrationFlowLoadType enumValue)
        {
          switch(enumValue)
          {
          case DataIntegrationFlowLoadType::NOT_SET:
            return {};
          case DataIntegrationFlowLoadType::INCREMENTAL:
            return "INCREMENTAL";
          case DataIntegrationFlowLoadType::REPLACE:
            return "REPLACE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataIntegrationFlowLoadTypeMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
