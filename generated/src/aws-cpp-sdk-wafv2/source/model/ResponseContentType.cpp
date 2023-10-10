/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ResponseContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace ResponseContentTypeMapper
      {

        static const int TEXT_PLAIN_HASH = HashingUtils::HashString("TEXT_PLAIN");
        static const int TEXT_HTML_HASH = HashingUtils::HashString("TEXT_HTML");
        static const int APPLICATION_JSON_HASH = HashingUtils::HashString("APPLICATION_JSON");


        ResponseContentType GetResponseContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_PLAIN_HASH)
          {
            return ResponseContentType::TEXT_PLAIN;
          }
          else if (hashCode == TEXT_HTML_HASH)
          {
            return ResponseContentType::TEXT_HTML;
          }
          else if (hashCode == APPLICATION_JSON_HASH)
          {
            return ResponseContentType::APPLICATION_JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResponseContentType>(hashCode);
          }

          return ResponseContentType::NOT_SET;
        }

        Aws::String GetNameForResponseContentType(ResponseContentType enumValue)
        {
          switch(enumValue)
          {
          case ResponseContentType::NOT_SET:
            return {};
          case ResponseContentType::TEXT_PLAIN:
            return "TEXT_PLAIN";
          case ResponseContentType::TEXT_HTML:
            return "TEXT_HTML";
          case ResponseContentType::APPLICATION_JSON:
            return "APPLICATION_JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResponseContentTypeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
