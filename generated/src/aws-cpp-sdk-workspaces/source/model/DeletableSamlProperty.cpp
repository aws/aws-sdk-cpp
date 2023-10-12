/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DeletableSamlProperty.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace DeletableSamlPropertyMapper
      {

        static constexpr uint32_t SAML_PROPERTIES_USER_ACCESS_URL_HASH = ConstExprHashingUtils::HashString("SAML_PROPERTIES_USER_ACCESS_URL");
        static constexpr uint32_t SAML_PROPERTIES_RELAY_STATE_PARAMETER_NAME_HASH = ConstExprHashingUtils::HashString("SAML_PROPERTIES_RELAY_STATE_PARAMETER_NAME");


        DeletableSamlProperty GetDeletableSamlPropertyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAML_PROPERTIES_USER_ACCESS_URL_HASH)
          {
            return DeletableSamlProperty::SAML_PROPERTIES_USER_ACCESS_URL;
          }
          else if (hashCode == SAML_PROPERTIES_RELAY_STATE_PARAMETER_NAME_HASH)
          {
            return DeletableSamlProperty::SAML_PROPERTIES_RELAY_STATE_PARAMETER_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeletableSamlProperty>(hashCode);
          }

          return DeletableSamlProperty::NOT_SET;
        }

        Aws::String GetNameForDeletableSamlProperty(DeletableSamlProperty enumValue)
        {
          switch(enumValue)
          {
          case DeletableSamlProperty::NOT_SET:
            return {};
          case DeletableSamlProperty::SAML_PROPERTIES_USER_ACCESS_URL:
            return "SAML_PROPERTIES_USER_ACCESS_URL";
          case DeletableSamlProperty::SAML_PROPERTIES_RELAY_STATE_PARAMETER_NAME:
            return "SAML_PROPERTIES_RELAY_STATE_PARAMETER_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeletableSamlPropertyMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
