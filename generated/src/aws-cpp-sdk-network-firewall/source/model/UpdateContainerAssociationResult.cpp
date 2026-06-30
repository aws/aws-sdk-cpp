/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-firewall/model/UpdateContainerAssociationResult.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateContainerAssociationResult::UpdateContainerAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateContainerAssociationResult& UpdateContainerAssociationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ContainerAssociationName")) {
    m_containerAssociationName = jsonValue.GetString("ContainerAssociationName");
    m_containerAssociationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContainerAssociationArn")) {
    m_containerAssociationArn = jsonValue.GetString("ContainerAssociationArn");
    m_containerAssociationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = ContainerMonitoringTypeMapper::GetContainerMonitoringTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContainerMonitoringConfigurations")) {
    Aws::Utils::Array<JsonView> containerMonitoringConfigurationsJsonList = jsonValue.GetArray("ContainerMonitoringConfigurations");
    for (unsigned containerMonitoringConfigurationsIndex = 0;
         containerMonitoringConfigurationsIndex < containerMonitoringConfigurationsJsonList.GetLength();
         ++containerMonitoringConfigurationsIndex) {
      m_containerMonitoringConfigurations.push_back(
          containerMonitoringConfigurationsJsonList[containerMonitoringConfigurationsIndex].AsObject());
    }
    m_containerMonitoringConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ContainerAssociationStatusMapper::GetContainerAssociationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdateToken")) {
    m_updateToken = jsonValue.GetString("UpdateToken");
    m_updateTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
