/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/TemplateFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace TemplateFormatMapper
      {

        static const int CfnYaml_HASH = HashingUtils::HashString("CfnYaml");
        static const int CfnJson_HASH = HashingUtils::HashString("CfnJson");


        TemplateFormat GetTemplateFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CfnYaml_HASH)
          {
            return TemplateFormat::CfnYaml;
          }
          else if (hashCode == CfnJson_HASH)
          {
            return TemplateFormat::CfnJson;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateFormat>(hashCode);
          }

          return TemplateFormat::NOT_SET;
        }

        Aws::String GetNameForTemplateFormat(TemplateFormat enumValue)
        {
          switch(enumValue)
          {
          case TemplateFormat::NOT_SET:
            return {};
          case TemplateFormat::CfnYaml:
            return "CfnYaml";
          case TemplateFormat::CfnJson:
            return "CfnJson";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemplateFormatMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
