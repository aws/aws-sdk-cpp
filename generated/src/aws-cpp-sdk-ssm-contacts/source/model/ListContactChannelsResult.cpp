/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ListContactChannelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContactChannelsResult::ListContactChannelsResult()
{
}

ListContactChannelsResult::ListContactChannelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListContactChannelsResult& ListContactChannelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ContactChannels"))
  {
    Aws::Utils::Array<JsonView> contactChannelsJsonList = jsonValue.GetArray("ContactChannels");
    for(unsigned contactChannelsIndex = 0; contactChannelsIndex < contactChannelsJsonList.GetLength(); ++contactChannelsIndex)
    {
      m_contactChannels.push_back(contactChannelsJsonList[contactChannelsIndex].AsObject());
    }
  }



  return *this;
}
