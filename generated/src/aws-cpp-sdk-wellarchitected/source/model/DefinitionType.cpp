/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/DefinitionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace DefinitionTypeMapper
      {

        static constexpr uint32_t WORKLOAD_METADATA_HASH = ConstExprHashingUtils::HashString("WORKLOAD_METADATA");
        static constexpr uint32_t APP_REGISTRY_HASH = ConstExprHashingUtils::HashString("APP_REGISTRY");


        DefinitionType GetDefinitionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WORKLOAD_METADATA_HASH)
          {
            return DefinitionType::WORKLOAD_METADATA;
          }
          else if (hashCode == APP_REGISTRY_HASH)
          {
            return DefinitionType::APP_REGISTRY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefinitionType>(hashCode);
          }

          return DefinitionType::NOT_SET;
        }

        Aws::String GetNameForDefinitionType(DefinitionType enumValue)
        {
          switch(enumValue)
          {
          case DefinitionType::NOT_SET:
            return {};
          case DefinitionType::WORKLOAD_METADATA:
            return "WORKLOAD_METADATA";
          case DefinitionType::APP_REGISTRY:
            return "APP_REGISTRY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefinitionTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
