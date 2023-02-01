/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DescribeConfigurationRevisionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConfigurationRevisionResult::DescribeConfigurationRevisionResult()
{
}

DescribeConfigurationRevisionResult::DescribeConfigurationRevisionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConfigurationRevisionResult& DescribeConfigurationRevisionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("configurationId"))
  {
    m_configurationId = jsonValue.GetString("configurationId");

  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetString("created");

  }

  if(jsonValue.ValueExists("data"))
  {
    m_data = jsonValue.GetString("data");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }



  return *this;
}
