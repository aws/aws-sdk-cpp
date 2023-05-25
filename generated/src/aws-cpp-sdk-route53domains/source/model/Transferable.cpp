/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/Transferable.h>
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
      namespace TransferableMapper
      {

        static const int TRANSFERABLE_HASH = HashingUtils::HashString("TRANSFERABLE");
        static const int UNTRANSFERABLE_HASH = HashingUtils::HashString("UNTRANSFERABLE");
        static const int DONT_KNOW_HASH = HashingUtils::HashString("DONT_KNOW");
        static const int DOMAIN_IN_OWN_ACCOUNT_HASH = HashingUtils::HashString("DOMAIN_IN_OWN_ACCOUNT");
        static const int DOMAIN_IN_ANOTHER_ACCOUNT_HASH = HashingUtils::HashString("DOMAIN_IN_ANOTHER_ACCOUNT");
        static const int PREMIUM_DOMAIN_HASH = HashingUtils::HashString("PREMIUM_DOMAIN");


        Transferable GetTransferableForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRANSFERABLE_HASH)
          {
            return Transferable::TRANSFERABLE;
          }
          else if (hashCode == UNTRANSFERABLE_HASH)
          {
            return Transferable::UNTRANSFERABLE;
          }
          else if (hashCode == DONT_KNOW_HASH)
          {
            return Transferable::DONT_KNOW;
          }
          else if (hashCode == DOMAIN_IN_OWN_ACCOUNT_HASH)
          {
            return Transferable::DOMAIN_IN_OWN_ACCOUNT;
          }
          else if (hashCode == DOMAIN_IN_ANOTHER_ACCOUNT_HASH)
          {
            return Transferable::DOMAIN_IN_ANOTHER_ACCOUNT;
          }
          else if (hashCode == PREMIUM_DOMAIN_HASH)
          {
            return Transferable::PREMIUM_DOMAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Transferable>(hashCode);
          }

          return Transferable::NOT_SET;
        }

        Aws::String GetNameForTransferable(Transferable enumValue)
        {
          switch(enumValue)
          {
          case Transferable::TRANSFERABLE:
            return "TRANSFERABLE";
          case Transferable::UNTRANSFERABLE:
            return "UNTRANSFERABLE";
          case Transferable::DONT_KNOW:
            return "DONT_KNOW";
          case Transferable::DOMAIN_IN_OWN_ACCOUNT:
            return "DOMAIN_IN_OWN_ACCOUNT";
          case Transferable::DOMAIN_IN_ANOTHER_ACCOUNT:
            return "DOMAIN_IN_ANOTHER_ACCOUNT";
          case Transferable::PREMIUM_DOMAIN:
            return "PREMIUM_DOMAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransferableMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
