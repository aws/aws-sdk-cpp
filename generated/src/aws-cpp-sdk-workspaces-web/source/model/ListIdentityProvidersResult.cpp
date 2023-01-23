/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/ListIdentityProvidersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIdentityProvidersResult::ListIdentityProvidersResult()
{
}

ListIdentityProvidersResult::ListIdentityProvidersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIdentityProvidersResult& ListIdentityProvidersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("identityProviders"))
  {
    Aws::Utils::Array<JsonView> identityProvidersJsonList = jsonValue.GetArray("identityProviders");
    for(unsigned identityProvidersIndex = 0; identityProvidersIndex < identityProvidersJsonList.GetLength(); ++identityProvidersIndex)
    {
      m_identityProviders.push_back(identityProvidersJsonList[identityProvidersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
