/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/CreateContactChannelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateContactChannelResult::CreateContactChannelResult()
{
}

CreateContactChannelResult::CreateContactChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateContactChannelResult& CreateContactChannelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContactChannelArn"))
  {
    m_contactChannelArn = jsonValue.GetString("ContactChannelArn");

  }



  return *this;
}
