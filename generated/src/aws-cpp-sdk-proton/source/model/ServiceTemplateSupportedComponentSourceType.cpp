/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ServiceTemplateSupportedComponentSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Proton
  {
    namespace Model
    {
      namespace ServiceTemplateSupportedComponentSourceTypeMapper
      {

        static const int DIRECTLY_DEFINED_HASH = HashingUtils::HashString("DIRECTLY_DEFINED");


        ServiceTemplateSupportedComponentSourceType GetServiceTemplateSupportedComponentSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIRECTLY_DEFINED_HASH)
          {
            return ServiceTemplateSupportedComponentSourceType::DIRECTLY_DEFINED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceTemplateSupportedComponentSourceType>(hashCode);
          }

          return ServiceTemplateSupportedComponentSourceType::NOT_SET;
        }

        Aws::String GetNameForServiceTemplateSupportedComponentSourceType(ServiceTemplateSupportedComponentSourceType enumValue)
        {
          switch(enumValue)
          {
          case ServiceTemplateSupportedComponentSourceType::NOT_SET:
            return {};
          case ServiceTemplateSupportedComponentSourceType::DIRECTLY_DEFINED:
            return "DIRECTLY_DEFINED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceTemplateSupportedComponentSourceTypeMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
