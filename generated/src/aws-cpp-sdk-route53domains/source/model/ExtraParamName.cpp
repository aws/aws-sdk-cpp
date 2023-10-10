﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ExtraParamName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Domains
  {
    namespace Model
    {
      namespace ExtraParamNameMapper
      {

        static const int DUNS_NUMBER_HASH = HashingUtils::HashString("DUNS_NUMBER");
        static const int BRAND_NUMBER_HASH = HashingUtils::HashString("BRAND_NUMBER");
        static const int BIRTH_DEPARTMENT_HASH = HashingUtils::HashString("BIRTH_DEPARTMENT");
        static const int BIRTH_DATE_IN_YYYY_MM_DD_HASH = HashingUtils::HashString("BIRTH_DATE_IN_YYYY_MM_DD");
        static const int BIRTH_COUNTRY_HASH = HashingUtils::HashString("BIRTH_COUNTRY");
        static const int BIRTH_CITY_HASH = HashingUtils::HashString("BIRTH_CITY");
        static const int DOCUMENT_NUMBER_HASH = HashingUtils::HashString("DOCUMENT_NUMBER");
        static const int AU_ID_NUMBER_HASH = HashingUtils::HashString("AU_ID_NUMBER");
        static const int AU_ID_TYPE_HASH = HashingUtils::HashString("AU_ID_TYPE");
        static const int CA_LEGAL_TYPE_HASH = HashingUtils::HashString("CA_LEGAL_TYPE");
        static const int CA_BUSINESS_ENTITY_TYPE_HASH = HashingUtils::HashString("CA_BUSINESS_ENTITY_TYPE");
        static const int CA_LEGAL_REPRESENTATIVE_HASH = HashingUtils::HashString("CA_LEGAL_REPRESENTATIVE");
        static const int CA_LEGAL_REPRESENTATIVE_CAPACITY_HASH = HashingUtils::HashString("CA_LEGAL_REPRESENTATIVE_CAPACITY");
        static const int ES_IDENTIFICATION_HASH = HashingUtils::HashString("ES_IDENTIFICATION");
        static const int ES_IDENTIFICATION_TYPE_HASH = HashingUtils::HashString("ES_IDENTIFICATION_TYPE");
        static const int ES_LEGAL_FORM_HASH = HashingUtils::HashString("ES_LEGAL_FORM");
        static const int FI_BUSINESS_NUMBER_HASH = HashingUtils::HashString("FI_BUSINESS_NUMBER");
        static const int FI_ID_NUMBER_HASH = HashingUtils::HashString("FI_ID_NUMBER");
        static const int FI_NATIONALITY_HASH = HashingUtils::HashString("FI_NATIONALITY");
        static const int FI_ORGANIZATION_TYPE_HASH = HashingUtils::HashString("FI_ORGANIZATION_TYPE");
        static const int IT_NATIONALITY_HASH = HashingUtils::HashString("IT_NATIONALITY");
        static const int IT_PIN_HASH = HashingUtils::HashString("IT_PIN");
        static const int IT_REGISTRANT_ENTITY_TYPE_HASH = HashingUtils::HashString("IT_REGISTRANT_ENTITY_TYPE");
        static const int RU_PASSPORT_DATA_HASH = HashingUtils::HashString("RU_PASSPORT_DATA");
        static const int SE_ID_NUMBER_HASH = HashingUtils::HashString("SE_ID_NUMBER");
        static const int SG_ID_NUMBER_HASH = HashingUtils::HashString("SG_ID_NUMBER");
        static const int VAT_NUMBER_HASH = HashingUtils::HashString("VAT_NUMBER");
        static const int UK_CONTACT_TYPE_HASH = HashingUtils::HashString("UK_CONTACT_TYPE");
        static const int UK_COMPANY_NUMBER_HASH = HashingUtils::HashString("UK_COMPANY_NUMBER");
        static const int EU_COUNTRY_OF_CITIZENSHIP_HASH = HashingUtils::HashString("EU_COUNTRY_OF_CITIZENSHIP");
        static const int AU_PRIORITY_TOKEN_HASH = HashingUtils::HashString("AU_PRIORITY_TOKEN");


        ExtraParamName GetExtraParamNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUNS_NUMBER_HASH)
          {
            return ExtraParamName::DUNS_NUMBER;
          }
          else if (hashCode == BRAND_NUMBER_HASH)
          {
            return ExtraParamName::BRAND_NUMBER;
          }
          else if (hashCode == BIRTH_DEPARTMENT_HASH)
          {
            return ExtraParamName::BIRTH_DEPARTMENT;
          }
          else if (hashCode == BIRTH_DATE_IN_YYYY_MM_DD_HASH)
          {
            return ExtraParamName::BIRTH_DATE_IN_YYYY_MM_DD;
          }
          else if (hashCode == BIRTH_COUNTRY_HASH)
          {
            return ExtraParamName::BIRTH_COUNTRY;
          }
          else if (hashCode == BIRTH_CITY_HASH)
          {
            return ExtraParamName::BIRTH_CITY;
          }
          else if (hashCode == DOCUMENT_NUMBER_HASH)
          {
            return ExtraParamName::DOCUMENT_NUMBER;
          }
          else if (hashCode == AU_ID_NUMBER_HASH)
          {
            return ExtraParamName::AU_ID_NUMBER;
          }
          else if (hashCode == AU_ID_TYPE_HASH)
          {
            return ExtraParamName::AU_ID_TYPE;
          }
          else if (hashCode == CA_LEGAL_TYPE_HASH)
          {
            return ExtraParamName::CA_LEGAL_TYPE;
          }
          else if (hashCode == CA_BUSINESS_ENTITY_TYPE_HASH)
          {
            return ExtraParamName::CA_BUSINESS_ENTITY_TYPE;
          }
          else if (hashCode == CA_LEGAL_REPRESENTATIVE_HASH)
          {
            return ExtraParamName::CA_LEGAL_REPRESENTATIVE;
          }
          else if (hashCode == CA_LEGAL_REPRESENTATIVE_CAPACITY_HASH)
          {
            return ExtraParamName::CA_LEGAL_REPRESENTATIVE_CAPACITY;
          }
          else if (hashCode == ES_IDENTIFICATION_HASH)
          {
            return ExtraParamName::ES_IDENTIFICATION;
          }
          else if (hashCode == ES_IDENTIFICATION_TYPE_HASH)
          {
            return ExtraParamName::ES_IDENTIFICATION_TYPE;
          }
          else if (hashCode == ES_LEGAL_FORM_HASH)
          {
            return ExtraParamName::ES_LEGAL_FORM;
          }
          else if (hashCode == FI_BUSINESS_NUMBER_HASH)
          {
            return ExtraParamName::FI_BUSINESS_NUMBER;
          }
          else if (hashCode == FI_ID_NUMBER_HASH)
          {
            return ExtraParamName::FI_ID_NUMBER;
          }
          else if (hashCode == FI_NATIONALITY_HASH)
          {
            return ExtraParamName::FI_NATIONALITY;
          }
          else if (hashCode == FI_ORGANIZATION_TYPE_HASH)
          {
            return ExtraParamName::FI_ORGANIZATION_TYPE;
          }
          else if (hashCode == IT_NATIONALITY_HASH)
          {
            return ExtraParamName::IT_NATIONALITY;
          }
          else if (hashCode == IT_PIN_HASH)
          {
            return ExtraParamName::IT_PIN;
          }
          else if (hashCode == IT_REGISTRANT_ENTITY_TYPE_HASH)
          {
            return ExtraParamName::IT_REGISTRANT_ENTITY_TYPE;
          }
          else if (hashCode == RU_PASSPORT_DATA_HASH)
          {
            return ExtraParamName::RU_PASSPORT_DATA;
          }
          else if (hashCode == SE_ID_NUMBER_HASH)
          {
            return ExtraParamName::SE_ID_NUMBER;
          }
          else if (hashCode == SG_ID_NUMBER_HASH)
          {
            return ExtraParamName::SG_ID_NUMBER;
          }
          else if (hashCode == VAT_NUMBER_HASH)
          {
            return ExtraParamName::VAT_NUMBER;
          }
          else if (hashCode == UK_CONTACT_TYPE_HASH)
          {
            return ExtraParamName::UK_CONTACT_TYPE;
          }
          else if (hashCode == UK_COMPANY_NUMBER_HASH)
          {
            return ExtraParamName::UK_COMPANY_NUMBER;
          }
          else if (hashCode == EU_COUNTRY_OF_CITIZENSHIP_HASH)
          {
            return ExtraParamName::EU_COUNTRY_OF_CITIZENSHIP;
          }
          else if (hashCode == AU_PRIORITY_TOKEN_HASH)
          {
            return ExtraParamName::AU_PRIORITY_TOKEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExtraParamName>(hashCode);
          }

          return ExtraParamName::NOT_SET;
        }

        Aws::String GetNameForExtraParamName(ExtraParamName enumValue)
        {
          switch(enumValue)
          {
          case ExtraParamName::NOT_SET:
            return {};
          case ExtraParamName::DUNS_NUMBER:
            return "DUNS_NUMBER";
          case ExtraParamName::BRAND_NUMBER:
            return "BRAND_NUMBER";
          case ExtraParamName::BIRTH_DEPARTMENT:
            return "BIRTH_DEPARTMENT";
          case ExtraParamName::BIRTH_DATE_IN_YYYY_MM_DD:
            return "BIRTH_DATE_IN_YYYY_MM_DD";
          case ExtraParamName::BIRTH_COUNTRY:
            return "BIRTH_COUNTRY";
          case ExtraParamName::BIRTH_CITY:
            return "BIRTH_CITY";
          case ExtraParamName::DOCUMENT_NUMBER:
            return "DOCUMENT_NUMBER";
          case ExtraParamName::AU_ID_NUMBER:
            return "AU_ID_NUMBER";
          case ExtraParamName::AU_ID_TYPE:
            return "AU_ID_TYPE";
          case ExtraParamName::CA_LEGAL_TYPE:
            return "CA_LEGAL_TYPE";
          case ExtraParamName::CA_BUSINESS_ENTITY_TYPE:
            return "CA_BUSINESS_ENTITY_TYPE";
          case ExtraParamName::CA_LEGAL_REPRESENTATIVE:
            return "CA_LEGAL_REPRESENTATIVE";
          case ExtraParamName::CA_LEGAL_REPRESENTATIVE_CAPACITY:
            return "CA_LEGAL_REPRESENTATIVE_CAPACITY";
          case ExtraParamName::ES_IDENTIFICATION:
            return "ES_IDENTIFICATION";
          case ExtraParamName::ES_IDENTIFICATION_TYPE:
            return "ES_IDENTIFICATION_TYPE";
          case ExtraParamName::ES_LEGAL_FORM:
            return "ES_LEGAL_FORM";
          case ExtraParamName::FI_BUSINESS_NUMBER:
            return "FI_BUSINESS_NUMBER";
          case ExtraParamName::FI_ID_NUMBER:
            return "FI_ID_NUMBER";
          case ExtraParamName::FI_NATIONALITY:
            return "FI_NATIONALITY";
          case ExtraParamName::FI_ORGANIZATION_TYPE:
            return "FI_ORGANIZATION_TYPE";
          case ExtraParamName::IT_NATIONALITY:
            return "IT_NATIONALITY";
          case ExtraParamName::IT_PIN:
            return "IT_PIN";
          case ExtraParamName::IT_REGISTRANT_ENTITY_TYPE:
            return "IT_REGISTRANT_ENTITY_TYPE";
          case ExtraParamName::RU_PASSPORT_DATA:
            return "RU_PASSPORT_DATA";
          case ExtraParamName::SE_ID_NUMBER:
            return "SE_ID_NUMBER";
          case ExtraParamName::SG_ID_NUMBER:
            return "SG_ID_NUMBER";
          case ExtraParamName::VAT_NUMBER:
            return "VAT_NUMBER";
          case ExtraParamName::UK_CONTACT_TYPE:
            return "UK_CONTACT_TYPE";
          case ExtraParamName::UK_COMPANY_NUMBER:
            return "UK_COMPANY_NUMBER";
          case ExtraParamName::EU_COUNTRY_OF_CITIZENSHIP:
            return "EU_COUNTRY_OF_CITIZENSHIP";
          case ExtraParamName::AU_PRIORITY_TOKEN:
            return "AU_PRIORITY_TOKEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExtraParamNameMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
