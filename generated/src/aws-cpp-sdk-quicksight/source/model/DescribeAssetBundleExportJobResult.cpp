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

DescribeAssetBundleExportJobResult::DescribeAssetBundleExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAssetBundleExportJobResult& DescribeAssetBundleExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = AssetBundleExportJobStatusMapper::GetAssetBundleExportJobStatusForName(jsonValue.GetString("JobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DownloadUrl"))
  {
    m_downloadUrl = jsonValue.GetString("DownloadUrl");
    m_downloadUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssetBundleExportJobId"))
  {
    m_assetBundleExportJobId = jsonValue.GetString("AssetBundleExportJobId");
    m_assetBundleExportJobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceArns"))
  {
    Aws::Utils::Array<JsonView> resourceArnsJsonList = jsonValue.GetArray("ResourceArns");
    for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
    {
      m_resourceArns.push_back(resourceArnsJsonList[resourceArnsIndex].AsString());
    }
    m_resourceArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeAllDependencies"))
  {
    m_includeAllDependencies = jsonValue.GetBool("IncludeAllDependencies");
    m_includeAllDependenciesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportFormat"))
  {
    m_exportFormat = AssetBundleExportFormatMapper::GetAssetBundleExportFormatForName(jsonValue.GetString("ExportFormat"));
    m_exportFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CloudFormationOverridePropertyConfiguration"))
  {
    m_cloudFormationOverridePropertyConfiguration = jsonValue.GetObject("CloudFormationOverridePropertyConfiguration");
    m_cloudFormationOverridePropertyConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludePermissions"))
  {
    m_includePermissions = jsonValue.GetBool("IncludePermissions");
    m_includePermissionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeTags"))
  {
    m_includeTags = jsonValue.GetBool("IncludeTags");
    m_includeTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidationStrategy"))
  {
    m_validationStrategy = jsonValue.GetObject("ValidationStrategy");
    m_validationStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Warnings"))
  {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("Warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsObject());
    }
    m_warningsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeFolderMemberships"))
  {
    m_includeFolderMemberships = jsonValue.GetBool("IncludeFolderMemberships");
    m_includeFolderMembershipsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeFolderMembers"))
  {
    m_includeFolderMembers = IncludeFolderMembersMapper::GetIncludeFolderMembersForName(jsonValue.GetString("IncludeFolderMembers"));
    m_includeFolderMembersHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}
