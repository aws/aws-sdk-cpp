/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ComponentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace ComponentTypeMapper
      {

        static constexpr uint32_t HANA_HASH = ConstExprHashingUtils::HashString("HANA");
        static constexpr uint32_t HANA_NODE_HASH = ConstExprHashingUtils::HashString("HANA_NODE");


        ComponentType GetComponentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HANA_HASH)
          {
            return ComponentType::HANA;
          }
          else if (hashCode == HANA_NODE_HASH)
          {
            return ComponentType::HANA_NODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComponentType>(hashCode);
          }

          return ComponentType::NOT_SET;
        }

        Aws::String GetNameForComponentType(ComponentType enumValue)
        {
          switch(enumValue)
          {
          case ComponentType::NOT_SET:
            return {};
          case ComponentType::HANA:
            return "HANA";
          case ComponentType::HANA_NODE:
            return "HANA_NODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComponentTypeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
