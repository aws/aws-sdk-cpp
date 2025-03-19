/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribeNodeFromTemplateJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNodeFromTemplateJobResult::DescribeNodeFromTemplateJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeNodeFromTemplateJobResult& DescribeNodeFromTemplateJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobTags"))
  {
    Aws::Utils::Array<JsonView> jobTagsJsonList = jsonValue.GetArray("JobTags");
    for(unsigned jobTagsIndex = 0; jobTagsIndex < jobTagsJsonList.GetLength(); ++jobTagsIndex)
    {
      m_jobTags.push_back(jobTagsJsonList[jobTagsIndex].AsObject());
    }
    m_jobTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeDescription"))
  {
    m_nodeDescription = jsonValue.GetString("NodeDescription");
    m_nodeDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeName"))
  {
    m_nodeName = jsonValue.GetString("NodeName");
    m_nodeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputPackageName"))
  {
    m_outputPackageName = jsonValue.GetString("OutputPackageName");
    m_outputPackageNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputPackageVersion"))
  {
    m_outputPackageVersion = jsonValue.GetString("OutputPackageVersion");
    m_outputPackageVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = NodeFromTemplateJobStatusMapper::GetNodeFromTemplateJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TemplateParameters"))
  {
    Aws::Map<Aws::String, JsonView> templateParametersJsonMap = jsonValue.GetObject("TemplateParameters").GetAllObjects();
    for(auto& templateParametersItem : templateParametersJsonMap)
    {
      m_templateParameters[templateParametersItem.first] = templateParametersItem.second.AsString();
    }
    m_templateParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TemplateType"))
  {
    m_templateType = TemplateTypeMapper::GetTemplateTypeForName(jsonValue.GetString("TemplateType"));
    m_templateTypeHasBeenSet = true;
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
