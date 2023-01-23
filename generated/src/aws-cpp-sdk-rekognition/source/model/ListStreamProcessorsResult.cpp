/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ListStreamProcessorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStreamProcessorsResult::ListStreamProcessorsResult()
{
}

ListStreamProcessorsResult::ListStreamProcessorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStreamProcessorsResult& ListStreamProcessorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("StreamProcessors"))
  {
    Aws::Utils::Array<JsonView> streamProcessorsJsonList = jsonValue.GetArray("StreamProcessors");
    for(unsigned streamProcessorsIndex = 0; streamProcessorsIndex < streamProcessorsJsonList.GetLength(); ++streamProcessorsIndex)
    {
      m_streamProcessors.push_back(streamProcessorsJsonList[streamProcessorsIndex].AsObject());
    }
  }



  return *this;
}
