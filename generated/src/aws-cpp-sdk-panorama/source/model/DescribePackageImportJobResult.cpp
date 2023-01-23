/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribePackageImportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePackageImportJobResult::DescribePackageImportJobResult() : 
    m_jobType(PackageImportJobType::NOT_SET),
    m_status(PackageImportJobStatus::NOT_SET)
{
}

DescribePackageImportJobResult::DescribePackageImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobType(PackageImportJobType::NOT_SET),
    m_status(PackageImportJobStatus::NOT_SET)
{
  *this = result;
}

DescribePackageImportJobResult& DescribePackageImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClientToken"))
  {
    m_clientToken = jsonValue.GetString("ClientToken");

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("InputConfig"))
  {
    m_inputConfig = jsonValue.GetObject("InputConfig");

  }

  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

  }

  if(jsonValue.ValueExists("JobTags"))
  {
    Aws::Utils::Array<JsonView> jobTagsJsonList = jsonValue.GetArray("JobTags");
    for(unsigned jobTagsIndex = 0; jobTagsIndex < jobTagsJsonList.GetLength(); ++jobTagsIndex)
    {
      m_jobTags.push_back(jobTagsJsonList[jobTagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("JobType"))
  {
    m_jobType = PackageImportJobTypeMapper::GetPackageImportJobTypeForName(jsonValue.GetString("JobType"));

  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

  }

  if(jsonValue.ValueExists("Output"))
  {
    m_output = jsonValue.GetObject("Output");

  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = PackageImportJobStatusMapper::GetPackageImportJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }



  return *this;
}
