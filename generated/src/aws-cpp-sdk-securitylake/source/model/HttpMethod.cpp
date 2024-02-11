/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/HttpMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace HttpMethodMapper
      {

        static const int POST_HASH = HashingUtils::HashString("POST");
        static const int PUT_HASH = HashingUtils::HashString("PUT");


        HttpMethod GetHttpMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POST_HASH)
          {
            return HttpMethod::POST;
          }
          else if (hashCode == PUT_HASH)
          {
            return HttpMethod::PUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpMethod>(hashCode);
          }

          return HttpMethod::NOT_SET;
        }

        Aws::String GetNameForHttpMethod(HttpMethod enumValue)
        {
          switch(enumValue)
          {
          case HttpMethod::NOT_SET:
            return {};
          case HttpMethod::POST:
            return "POST";
          case HttpMethod::PUT:
            return "PUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HttpMethodMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
