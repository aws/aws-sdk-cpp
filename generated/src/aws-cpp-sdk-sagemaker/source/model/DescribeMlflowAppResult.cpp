/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/DescribeMlflowAppResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMlflowAppResult::DescribeMlflowAppResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeMlflowAppResult& DescribeMlflowAppResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ArtifactStoreUri")) {
    m_artifactStoreUri = jsonValue.GetString("ArtifactStoreUri");
    m_artifactStoreUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MlflowVersion")) {
    m_mlflowVersion = jsonValue.GetString("MlflowVersion");
    m_mlflowVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = MlflowAppStatusMapper::GetMlflowAppStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelRegistrationMode")) {
    m_modelRegistrationMode = ModelRegistrationModeMapper::GetModelRegistrationModeForName(jsonValue.GetString("ModelRegistrationMode"));
    m_modelRegistrationModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccountDefaultStatus")) {
    m_accountDefaultStatus = AccountDefaultStatusMapper::GetAccountDefaultStatusForName(jsonValue.GetString("AccountDefaultStatus"));
    m_accountDefaultStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultDomainIdList")) {
    Aws::Utils::Array<JsonView> defaultDomainIdListJsonList = jsonValue.GetArray("DefaultDomainIdList");
    for (unsigned defaultDomainIdListIndex = 0; defaultDomainIdListIndex < defaultDomainIdListJsonList.GetLength();
         ++defaultDomainIdListIndex) {
      m_defaultDomainIdList.push_back(defaultDomainIdListJsonList[defaultDomainIdListIndex].AsString());
    }
    m_defaultDomainIdListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedBy")) {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedBy")) {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WeeklyMaintenanceWindowStart")) {
    m_weeklyMaintenanceWindowStart = jsonValue.GetString("WeeklyMaintenanceWindowStart");
    m_weeklyMaintenanceWindowStartHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaintenanceStatus")) {
    m_maintenanceStatus = MaintenanceStatusMapper::GetMaintenanceStatusForName(jsonValue.GetString("MaintenanceStatus"));
    m_maintenanceStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
