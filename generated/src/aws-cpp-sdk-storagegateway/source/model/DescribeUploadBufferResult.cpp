/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeUploadBufferResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeUploadBufferResult::DescribeUploadBufferResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeUploadBufferResult& DescribeUploadBufferResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");
    m_gatewayARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiskIds"))
  {
    Aws::Utils::Array<JsonView> diskIdsJsonList = jsonValue.GetArray("DiskIds");
    for(unsigned diskIdsIndex = 0; diskIdsIndex < diskIdsJsonList.GetLength(); ++diskIdsIndex)
    {
      m_diskIds.push_back(diskIdsJsonList[diskIdsIndex].AsString());
    }
    m_diskIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UploadBufferUsedInBytes"))
  {
    m_uploadBufferUsedInBytes = jsonValue.GetInt64("UploadBufferUsedInBytes");
    m_uploadBufferUsedInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UploadBufferAllocatedInBytes"))
  {
    m_uploadBufferAllocatedInBytes = jsonValue.GetInt64("UploadBufferAllocatedInBytes");
    m_uploadBufferAllocatedInBytesHasBeenSet = true;
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
