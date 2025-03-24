/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribePatchGroupStateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePatchGroupStateResult::DescribePatchGroupStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePatchGroupStateResult& DescribePatchGroupStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Instances"))
  {
    m_instances = jsonValue.GetInteger("Instances");
    m_instancesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesWithInstalledPatches"))
  {
    m_instancesWithInstalledPatches = jsonValue.GetInteger("InstancesWithInstalledPatches");
    m_instancesWithInstalledPatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesWithInstalledOtherPatches"))
  {
    m_instancesWithInstalledOtherPatches = jsonValue.GetInteger("InstancesWithInstalledOtherPatches");
    m_instancesWithInstalledOtherPatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesWithInstalledPendingRebootPatches"))
  {
    m_instancesWithInstalledPendingRebootPatches = jsonValue.GetInteger("InstancesWithInstalledPendingRebootPatches");
    m_instancesWithInstalledPendingRebootPatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesWithInstalledRejectedPatches"))
  {
    m_instancesWithInstalledRejectedPatches = jsonValue.GetInteger("InstancesWithInstalledRejectedPatches");
    m_instancesWithInstalledRejectedPatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesWithMissingPatches"))
  {
    m_instancesWithMissingPatches = jsonValue.GetInteger("InstancesWithMissingPatches");
    m_instancesWithMissingPatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesWithFailedPatches"))
  {
    m_instancesWithFailedPatches = jsonValue.GetInteger("InstancesWithFailedPatches");
    m_instancesWithFailedPatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesWithNotApplicablePatches"))
  {
    m_instancesWithNotApplicablePatches = jsonValue.GetInteger("InstancesWithNotApplicablePatches");
    m_instancesWithNotApplicablePatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesWithUnreportedNotApplicablePatches"))
  {
    m_instancesWithUnreportedNotApplicablePatches = jsonValue.GetInteger("InstancesWithUnreportedNotApplicablePatches");
    m_instancesWithUnreportedNotApplicablePatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesWithCriticalNonCompliantPatches"))
  {
    m_instancesWithCriticalNonCompliantPatches = jsonValue.GetInteger("InstancesWithCriticalNonCompliantPatches");
    m_instancesWithCriticalNonCompliantPatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesWithSecurityNonCompliantPatches"))
  {
    m_instancesWithSecurityNonCompliantPatches = jsonValue.GetInteger("InstancesWithSecurityNonCompliantPatches");
    m_instancesWithSecurityNonCompliantPatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesWithOtherNonCompliantPatches"))
  {
    m_instancesWithOtherNonCompliantPatches = jsonValue.GetInteger("InstancesWithOtherNonCompliantPatches");
    m_instancesWithOtherNonCompliantPatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstancesWithAvailableSecurityUpdates"))
  {
    m_instancesWithAvailableSecurityUpdates = jsonValue.GetInteger("InstancesWithAvailableSecurityUpdates");
    m_instancesWithAvailableSecurityUpdatesHasBeenSet = true;
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
