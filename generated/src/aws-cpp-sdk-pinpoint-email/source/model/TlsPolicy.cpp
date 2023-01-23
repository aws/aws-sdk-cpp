/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/TlsPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointEmail
  {
    namespace Model
    {
      namespace TlsPolicyMapper
      {

        static const int REQUIRE_HASH = HashingUtils::HashString("REQUIRE");
        static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");


        TlsPolicy GetTlsPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUIRE_HASH)
          {
            return TlsPolicy::REQUIRE;
          }
          else if (hashCode == OPTIONAL_HASH)
          {
            return TlsPolicy::OPTIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TlsPolicy>(hashCode);
          }

          return TlsPolicy::NOT_SET;
        }

        Aws::String GetNameForTlsPolicy(TlsPolicy enumValue)
        {
          switch(enumValue)
          {
          case TlsPolicy::REQUIRE:
            return "REQUIRE";
          case TlsPolicy::OPTIONAL:
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

      } // namespace TlsPolicyMapper
    } // namespace Model
  } // namespace PinpointEmail
} // namespace Aws
