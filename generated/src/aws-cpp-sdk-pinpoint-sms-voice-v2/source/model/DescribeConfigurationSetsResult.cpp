/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeConfigurationSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConfigurationSetsResult::DescribeConfigurationSetsResult()
{
}

DescribeConfigurationSetsResult::DescribeConfigurationSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConfigurationSetsResult& DescribeConfigurationSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationSets"))
  {
    Aws::Utils::Array<JsonView> configurationSetsJsonList = jsonValue.GetArray("ConfigurationSets");
    for(unsigned configurationSetsIndex = 0; configurationSetsIndex < configurationSetsJsonList.GetLength(); ++configurationSetsIndex)
    {
      m_configurationSets.push_back(configurationSetsJsonList[configurationSetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
