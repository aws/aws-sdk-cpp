/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3files/model/UpdateMountTargetResult.h>

#include <utility>

using namespace Aws::S3Files::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateMountTargetResult::UpdateMountTargetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateMountTargetResult& UpdateMountTargetResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("availabilityZoneId")) {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerId")) {
    m_ownerId = jsonValue.GetString("ownerId");
    m_ownerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mountTargetId")) {
    m_mountTargetId = jsonValue.GetString("mountTargetId");
    m_mountTargetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileSystemId")) {
    m_fileSystemId = jsonValue.GetString("fileSystemId");
    m_fileSystemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetId")) {
    m_subnetId = jsonValue.GetString("subnetId");
    m_subnetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipv4Address")) {
    m_ipv4Address = jsonValue.GetString("ipv4Address");
    m_ipv4AddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipv6Address")) {
    m_ipv6Address = jsonValue.GetString("ipv6Address");
    m_ipv6AddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkInterfaceId")) {
    m_networkInterfaceId = jsonValue.GetString("networkInterfaceId");
    m_networkInterfaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcId")) {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroups")) {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for (unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex) {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = LifeCycleStateMapper::GetLifeCycleStateForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusMessage")) {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
