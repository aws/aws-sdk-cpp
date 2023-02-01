/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListContactListsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContactListsResult::ListContactListsResult()
{
}

ListContactListsResult::ListContactListsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListContactListsResult& ListContactListsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContactLists"))
  {
    Aws::Utils::Array<JsonView> contactListsJsonList = jsonValue.GetArray("ContactLists");
    for(unsigned contactListsIndex = 0; contactListsIndex < contactListsJsonList.GetLength(); ++contactListsIndex)
    {
      m_contactLists.push_back(contactListsJsonList[contactListsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
