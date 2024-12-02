/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ConversationStatusReason.h>
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
      namespace ConversationStatusReasonMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");


        ConversationStatusReason GetConversationStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return ConversationStatusReason::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ConversationStatusReason::FAILED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ConversationStatusReason::REJECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConversationStatusReason>(hashCode);
          }

          return ConversationStatusReason::NOT_SET;
        }

        Aws::String GetNameForConversationStatusReason(ConversationStatusReason enumValue)
        {
          switch(enumValue)
          {
          case ConversationStatusReason::NOT_SET:
            return {};
          case ConversationStatusReason::SUCCESS:
            return "SUCCESS";
          case ConversationStatusReason::FAILED:
            return "FAILED";
          case ConversationStatusReason::REJECTED:
            return "REJECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConversationStatusReasonMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
