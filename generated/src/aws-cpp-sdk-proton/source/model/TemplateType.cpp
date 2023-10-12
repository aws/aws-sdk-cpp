/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/TemplateType.h>
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
      namespace TemplateTypeMapper
      {

        static constexpr uint32_t ENVIRONMENT_HASH = ConstExprHashingUtils::HashString("ENVIRONMENT");
        static constexpr uint32_t SERVICE_HASH = ConstExprHashingUtils::HashString("SERVICE");


        TemplateType GetTemplateTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENVIRONMENT_HASH)
          {
            return TemplateType::ENVIRONMENT;
          }
          else if (hashCode == SERVICE_HASH)
          {
            return TemplateType::SERVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateType>(hashCode);
          }

          return TemplateType::NOT_SET;
        }

        Aws::String GetNameForTemplateType(TemplateType enumValue)
        {
          switch(enumValue)
          {
          case TemplateType::NOT_SET:
            return {};
          case TemplateType::ENVIRONMENT:
            return "ENVIRONMENT";
          case TemplateType::SERVICE:
            return "SERVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemplateTypeMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
