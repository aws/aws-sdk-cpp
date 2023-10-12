/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ReceiptType.h>
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
      namespace ReceiptTypeMapper
      {

        static constexpr uint32_t DELIVERED_HASH = ConstExprHashingUtils::HashString("DELIVERED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t READ_HASH = ConstExprHashingUtils::HashString("READ");
        static constexpr uint32_t SENT_HASH = ConstExprHashingUtils::HashString("SENT");
        static constexpr uint32_t STOP_HASH = ConstExprHashingUtils::HashString("STOP");


        ReceiptType GetReceiptTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELIVERED_HASH)
          {
            return ReceiptType::DELIVERED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ReceiptType::ERROR_;
          }
          else if (hashCode == READ_HASH)
          {
            return ReceiptType::READ;
          }
          else if (hashCode == SENT_HASH)
          {
            return ReceiptType::SENT;
          }
          else if (hashCode == STOP_HASH)
          {
            return ReceiptType::STOP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReceiptType>(hashCode);
          }

          return ReceiptType::NOT_SET;
        }

        Aws::String GetNameForReceiptType(ReceiptType enumValue)
        {
          switch(enumValue)
          {
          case ReceiptType::NOT_SET:
            return {};
          case ReceiptType::DELIVERED:
            return "DELIVERED";
          case ReceiptType::ERROR_:
            return "ERROR";
          case ReceiptType::READ:
            return "READ";
          case ReceiptType::SENT:
            return "SENT";
          case ReceiptType::STOP:
            return "STOP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReceiptTypeMapper
    } // namespace Model
  } // namespace SSMContacts
} // namespace Aws
