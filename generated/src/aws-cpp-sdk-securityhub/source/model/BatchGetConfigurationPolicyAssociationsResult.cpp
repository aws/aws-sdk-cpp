/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchGetConfigurationPolicyAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetConfigurationPolicyAssociationsResult::BatchGetConfigurationPolicyAssociationsResult()
{
}

BatchGetConfigurationPolicyAssociationsResult::BatchGetConfigurationPolicyAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetConfigurationPolicyAssociationsResult& BatchGetConfigurationPolicyAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationPolicyAssociations"))
  {
    Aws::Utils::Array<JsonView> configurationPolicyAssociationsJsonList = jsonValue.GetArray("ConfigurationPolicyAssociations");
    for(unsigned configurationPolicyAssociationsIndex = 0; configurationPolicyAssociationsIndex < configurationPolicyAssociationsJsonList.GetLength(); ++configurationPolicyAssociationsIndex)
    {
      m_configurationPolicyAssociations.push_back(configurationPolicyAssociationsJsonList[configurationPolicyAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedConfigurationPolicyAssociations"))
  {
    Aws::Utils::Array<JsonView> unprocessedConfigurationPolicyAssociationsJsonList = jsonValue.GetArray("UnprocessedConfigurationPolicyAssociations");
    for(unsigned unprocessedConfigurationPolicyAssociationsIndex = 0; unprocessedConfigurationPolicyAssociationsIndex < unprocessedConfigurationPolicyAssociationsJsonList.GetLength(); ++unprocessedConfigurationPolicyAssociationsIndex)
    {
      m_unprocessedConfigurationPolicyAssociations.push_back(unprocessedConfigurationPolicyAssociationsJsonList[unprocessedConfigurationPolicyAssociationsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
