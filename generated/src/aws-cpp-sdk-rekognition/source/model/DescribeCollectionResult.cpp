/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DescribeCollectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCollectionResult::DescribeCollectionResult() : 
    m_faceCount(0),
    m_userCount(0)
{
}

DescribeCollectionResult::DescribeCollectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_faceCount(0),
    m_userCount(0)
{
  *this = result;
}

DescribeCollectionResult& DescribeCollectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FaceCount"))
  {
    m_faceCount = jsonValue.GetInt64("FaceCount");

  }

  if(jsonValue.ValueExists("FaceModelVersion"))
  {
    m_faceModelVersion = jsonValue.GetString("FaceModelVersion");

  }

  if(jsonValue.ValueExists("CollectionARN"))
  {
    m_collectionARN = jsonValue.GetString("CollectionARN");

  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

  }

  if(jsonValue.ValueExists("UserCount"))
  {
    m_userCount = jsonValue.GetInt64("UserCount");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
