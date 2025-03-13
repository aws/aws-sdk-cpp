/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/DescribeStateMachineResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeStateMachineResult::DescribeStateMachineResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeStateMachineResult& DescribeStateMachineResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("stateMachineArn"))
  {
    m_stateMachineArn = jsonValue.GetString("stateMachineArn");
    m_stateMachineArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = StateMachineStatusMapper::GetStateMachineStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetString("definition");
    m_definitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = StateMachineTypeMapper::GetStateMachineTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("loggingConfiguration"))
  {
    m_loggingConfiguration = jsonValue.GetObject("loggingConfiguration");
    m_loggingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tracingConfiguration"))
  {
    m_tracingConfiguration = jsonValue.GetObject("tracingConfiguration");
    m_tracingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("label"))
  {
    m_label = jsonValue.GetString("label");
    m_labelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("revisionId"))
  {
    m_revisionId = jsonValue.GetString("revisionId");
    m_revisionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("variableReferences"))
  {
    Aws::Map<Aws::String, JsonView> variableReferencesJsonMap = jsonValue.GetObject("variableReferences").GetAllObjects();
    for(auto& variableReferencesItem : variableReferencesJsonMap)
    {
      Aws::Utils::Array<JsonView> variableNameListJsonList = variableReferencesItem.second.AsArray();
      Aws::Vector<Aws::String> variableNameListList;
      variableNameListList.reserve((size_t)variableNameListJsonList.GetLength());
      for(unsigned variableNameListIndex = 0; variableNameListIndex < variableNameListJsonList.GetLength(); ++variableNameListIndex)
      {
        variableNameListList.push_back(variableNameListJsonList[variableNameListIndex].AsString());
      }
      m_variableReferences[variableReferencesItem.first] = std::move(variableNameListList);
    }
    m_variableReferencesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
