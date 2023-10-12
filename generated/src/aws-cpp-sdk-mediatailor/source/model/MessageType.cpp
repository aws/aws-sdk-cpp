/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/MessageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace MessageTypeMapper
      {

        static constexpr uint32_t SPLICE_INSERT_HASH = ConstExprHashingUtils::HashString("SPLICE_INSERT");
        static constexpr uint32_t TIME_SIGNAL_HASH = ConstExprHashingUtils::HashString("TIME_SIGNAL");


        MessageType GetMessageTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPLICE_INSERT_HASH)
          {
            return MessageType::SPLICE_INSERT;
          }
          else if (hashCode == TIME_SIGNAL_HASH)
          {
            return MessageType::TIME_SIGNAL;
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
          case MessageType::SPLICE_INSERT:
            return "SPLICE_INSERT";
          case MessageType::TIME_SIGNAL:
            return "TIME_SIGNAL";
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
  } // namespace MediaTailor
} // namespace Aws
