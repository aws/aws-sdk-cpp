/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/DeleteWhatsAppMessageMediaResult.h>
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

DeleteWhatsAppMessageMediaResult::DeleteWhatsAppMessageMediaResult() : 
    m_success(false)
{
}

DeleteWhatsAppMessageMediaResult::DeleteWhatsAppMessageMediaResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DeleteWhatsAppMessageMediaResult()
{
  *this = result;
}

DeleteWhatsAppMessageMediaResult& DeleteWhatsAppMessageMediaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("success"))
  {
    m_success = jsonValue.GetBool("success");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
