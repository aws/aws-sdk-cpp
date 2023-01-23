/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ListVolumeRecoveryPointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVolumeRecoveryPointsResult::ListVolumeRecoveryPointsResult()
{
}

ListVolumeRecoveryPointsResult::ListVolumeRecoveryPointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVolumeRecoveryPointsResult& ListVolumeRecoveryPointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("VolumeRecoveryPointInfos"))
  {
    Aws::Utils::Array<JsonView> volumeRecoveryPointInfosJsonList = jsonValue.GetArray("VolumeRecoveryPointInfos");
    for(unsigned volumeRecoveryPointInfosIndex = 0; volumeRecoveryPointInfosIndex < volumeRecoveryPointInfosJsonList.GetLength(); ++volumeRecoveryPointInfosIndex)
    {
      m_volumeRecoveryPointInfos.push_back(volumeRecoveryPointInfosJsonList[volumeRecoveryPointInfosIndex].AsObject());
    }
  }



  return *this;
}
