/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeCachediSCSIVolumesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCachediSCSIVolumesResult::DescribeCachediSCSIVolumesResult()
{
}

DescribeCachediSCSIVolumesResult::DescribeCachediSCSIVolumesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCachediSCSIVolumesResult& DescribeCachediSCSIVolumesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CachediSCSIVolumes"))
  {
    Aws::Utils::Array<JsonView> cachediSCSIVolumesJsonList = jsonValue.GetArray("CachediSCSIVolumes");
    for(unsigned cachediSCSIVolumesIndex = 0; cachediSCSIVolumesIndex < cachediSCSIVolumesJsonList.GetLength(); ++cachediSCSIVolumesIndex)
    {
      m_cachediSCSIVolumes.push_back(cachediSCSIVolumesJsonList[cachediSCSIVolumesIndex].AsObject());
    }
  }



  return *this;
}
