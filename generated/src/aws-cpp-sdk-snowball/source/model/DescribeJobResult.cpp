﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/DescribeJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeJobResult::DescribeJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeJobResult& DescribeJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobMetadata"))
  {
    m_jobMetadata = jsonValue.GetObject("JobMetadata");
    m_jobMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubJobMetadata"))
  {
    Aws::Utils::Array<JsonView> subJobMetadataJsonList = jsonValue.GetArray("SubJobMetadata");
    for(unsigned subJobMetadataIndex = 0; subJobMetadataIndex < subJobMetadataJsonList.GetLength(); ++subJobMetadataIndex)
    {
      m_subJobMetadata.push_back(subJobMetadataJsonList[subJobMetadataIndex].AsObject());
    }
    m_subJobMetadataHasBeenSet = true;
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
