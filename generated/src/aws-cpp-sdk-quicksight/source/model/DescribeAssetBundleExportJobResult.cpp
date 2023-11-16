/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeAssetBundleExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAssetBundleExportJobResult::DescribeAssetBundleExportJobResult() : 
    m_jobStatus(AssetBundleExportJobStatus::NOT_SET),
    m_includeAllDependencies(false),
    m_exportFormat(AssetBundleExportFormat::NOT_SET),
    m_status(0),
    m_includePermissions(false),
    m_includeTags(false)
{
}

DescribeAssetBundleExportJobResult::DescribeAssetBundleExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(AssetBundleExportJobStatus::NOT_SET),
    m_includeAllDependencies(false),
    m_exportFormat(AssetBundleExportFormat::NOT_SET),
    m_status(0),
    m_includePermissions(false),
    m_includeTags(false)
{
  *this = result;
}

DescribeAssetBundleExportJobResult& DescribeAssetBundleExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = AssetBundleExportJobStatusMapper::GetAssetBundleExportJobStatusForName(jsonValue.GetString("JobStatus"));

  }

  if(jsonValue.ValueExists("DownloadUrl"))
  {
    m_downloadUrl = jsonValue.GetString("DownloadUrl");

  }

  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("AssetBundleExportJobId"))
  {
    m_assetBundleExportJobId = jsonValue.GetString("AssetBundleExportJobId");

  }

  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");

  }

  if(jsonValue.ValueExists("ResourceArns"))
  {
    Aws::Utils::Array<JsonView> resourceArnsJsonList = jsonValue.GetArray("ResourceArns");
    for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
    {
      m_resourceArns.push_back(resourceArnsJsonList[resourceArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("IncludeAllDependencies"))
  {
    m_includeAllDependencies = jsonValue.GetBool("IncludeAllDependencies");

  }

  if(jsonValue.ValueExists("ExportFormat"))
  {
    m_exportFormat = AssetBundleExportFormatMapper::GetAssetBundleExportFormatForName(jsonValue.GetString("ExportFormat"));

  }

  if(jsonValue.ValueExists("CloudFormationOverridePropertyConfiguration"))
  {
    m_cloudFormationOverridePropertyConfiguration = jsonValue.GetObject("CloudFormationOverridePropertyConfiguration");

  }

  if(jsonValue.ValueExists("IncludePermissions"))
  {
    m_includePermissions = jsonValue.GetBool("IncludePermissions");

  }

  if(jsonValue.ValueExists("IncludeTags"))
  {
    m_includeTags = jsonValue.GetBool("IncludeTags");

  }

  if(jsonValue.ValueExists("ValidationStrategy"))
  {
    m_validationStrategy = jsonValue.GetObject("ValidationStrategy");

  }

  if(jsonValue.ValueExists("Warnings"))
  {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("Warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
