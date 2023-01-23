/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/StartEngagementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartEngagementResult::StartEngagementResult()
{
}

StartEngagementResult::StartEngagementResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartEngagementResult& StartEngagementResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EngagementArn"))
  {
    m_engagementArn = jsonValue.GetString("EngagementArn");

  }



  return *this;
}
