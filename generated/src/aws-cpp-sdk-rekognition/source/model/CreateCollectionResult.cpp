/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CreateCollectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateCollectionResult::CreateCollectionResult() : 
    m_statusCode(0)
{
}

CreateCollectionResult::CreateCollectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_statusCode(0)
{
  *this = result;
}

CreateCollectionResult& CreateCollectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = jsonValue.GetInteger("StatusCode");

  }

  if(jsonValue.ValueExists("CollectionArn"))
  {
    m_collectionArn = jsonValue.GetString("CollectionArn");

  }

  if(jsonValue.ValueExists("FaceModelVersion"))
  {
    m_faceModelVersion = jsonValue.GetString("FaceModelVersion");

  }



  return *this;
}
