/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ServiceActionDefinitionType.h>
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
      namespace ServiceActionDefinitionTypeMapper
      {

        static const int SSM_AUTOMATION_HASH = HashingUtils::HashString("SSM_AUTOMATION");


        ServiceActionDefinitionType GetServiceActionDefinitionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSM_AUTOMATION_HASH)
          {
            return ServiceActionDefinitionType::SSM_AUTOMATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceActionDefinitionType>(hashCode);
          }

          return ServiceActionDefinitionType::NOT_SET;
        }

        Aws::String GetNameForServiceActionDefinitionType(ServiceActionDefinitionType enumValue)
        {
          switch(enumValue)
          {
          case ServiceActionDefinitionType::SSM_AUTOMATION:
            return "SSM_AUTOMATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceActionDefinitionTypeMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
