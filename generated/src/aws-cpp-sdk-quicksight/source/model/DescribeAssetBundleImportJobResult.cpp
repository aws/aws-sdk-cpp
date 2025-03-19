/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeAssetBundleImportJobResult.h>
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

DescribeAssetBundleImportJobResult::DescribeAssetBundleImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAssetBundleImportJobResult& DescribeAssetBundleImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = AssetBundleImportJobStatusMapper::GetAssetBundleImportJobStatusForName(jsonValue.GetString("JobStatus"));
    m_jobStatusHasBeenSet = true;
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
  if(jsonValue.ValueExists("RollbackErrors"))
  {
    Aws::Utils::Array<JsonView> rollbackErrorsJsonList = jsonValue.GetArray("RollbackErrors");
    for(unsigned rollbackErrorsIndex = 0; rollbackErrorsIndex < rollbackErrorsJsonList.GetLength(); ++rollbackErrorsIndex)
    {
      m_rollbackErrors.push_back(rollbackErrorsJsonList[rollbackErrorsIndex].AsObject());
    }
    m_rollbackErrorsHasBeenSet = true;
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
  if(jsonValue.ValueExists("AssetBundleImportJobId"))
  {
    m_assetBundleImportJobId = jsonValue.GetString("AssetBundleImportJobId");
    m_assetBundleImportJobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssetBundleImportSource"))
  {
    m_assetBundleImportSource = jsonValue.GetObject("AssetBundleImportSource");
    m_assetBundleImportSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OverrideParameters"))
  {
    m_overrideParameters = jsonValue.GetObject("OverrideParameters");
    m_overrideParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureAction"))
  {
    m_failureAction = AssetBundleImportFailureActionMapper::GetAssetBundleImportFailureActionForName(jsonValue.GetString("FailureAction"));
    m_failureActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OverridePermissions"))
  {
    m_overridePermissions = jsonValue.GetObject("OverridePermissions");
    m_overridePermissionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OverrideTags"))
  {
    m_overrideTags = jsonValue.GetObject("OverrideTags");
    m_overrideTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OverrideValidationStrategy"))
  {
    m_overrideValidationStrategy = jsonValue.GetObject("OverrideValidationStrategy");
    m_overrideValidationStrategyHasBeenSet = true;
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
