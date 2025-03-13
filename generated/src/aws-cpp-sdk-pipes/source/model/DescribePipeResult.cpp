/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/DescribePipeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Pipes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePipeResult::DescribePipeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePipeResult& DescribePipeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DesiredState"))
  {
    m_desiredState = RequestedPipeStateDescribeResponseMapper::GetRequestedPipeStateDescribeResponseForName(jsonValue.GetString("DesiredState"));
    m_desiredStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentState"))
  {
    m_currentState = PipeStateMapper::GetPipeStateForName(jsonValue.GetString("CurrentState"));
    m_currentStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");
    m_stateReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceParameters"))
  {
    m_sourceParameters = jsonValue.GetObject("SourceParameters");
    m_sourceParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Enrichment"))
  {
    m_enrichment = jsonValue.GetString("Enrichment");
    m_enrichmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnrichmentParameters"))
  {
    m_enrichmentParameters = jsonValue.GetObject("EnrichmentParameters");
    m_enrichmentParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");
    m_targetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetParameters"))
  {
    m_targetParameters = jsonValue.GetObject("TargetParameters");
    m_targetParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("LogConfiguration");
    m_logConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("KmsKeyIdentifier");
    m_kmsKeyIdentifierHasBeenSet = true;
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
