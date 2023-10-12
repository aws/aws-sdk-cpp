/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ContactType.h>
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
      namespace ContactTypeMapper
      {

        static constexpr uint32_t PERSON_HASH = ConstExprHashingUtils::HashString("PERSON");
        static constexpr uint32_t COMPANY_HASH = ConstExprHashingUtils::HashString("COMPANY");
        static constexpr uint32_t ASSOCIATION_HASH = ConstExprHashingUtils::HashString("ASSOCIATION");
        static constexpr uint32_t PUBLIC_BODY_HASH = ConstExprHashingUtils::HashString("PUBLIC_BODY");
        static constexpr uint32_t RESELLER_HASH = ConstExprHashingUtils::HashString("RESELLER");


        ContactType GetContactTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERSON_HASH)
          {
            return ContactType::PERSON;
          }
          else if (hashCode == COMPANY_HASH)
          {
            return ContactType::COMPANY;
          }
          else if (hashCode == ASSOCIATION_HASH)
          {
            return ContactType::ASSOCIATION;
          }
          else if (hashCode == PUBLIC_BODY_HASH)
          {
            return ContactType::PUBLIC_BODY;
          }
          else if (hashCode == RESELLER_HASH)
          {
            return ContactType::RESELLER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactType>(hashCode);
          }

          return ContactType::NOT_SET;
        }

        Aws::String GetNameForContactType(ContactType enumValue)
        {
          switch(enumValue)
          {
          case ContactType::NOT_SET:
            return {};
          case ContactType::PERSON:
            return "PERSON";
          case ContactType::COMPANY:
            return "COMPANY";
          case ContactType::ASSOCIATION:
            return "ASSOCIATION";
          case ContactType::PUBLIC_BODY:
            return "PUBLIC_BODY";
          case ContactType::RESELLER:
            return "RESELLER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactTypeMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
