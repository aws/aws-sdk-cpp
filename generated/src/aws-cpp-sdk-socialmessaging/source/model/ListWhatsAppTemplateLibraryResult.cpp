/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/ListWhatsAppTemplateLibraryResult.h>
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

ListWhatsAppTemplateLibraryResult::ListWhatsAppTemplateLibraryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWhatsAppTemplateLibraryResult& ListWhatsAppTemplateLibraryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metaLibraryTemplates"))
  {
    Aws::Utils::Array<JsonView> metaLibraryTemplatesJsonList = jsonValue.GetArray("metaLibraryTemplates");
    for(unsigned metaLibraryTemplatesIndex = 0; metaLibraryTemplatesIndex < metaLibraryTemplatesJsonList.GetLength(); ++metaLibraryTemplatesIndex)
    {
      m_metaLibraryTemplates.push_back(metaLibraryTemplatesJsonList[metaLibraryTemplatesIndex].AsObject());
    }
    m_metaLibraryTemplatesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
