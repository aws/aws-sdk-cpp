/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pinpoint-sms-voice-v2/model/CarrierLookupResult.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CarrierLookupResult::CarrierLookupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CarrierLookupResult& CarrierLookupResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("E164PhoneNumber")) {
    m_e164PhoneNumber = jsonValue.GetString("E164PhoneNumber");
    m_e164PhoneNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DialingCountryCode")) {
    m_dialingCountryCode = jsonValue.GetString("DialingCountryCode");
    m_dialingCountryCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsoCountryCode")) {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");
    m_isoCountryCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Country")) {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MCC")) {
    m_mCC = jsonValue.GetString("MCC");
    m_mCCHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MNC")) {
    m_mNC = jsonValue.GetString("MNC");
    m_mNCHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Carrier")) {
    m_carrier = jsonValue.GetString("Carrier");
    m_carrierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PhoneNumberType")) {
    m_phoneNumberType = PhoneNumberTypeMapper::GetPhoneNumberTypeForName(jsonValue.GetString("PhoneNumberType"));
    m_phoneNumberTypeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
