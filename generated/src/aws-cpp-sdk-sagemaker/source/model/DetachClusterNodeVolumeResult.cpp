/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DetachClusterNodeVolumeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetachClusterNodeVolumeResult::DetachClusterNodeVolumeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DetachClusterNodeVolumeResult& DetachClusterNodeVolumeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeId"))
  {
    m_nodeId = jsonValue.GetString("NodeId");
    m_nodeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeId"))
  {
    m_volumeId = jsonValue.GetString("VolumeId");
    m_volumeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttachTime"))
  {
    m_attachTime = jsonValue.GetDouble("AttachTime");
    m_attachTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = VolumeAttachmentStatusMapper::GetVolumeAttachmentStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");
    m_deviceNameHasBeenSet = true;
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
