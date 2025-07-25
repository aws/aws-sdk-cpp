/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/CreateWhatsAppMessageTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateWhatsAppMessageTemplateResult::CreateWhatsAppMessageTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateWhatsAppMessageTemplateResult& CreateWhatsAppMessageTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metaTemplateId"))
  {
    m_metaTemplateId = jsonValue.GetString("metaTemplateId");
    m_metaTemplateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateStatus"))
  {
    m_templateStatus = jsonValue.GetString("templateStatus");
    m_templateStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("category"))
  {
    m_category = jsonValue.GetString("category");
    m_categoryHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
