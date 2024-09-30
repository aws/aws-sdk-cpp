/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowTransformationType.h>
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
      namespace DataIntegrationFlowTransformationTypeMapper
      {

        static const int SQL_HASH = HashingUtils::HashString("SQL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        DataIntegrationFlowTransformationType GetDataIntegrationFlowTransformationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SQL_HASH)
          {
            return DataIntegrationFlowTransformationType::SQL;
          }
          else if (hashCode == NONE_HASH)
          {
            return DataIntegrationFlowTransformationType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIntegrationFlowTransformationType>(hashCode);
          }

          return DataIntegrationFlowTransformationType::NOT_SET;
        }

        Aws::String GetNameForDataIntegrationFlowTransformationType(DataIntegrationFlowTransformationType enumValue)
        {
          switch(enumValue)
          {
          case DataIntegrationFlowTransformationType::NOT_SET:
            return {};
          case DataIntegrationFlowTransformationType::SQL:
            return "SQL";
          case DataIntegrationFlowTransformationType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataIntegrationFlowTransformationTypeMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
