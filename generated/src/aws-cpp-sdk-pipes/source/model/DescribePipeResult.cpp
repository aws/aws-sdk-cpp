/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/DescribePipeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Pipes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePipeResult::DescribePipeResult() : 
    m_currentState(PipeState::NOT_SET),
    m_desiredState(RequestedPipeStateDescribeResponse::NOT_SET)
{
}

DescribePipeResult::DescribePipeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_currentState(PipeState::NOT_SET),
    m_desiredState(RequestedPipeStateDescribeResponse::NOT_SET)
{
  *this = result;
}

DescribePipeResult& DescribePipeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("CurrentState"))
  {
    m_currentState = PipeStateMapper::GetPipeStateForName(jsonValue.GetString("CurrentState"));

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("DesiredState"))
  {
    m_desiredState = RequestedPipeStateDescribeResponseMapper::GetRequestedPipeStateDescribeResponseForName(jsonValue.GetString("DesiredState"));

  }

  if(jsonValue.ValueExists("Enrichment"))
  {
    m_enrichment = jsonValue.GetString("Enrichment");

  }

  if(jsonValue.ValueExists("EnrichmentParameters"))
  {
    m_enrichmentParameters = jsonValue.GetObject("EnrichmentParameters");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

  }

  if(jsonValue.ValueExists("SourceParameters"))
  {
    m_sourceParameters = jsonValue.GetObject("SourceParameters");

  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

  }

  if(jsonValue.ValueExists("TargetParameters"))
  {
    m_targetParameters = jsonValue.GetObject("TargetParameters");

  }



  return *this;
}
