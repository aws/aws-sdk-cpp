﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/PiiEntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace PiiEntityTypeMapper
      {

        static const int BANK_ACCOUNT_NUMBER_HASH = HashingUtils::HashString("BANK_ACCOUNT_NUMBER");
        static const int BANK_ROUTING_HASH = HashingUtils::HashString("BANK_ROUTING");
        static const int CREDIT_DEBIT_NUMBER_HASH = HashingUtils::HashString("CREDIT_DEBIT_NUMBER");
        static const int CREDIT_DEBIT_CVV_HASH = HashingUtils::HashString("CREDIT_DEBIT_CVV");
        static const int CREDIT_DEBIT_EXPIRY_HASH = HashingUtils::HashString("CREDIT_DEBIT_EXPIRY");
        static const int PIN_HASH = HashingUtils::HashString("PIN");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int ADDRESS_HASH = HashingUtils::HashString("ADDRESS");
        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int PHONE_HASH = HashingUtils::HashString("PHONE");
        static const int SSN_HASH = HashingUtils::HashString("SSN");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        PiiEntityType GetPiiEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BANK_ACCOUNT_NUMBER_HASH)
          {
            return PiiEntityType::BANK_ACCOUNT_NUMBER;
          }
          else if (hashCode == BANK_ROUTING_HASH)
          {
            return PiiEntityType::BANK_ROUTING;
          }
          else if (hashCode == CREDIT_DEBIT_NUMBER_HASH)
          {
            return PiiEntityType::CREDIT_DEBIT_NUMBER;
          }
          else if (hashCode == CREDIT_DEBIT_CVV_HASH)
          {
            return PiiEntityType::CREDIT_DEBIT_CVV;
          }
          else if (hashCode == CREDIT_DEBIT_EXPIRY_HASH)
          {
            return PiiEntityType::CREDIT_DEBIT_EXPIRY;
          }
          else if (hashCode == PIN_HASH)
          {
            return PiiEntityType::PIN;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return PiiEntityType::EMAIL;
          }
          else if (hashCode == ADDRESS_HASH)
          {
            return PiiEntityType::ADDRESS;
          }
          else if (hashCode == NAME_HASH)
          {
            return PiiEntityType::NAME;
          }
          else if (hashCode == PHONE_HASH)
          {
            return PiiEntityType::PHONE;
          }
          else if (hashCode == SSN_HASH)
          {
            return PiiEntityType::SSN;
          }
          else if (hashCode == ALL_HASH)
          {
            return PiiEntityType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PiiEntityType>(hashCode);
          }

          return PiiEntityType::NOT_SET;
        }

        Aws::String GetNameForPiiEntityType(PiiEntityType enumValue)
        {
          switch(enumValue)
          {
          case PiiEntityType::NOT_SET:
            return {};
          case PiiEntityType::BANK_ACCOUNT_NUMBER:
            return "BANK_ACCOUNT_NUMBER";
          case PiiEntityType::BANK_ROUTING:
            return "BANK_ROUTING";
          case PiiEntityType::CREDIT_DEBIT_NUMBER:
            return "CREDIT_DEBIT_NUMBER";
          case PiiEntityType::CREDIT_DEBIT_CVV:
            return "CREDIT_DEBIT_CVV";
          case PiiEntityType::CREDIT_DEBIT_EXPIRY:
            return "CREDIT_DEBIT_EXPIRY";
          case PiiEntityType::PIN:
            return "PIN";
          case PiiEntityType::EMAIL:
            return "EMAIL";
          case PiiEntityType::ADDRESS:
            return "ADDRESS";
          case PiiEntityType::NAME:
            return "NAME";
          case PiiEntityType::PHONE:
            return "PHONE";
          case PiiEntityType::SSN:
            return "SSN";
          case PiiEntityType::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PiiEntityTypeMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
