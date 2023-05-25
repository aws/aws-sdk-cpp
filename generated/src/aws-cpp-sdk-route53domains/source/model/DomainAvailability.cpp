/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/DomainAvailability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Domains
  {
    namespace Model
    {
      namespace DomainAvailabilityMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int AVAILABLE_RESERVED_HASH = HashingUtils::HashString("AVAILABLE_RESERVED");
        static const int AVAILABLE_PREORDER_HASH = HashingUtils::HashString("AVAILABLE_PREORDER");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");
        static const int UNAVAILABLE_PREMIUM_HASH = HashingUtils::HashString("UNAVAILABLE_PREMIUM");
        static const int UNAVAILABLE_RESTRICTED_HASH = HashingUtils::HashString("UNAVAILABLE_RESTRICTED");
        static const int RESERVED_HASH = HashingUtils::HashString("RESERVED");
        static const int DONT_KNOW_HASH = HashingUtils::HashString("DONT_KNOW");


        DomainAvailability GetDomainAvailabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return DomainAvailability::AVAILABLE;
          }
          else if (hashCode == AVAILABLE_RESERVED_HASH)
          {
            return DomainAvailability::AVAILABLE_RESERVED;
          }
          else if (hashCode == AVAILABLE_PREORDER_HASH)
          {
            return DomainAvailability::AVAILABLE_PREORDER;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return DomainAvailability::UNAVAILABLE;
          }
          else if (hashCode == UNAVAILABLE_PREMIUM_HASH)
          {
            return DomainAvailability::UNAVAILABLE_PREMIUM;
          }
          else if (hashCode == UNAVAILABLE_RESTRICTED_HASH)
          {
            return DomainAvailability::UNAVAILABLE_RESTRICTED;
          }
          else if (hashCode == RESERVED_HASH)
          {
            return DomainAvailability::RESERVED;
          }
          else if (hashCode == DONT_KNOW_HASH)
          {
            return DomainAvailability::DONT_KNOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainAvailability>(hashCode);
          }

          return DomainAvailability::NOT_SET;
        }

        Aws::String GetNameForDomainAvailability(DomainAvailability enumValue)
        {
          switch(enumValue)
          {
          case DomainAvailability::AVAILABLE:
            return "AVAILABLE";
          case DomainAvailability::AVAILABLE_RESERVED:
            return "AVAILABLE_RESERVED";
          case DomainAvailability::AVAILABLE_PREORDER:
            return "AVAILABLE_PREORDER";
          case DomainAvailability::UNAVAILABLE:
            return "UNAVAILABLE";
          case DomainAvailability::UNAVAILABLE_PREMIUM:
            return "UNAVAILABLE_PREMIUM";
          case DomainAvailability::UNAVAILABLE_RESTRICTED:
            return "UNAVAILABLE_RESTRICTED";
          case DomainAvailability::RESERVED:
            return "RESERVED";
          case DomainAvailability::DONT_KNOW:
            return "DONT_KNOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainAvailabilityMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
