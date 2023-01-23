/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/HttpsMethod.h>
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
      namespace HttpsMethodMapper
      {

        static const int POST_HASH = HashingUtils::HashString("POST");
        static const int PUT_HASH = HashingUtils::HashString("PUT");


        HttpsMethod GetHttpsMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POST_HASH)
          {
            return HttpsMethod::POST;
          }
          else if (hashCode == PUT_HASH)
          {
            return HttpsMethod::PUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpsMethod>(hashCode);
          }

          return HttpsMethod::NOT_SET;
        }

        Aws::String GetNameForHttpsMethod(HttpsMethod enumValue)
        {
          switch(enumValue)
          {
          case HttpsMethod::POST:
            return "POST";
          case HttpsMethod::PUT:
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

      } // namespace HttpsMethodMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
