/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/HttpMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubRefactorSpaces
  {
    namespace Model
    {
      namespace HttpMethodMapper
      {

        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");
        static constexpr uint32_t GET__HASH = ConstExprHashingUtils::HashString("GET");
        static constexpr uint32_t HEAD_HASH = ConstExprHashingUtils::HashString("HEAD");
        static constexpr uint32_t OPTIONS_HASH = ConstExprHashingUtils::HashString("OPTIONS");
        static constexpr uint32_t PATCH_HASH = ConstExprHashingUtils::HashString("PATCH");
        static constexpr uint32_t POST_HASH = ConstExprHashingUtils::HashString("POST");
        static constexpr uint32_t PUT_HASH = ConstExprHashingUtils::HashString("PUT");


        HttpMethod GetHttpMethodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE__HASH)
          {
            return HttpMethod::DELETE_;
          }
          else if (hashCode == GET__HASH)
          {
            return HttpMethod::GET_;
          }
          else if (hashCode == HEAD_HASH)
          {
            return HttpMethod::HEAD;
          }
          else if (hashCode == OPTIONS_HASH)
          {
            return HttpMethod::OPTIONS;
          }
          else if (hashCode == PATCH_HASH)
          {
            return HttpMethod::PATCH;
          }
          else if (hashCode == POST_HASH)
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
          case HttpMethod::DELETE_:
            return "DELETE";
          case HttpMethod::GET_:
            return "GET";
          case HttpMethod::HEAD:
            return "HEAD";
          case HttpMethod::OPTIONS:
            return "OPTIONS";
          case HttpMethod::PATCH:
            return "PATCH";
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
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws
