/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateSubscriberResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSubscriberResult::CreateSubscriberResult()
{
}

CreateSubscriberResult::CreateSubscriberResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSubscriberResult& CreateSubscriberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("s3BucketArn"))
  {
    m_s3BucketArn = jsonValue.GetString("s3BucketArn");

  }

  if(jsonValue.ValueExists("snsArn"))
  {
    m_snsArn = jsonValue.GetString("snsArn");

  }

  if(jsonValue.ValueExists("subscriptionId"))
  {
    m_subscriptionId = jsonValue.GetString("subscriptionId");

  }



  return *this;
}
