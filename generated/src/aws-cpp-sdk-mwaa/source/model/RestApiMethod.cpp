/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/RestApiMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MWAA
  {
    namespace Model
    {
      namespace RestApiMethodMapper
      {

        static const int GET__HASH = HashingUtils::HashString("GET");
        static const int PUT_HASH = HashingUtils::HashString("PUT");
        static const int POST_HASH = HashingUtils::HashString("POST");
        static const int PATCH_HASH = HashingUtils::HashString("PATCH");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        RestApiMethod GetRestApiMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GET__HASH)
          {
            return RestApiMethod::GET_;
          }
          else if (hashCode == PUT_HASH)
          {
            return RestApiMethod::PUT;
          }
          else if (hashCode == POST_HASH)
          {
            return RestApiMethod::POST;
          }
          else if (hashCode == PATCH_HASH)
          {
            return RestApiMethod::PATCH;
          }
          else if (hashCode == DELETE__HASH)
          {
            return RestApiMethod::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RestApiMethod>(hashCode);
          }

          return RestApiMethod::NOT_SET;
        }

        Aws::String GetNameForRestApiMethod(RestApiMethod enumValue)
        {
          switch(enumValue)
          {
          case RestApiMethod::NOT_SET:
            return {};
          case RestApiMethod::GET_:
            return "GET";
          case RestApiMethod::PUT:
            return "PUT";
          case RestApiMethod::POST:
            return "POST";
          case RestApiMethod::PATCH:
            return "PATCH";
          case RestApiMethod::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RestApiMethodMapper
    } // namespace Model
  } // namespace MWAA
} // namespace Aws
