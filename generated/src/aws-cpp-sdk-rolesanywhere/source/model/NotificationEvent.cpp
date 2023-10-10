/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/NotificationEvent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RolesAnywhere
  {
    namespace Model
    {
      namespace NotificationEventMapper
      {

        static const int CA_CERTIFICATE_EXPIRY_HASH = HashingUtils::HashString("CA_CERTIFICATE_EXPIRY");
        static const int END_ENTITY_CERTIFICATE_EXPIRY_HASH = HashingUtils::HashString("END_ENTITY_CERTIFICATE_EXPIRY");


        NotificationEvent GetNotificationEventForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CA_CERTIFICATE_EXPIRY_HASH)
          {
            return NotificationEvent::CA_CERTIFICATE_EXPIRY;
          }
          else if (hashCode == END_ENTITY_CERTIFICATE_EXPIRY_HASH)
          {
            return NotificationEvent::END_ENTITY_CERTIFICATE_EXPIRY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationEvent>(hashCode);
          }

          return NotificationEvent::NOT_SET;
        }

        Aws::String GetNameForNotificationEvent(NotificationEvent enumValue)
        {
          switch(enumValue)
          {
          case NotificationEvent::NOT_SET:
            return {};
          case NotificationEvent::CA_CERTIFICATE_EXPIRY:
            return "CA_CERTIFICATE_EXPIRY";
          case NotificationEvent::END_ENTITY_CERTIFICATE_EXPIRY:
            return "END_ENTITY_CERTIFICATE_EXPIRY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationEventMapper
    } // namespace Model
  } // namespace RolesAnywhere
} // namespace Aws
