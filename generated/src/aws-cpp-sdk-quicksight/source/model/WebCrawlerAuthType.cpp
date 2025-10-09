/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WebCrawlerAuthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace WebCrawlerAuthTypeMapper
      {

        static const int NO_AUTH_HASH = HashingUtils::HashString("NO_AUTH");
        static const int BASIC_AUTH_HASH = HashingUtils::HashString("BASIC_AUTH");
        static const int FORM_HASH = HashingUtils::HashString("FORM");
        static const int SAML_HASH = HashingUtils::HashString("SAML");


        WebCrawlerAuthType GetWebCrawlerAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_AUTH_HASH)
          {
            return WebCrawlerAuthType::NO_AUTH;
          }
          else if (hashCode == BASIC_AUTH_HASH)
          {
            return WebCrawlerAuthType::BASIC_AUTH;
          }
          else if (hashCode == FORM_HASH)
          {
            return WebCrawlerAuthType::FORM;
          }
          else if (hashCode == SAML_HASH)
          {
            return WebCrawlerAuthType::SAML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebCrawlerAuthType>(hashCode);
          }

          return WebCrawlerAuthType::NOT_SET;
        }

        Aws::String GetNameForWebCrawlerAuthType(WebCrawlerAuthType enumValue)
        {
          switch(enumValue)
          {
          case WebCrawlerAuthType::NOT_SET:
            return {};
          case WebCrawlerAuthType::NO_AUTH:
            return "NO_AUTH";
          case WebCrawlerAuthType::BASIC_AUTH:
            return "BASIC_AUTH";
          case WebCrawlerAuthType::FORM:
            return "FORM";
          case WebCrawlerAuthType::SAML:
            return "SAML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebCrawlerAuthTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
