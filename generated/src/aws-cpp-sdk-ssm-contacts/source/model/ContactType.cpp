/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ContactType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMContacts
  {
    namespace Model
    {
      namespace ContactTypeMapper
      {

        static const int PERSONAL_HASH = HashingUtils::HashString("PERSONAL");
        static const int ESCALATION_HASH = HashingUtils::HashString("ESCALATION");
        static const int ONCALL_SCHEDULE_HASH = HashingUtils::HashString("ONCALL_SCHEDULE");


        ContactType GetContactTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERSONAL_HASH)
          {
            return ContactType::PERSONAL;
          }
          else if (hashCode == ESCALATION_HASH)
          {
            return ContactType::ESCALATION;
          }
          else if (hashCode == ONCALL_SCHEDULE_HASH)
          {
            return ContactType::ONCALL_SCHEDULE;
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
          case ContactType::PERSONAL:
            return "PERSONAL";
          case ContactType::ESCALATION:
            return "ESCALATION";
          case ContactType::ONCALL_SCHEDULE:
            return "ONCALL_SCHEDULE";
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
  } // namespace SSMContacts
} // namespace Aws
