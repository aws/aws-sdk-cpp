/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/HttpsPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace HttpsPolicyMapper
      {

        static const int REQUIRE_HASH = HashingUtils::HashString("REQUIRE");
        static const int REQUIRE_OPEN_ONLY_HASH = HashingUtils::HashString("REQUIRE_OPEN_ONLY");
        static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");


        HttpsPolicy GetHttpsPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUIRE_HASH)
          {
            return HttpsPolicy::REQUIRE;
          }
          else if (hashCode == REQUIRE_OPEN_ONLY_HASH)
          {
            return HttpsPolicy::REQUIRE_OPEN_ONLY;
          }
          else if (hashCode == OPTIONAL_HASH)
          {
            return HttpsPolicy::OPTIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpsPolicy>(hashCode);
          }

          return HttpsPolicy::NOT_SET;
        }

        Aws::String GetNameForHttpsPolicy(HttpsPolicy enumValue)
        {
          switch(enumValue)
          {
          case HttpsPolicy::NOT_SET:
            return {};
          case HttpsPolicy::REQUIRE:
            return "REQUIRE";
          case HttpsPolicy::REQUIRE_OPEN_ONLY:
            return "REQUIRE_OPEN_ONLY";
          case HttpsPolicy::OPTIONAL:
            return "OPTIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HttpsPolicyMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
