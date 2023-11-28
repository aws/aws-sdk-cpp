/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/MessageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace MessageTypeMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");


        MessageType GetMessageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return MessageType::USER;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return MessageType::SYSTEM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageType>(hashCode);
          }

          return MessageType::NOT_SET;
        }

        Aws::String GetNameForMessageType(MessageType enumValue)
        {
          switch(enumValue)
          {
          case MessageType::NOT_SET:
            return {};
          case MessageType::USER:
            return "USER";
          case MessageType::SYSTEM:
            return "SYSTEM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
