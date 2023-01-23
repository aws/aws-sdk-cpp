/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/ListInvitationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInvitationsResult::ListInvitationsResult()
{
}

ListInvitationsResult::ListInvitationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInvitationsResult& ListInvitationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Invitations"))
  {
    Aws::Utils::Array<JsonView> invitationsJsonList = jsonValue.GetArray("Invitations");
    for(unsigned invitationsIndex = 0; invitationsIndex < invitationsJsonList.GetLength(); ++invitationsIndex)
    {
      m_invitations.push_back(invitationsJsonList[invitationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
