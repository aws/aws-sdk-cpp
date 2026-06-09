/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/socialmessaging/model/GetWhatsAppFlowResult.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWhatsAppFlowResult::GetWhatsAppFlowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetWhatsAppFlowResult& GetWhatsAppFlowResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("flowId")) {
    m_flowId = jsonValue.GetString("flowId");
    m_flowIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("flowName")) {
    m_flowName = jsonValue.GetString("flowName");
    m_flowNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("flowStatus")) {
    m_flowStatus = jsonValue.GetString("flowStatus");
    m_flowStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("categories")) {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("categories");
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      m_categories.push_back(MetaFlowCategoryMapper::GetMetaFlowCategoryForName(categoriesJsonList[categoriesIndex].AsString()));
    }
    m_categoriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("validationErrors")) {
    Aws::Utils::Array<JsonView> validationErrorsJsonList = jsonValue.GetArray("validationErrors");
    for (unsigned validationErrorsIndex = 0; validationErrorsIndex < validationErrorsJsonList.GetLength(); ++validationErrorsIndex) {
      m_validationErrors.push_back(validationErrorsJsonList[validationErrorsIndex].AsString());
    }
    m_validationErrorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jsonVersion")) {
    m_jsonVersion = jsonValue.GetString("jsonVersion");
    m_jsonVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataApiVersion")) {
    m_dataApiVersion = jsonValue.GetString("dataApiVersion");
    m_dataApiVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpointUri")) {
    m_endpointUri = jsonValue.GetString("endpointUri");
    m_endpointUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("preview")) {
    m_preview = jsonValue.GetObject("preview");
    m_previewHasBeenSet = true;
  }
  if (jsonValue.ValueExists("whatsAppBusinessAccount")) {
    m_whatsAppBusinessAccount = jsonValue.GetObject("whatsAppBusinessAccount");
    m_whatsAppBusinessAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("application")) {
    m_application = jsonValue.GetObject("application");
    m_applicationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthStatus")) {
    m_healthStatus = jsonValue.GetObject("healthStatus");
    m_healthStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
