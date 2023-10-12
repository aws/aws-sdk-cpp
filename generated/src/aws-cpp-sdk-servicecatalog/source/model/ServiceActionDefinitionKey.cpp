/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ServiceActionDefinitionKey.h>
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
      namespace ServiceActionDefinitionKeyMapper
      {

        static constexpr uint32_t Name_HASH = ConstExprHashingUtils::HashString("Name");
        static constexpr uint32_t Version_HASH = ConstExprHashingUtils::HashString("Version");
        static constexpr uint32_t AssumeRole_HASH = ConstExprHashingUtils::HashString("AssumeRole");
        static constexpr uint32_t Parameters_HASH = ConstExprHashingUtils::HashString("Parameters");


        ServiceActionDefinitionKey GetServiceActionDefinitionKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ServiceActionDefinitionKey::Name;
          }
          else if (hashCode == Version_HASH)
          {
            return ServiceActionDefinitionKey::Version;
          }
          else if (hashCode == AssumeRole_HASH)
          {
            return ServiceActionDefinitionKey::AssumeRole;
          }
          else if (hashCode == Parameters_HASH)
          {
            return ServiceActionDefinitionKey::Parameters;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceActionDefinitionKey>(hashCode);
          }

          return ServiceActionDefinitionKey::NOT_SET;
        }

        Aws::String GetNameForServiceActionDefinitionKey(ServiceActionDefinitionKey enumValue)
        {
          switch(enumValue)
          {
          case ServiceActionDefinitionKey::NOT_SET:
            return {};
          case ServiceActionDefinitionKey::Name:
            return "Name";
          case ServiceActionDefinitionKey::Version:
            return "Version";
          case ServiceActionDefinitionKey::AssumeRole:
            return "AssumeRole";
          case ServiceActionDefinitionKey::Parameters:
            return "Parameters";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceActionDefinitionKeyMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
