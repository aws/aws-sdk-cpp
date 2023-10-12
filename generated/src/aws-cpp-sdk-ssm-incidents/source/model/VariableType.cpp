/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/VariableType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMIncidents
  {
    namespace Model
    {
      namespace VariableTypeMapper
      {

        static constexpr uint32_t INCIDENT_RECORD_ARN_HASH = ConstExprHashingUtils::HashString("INCIDENT_RECORD_ARN");
        static constexpr uint32_t INVOLVED_RESOURCES_HASH = ConstExprHashingUtils::HashString("INVOLVED_RESOURCES");


        VariableType GetVariableTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCIDENT_RECORD_ARN_HASH)
          {
            return VariableType::INCIDENT_RECORD_ARN;
          }
          else if (hashCode == INVOLVED_RESOURCES_HASH)
          {
            return VariableType::INVOLVED_RESOURCES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VariableType>(hashCode);
          }

          return VariableType::NOT_SET;
        }

        Aws::String GetNameForVariableType(VariableType enumValue)
        {
          switch(enumValue)
          {
          case VariableType::NOT_SET:
            return {};
          case VariableType::INCIDENT_RECORD_ARN:
            return "INCIDENT_RECORD_ARN";
          case VariableType::INVOLVED_RESOURCES:
            return "INVOLVED_RESOURCES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VariableTypeMapper
    } // namespace Model
  } // namespace SSMIncidents
} // namespace Aws
