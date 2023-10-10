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

        static const int DELIVERED_HASH = HashingUtils::HashString("DELIVERED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int READ_HASH = HashingUtils::HashString("READ");
        static const int SENT_HASH = HashingUtils::HashString("SENT");
        static const int STOP_HASH = HashingUtils::HashString("STOP");


        ReceiptType GetReceiptTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
