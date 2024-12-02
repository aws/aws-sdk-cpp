/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ConversationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace ConversationStatusMapper
      {

        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");


        ConversationStatus GetConversationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOSED_HASH)
          {
            return ConversationStatus::CLOSED;
          }
          else if (hashCode == READY_HASH)
          {
            return ConversationStatus::READY;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return ConversationStatus::PROCESSING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConversationStatus>(hashCode);
          }

          return ConversationStatus::NOT_SET;
        }

        Aws::String GetNameForConversationStatus(ConversationStatus enumValue)
        {
          switch(enumValue)
          {
          case ConversationStatus::NOT_SET:
            return {};
          case ConversationStatus::CLOSED:
            return "CLOSED";
          case ConversationStatus::READY:
            return "READY";
          case ConversationStatus::PROCESSING:
            return "PROCESSING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConversationStatusMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
