/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/ListOrganizationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOrganizationsResult::ListOrganizationsResult()
{
}

ListOrganizationsResult::ListOrganizationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOrganizationsResult& ListOrganizationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationSummaries"))
  {
    Aws::Utils::Array<JsonView> organizationSummariesJsonList = jsonValue.GetArray("OrganizationSummaries");
    for(unsigned organizationSummariesIndex = 0; organizationSummariesIndex < organizationSummariesJsonList.GetLength(); ++organizationSummariesIndex)
    {
      m_organizationSummaries.push_back(organizationSummariesJsonList[organizationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
