/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/Scope.h>
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
      namespace ScopeMapper
      {

        static const int CLOUDFRONT_HASH = HashingUtils::HashString("CLOUDFRONT");
        static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");


        Scope GetScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDFRONT_HASH)
          {
            return Scope::CLOUDFRONT;
          }
          else if (hashCode == REGIONAL_HASH)
          {
            return Scope::REGIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scope>(hashCode);
          }

          return Scope::NOT_SET;
        }

        Aws::String GetNameForScope(Scope enumValue)
        {
          switch(enumValue)
          {
          case Scope::CLOUDFRONT:
            return "CLOUDFRONT";
          case Scope::REGIONAL:
            return "REGIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScopeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
