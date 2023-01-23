/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GenerateEmbedUrlForAnonymousUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GenerateEmbedUrlForAnonymousUserResult::GenerateEmbedUrlForAnonymousUserResult() : 
    m_status(0)
{
}

GenerateEmbedUrlForAnonymousUserResult::GenerateEmbedUrlForAnonymousUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

GenerateEmbedUrlForAnonymousUserResult& GenerateEmbedUrlForAnonymousUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EmbedUrl"))
  {
    m_embedUrl = jsonValue.GetString("EmbedUrl");

  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

  }

  if(jsonValue.ValueExists("AnonymousUserArn"))
  {
    m_anonymousUserArn = jsonValue.GetString("AnonymousUserArn");

  }



  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
