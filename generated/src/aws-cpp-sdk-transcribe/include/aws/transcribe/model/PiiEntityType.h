/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>

namespace Aws {
namespace TranscribeService {
namespace Model {
enum class PiiEntityType {
  NOT_SET,
  BANK_ACCOUNT_NUMBER,
  BANK_ROUTING,
  CREDIT_DEBIT_NUMBER,
  CREDIT_DEBIT_CVV,
  CREDIT_DEBIT_EXPIRY,
  PIN,
  EMAIL,
  ADDRESS,
  NAME,
  PHONE,
  SSN,
  DATE_TIME,
  PASSPORT_NUMBER,
  DRIVER_ID,
  URL,
  AGE,
  USERNAME,
  PASSWORD,
  AWS_ACCESS_KEY,
  AWS_SECRET_KEY,
  IP_ADDRESS,
  MAC_ADDRESS,
  LICENSE_PLATE,
  VEHICLE_IDENTIFICATION_NUMBER,
  US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER,
  CA_HEALTH_NUMBER,
  CA_SOCIAL_INSURANCE_NUMBER,
  INTERNATIONAL_BANK_ACCOUNT_NUMBER,
  SWIFT_CODE,
  ALL
};

namespace PiiEntityTypeMapper {
AWS_TRANSCRIBESERVICE_API PiiEntityType GetPiiEntityTypeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForPiiEntityType(PiiEntityType value);
}  // namespace PiiEntityTypeMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
