/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notificationscontacts/model/EmailContactStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NotificationsContacts
  {
    namespace Model
    {
      namespace EmailContactStatusMapper
      {

        static const int inactive_HASH = HashingUtils::HashString("inactive");
        static const int active_HASH = HashingUtils::HashString("active");


        EmailContactStatus GetEmailContactStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == inactive_HASH)
          {
            return EmailContactStatus::inactive;
          }
          else if (hashCode == active_HASH)
          {
            return EmailContactStatus::active;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmailContactStatus>(hashCode);
          }

          return EmailContactStatus::NOT_SET;
        }

        Aws::String GetNameForEmailContactStatus(EmailContactStatus enumValue)
        {
          switch(enumValue)
          {
          case EmailContactStatus::NOT_SET:
            return {};
          case EmailContactStatus::inactive:
            return "inactive";
          case EmailContactStatus::active:
            return "active";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmailContactStatusMapper
    } // namespace Model
  } // namespace NotificationsContacts
} // namespace Aws
