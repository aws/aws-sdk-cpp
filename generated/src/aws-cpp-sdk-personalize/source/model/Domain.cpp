/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/Domain.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Personalize
  {
    namespace Model
    {
      namespace DomainMapper
      {

        static const int ECOMMERCE_HASH = HashingUtils::HashString("ECOMMERCE");
        static const int VIDEO_ON_DEMAND_HASH = HashingUtils::HashString("VIDEO_ON_DEMAND");


        Domain GetDomainForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ECOMMERCE_HASH)
          {
            return Domain::ECOMMERCE;
          }
          else if (hashCode == VIDEO_ON_DEMAND_HASH)
          {
            return Domain::VIDEO_ON_DEMAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Domain>(hashCode);
          }

          return Domain::NOT_SET;
        }

        Aws::String GetNameForDomain(Domain enumValue)
        {
          switch(enumValue)
          {
          case Domain::NOT_SET:
            return {};
          case Domain::ECOMMERCE:
            return "ECOMMERCE";
          case Domain::VIDEO_ON_DEMAND:
            return "VIDEO_ON_DEMAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainMapper
    } // namespace Model
  } // namespace Personalize
} // namespace Aws
