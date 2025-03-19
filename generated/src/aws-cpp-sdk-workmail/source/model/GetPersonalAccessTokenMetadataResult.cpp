/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetPersonalAccessTokenMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPersonalAccessTokenMetadataResult::GetPersonalAccessTokenMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPersonalAccessTokenMetadataResult& GetPersonalAccessTokenMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PersonalAccessTokenId"))
  {
    m_personalAccessTokenId = jsonValue.GetString("PersonalAccessTokenId");
    m_personalAccessTokenIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");
    m_userIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DateCreated"))
  {
    m_dateCreated = jsonValue.GetDouble("DateCreated");
    m_dateCreatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DateLastUsed"))
  {
    m_dateLastUsed = jsonValue.GetDouble("DateLastUsed");
    m_dateLastUsedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpiresTime"))
  {
    m_expiresTime = jsonValue.GetDouble("ExpiresTime");
    m_expiresTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Scopes"))
  {
    Aws::Utils::Array<JsonView> scopesJsonList = jsonValue.GetArray("Scopes");
    for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
    {
      m_scopes.push_back(scopesJsonList[scopesIndex].AsString());
    }
    m_scopesHasBeenSet = true;
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
