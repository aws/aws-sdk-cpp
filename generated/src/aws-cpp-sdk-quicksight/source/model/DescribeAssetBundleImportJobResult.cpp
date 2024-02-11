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

DescribeAssetBundleImportJobResult::DescribeAssetBundleImportJobResult() : 
    m_jobStatus(AssetBundleImportJobStatus::NOT_SET),
    m_failureAction(AssetBundleImportFailureAction::NOT_SET),
    m_status(0)
{
}

DescribeAssetBundleImportJobResult::DescribeAssetBundleImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(AssetBundleImportJobStatus::NOT_SET),
    m_failureAction(AssetBundleImportFailureAction::NOT_SET),
    m_status(0)
{
  *this = result;
}

DescribeAssetBundleImportJobResult& DescribeAssetBundleImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = AssetBundleImportJobStatusMapper::GetAssetBundleImportJobStatusForName(jsonValue.GetString("JobStatus"));

  }

  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("RollbackErrors"))
  {
    Aws::Utils::Array<JsonView> rollbackErrorsJsonList = jsonValue.GetArray("RollbackErrors");
    for(unsigned rollbackErrorsIndex = 0; rollbackErrorsIndex < rollbackErrorsJsonList.GetLength(); ++rollbackErrorsIndex)
    {
      m_rollbackErrors.push_back(rollbackErrorsJsonList[rollbackErrorsIndex].AsObject());
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

  if(jsonValue.ValueExists("AssetBundleImportJobId"))
  {
    m_assetBundleImportJobId = jsonValue.GetString("AssetBundleImportJobId");

  }

  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");

  }

  if(jsonValue.ValueExists("AssetBundleImportSource"))
  {
    m_assetBundleImportSource = jsonValue.GetObject("AssetBundleImportSource");

  }

  if(jsonValue.ValueExists("OverrideParameters"))
  {
    m_overrideParameters = jsonValue.GetObject("OverrideParameters");

  }

  if(jsonValue.ValueExists("FailureAction"))
  {
    m_failureAction = AssetBundleImportFailureActionMapper::GetAssetBundleImportFailureActionForName(jsonValue.GetString("FailureAction"));

  }

  if(jsonValue.ValueExists("OverridePermissions"))
  {
    m_overridePermissions = jsonValue.GetObject("OverridePermissions");

  }

  if(jsonValue.ValueExists("OverrideTags"))
  {
    m_overrideTags = jsonValue.GetObject("OverrideTags");

  }

  if(jsonValue.ValueExists("OverrideValidationStrategy"))
  {
    m_overrideValidationStrategy = jsonValue.GetObject("OverrideValidationStrategy");

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
