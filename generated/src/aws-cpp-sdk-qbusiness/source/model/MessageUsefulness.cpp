/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/MessageUsefulness.h>
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
      namespace MessageUsefulnessMapper
      {

        static const int USEFUL_HASH = HashingUtils::HashString("USEFUL");
        static const int NOT_USEFUL_HASH = HashingUtils::HashString("NOT_USEFUL");


        MessageUsefulness GetMessageUsefulnessForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USEFUL_HASH)
          {
            return MessageUsefulness::USEFUL;
          }
          else if (hashCode == NOT_USEFUL_HASH)
          {
            return MessageUsefulness::NOT_USEFUL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageUsefulness>(hashCode);
          }

          return MessageUsefulness::NOT_SET;
        }

        Aws::String GetNameForMessageUsefulness(MessageUsefulness enumValue)
        {
          switch(enumValue)
          {
          case MessageUsefulness::NOT_SET:
            return {};
          case MessageUsefulness::USEFUL:
            return "USEFUL";
          case MessageUsefulness::NOT_USEFUL:
            return "NOT_USEFUL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageUsefulnessMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
