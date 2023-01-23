/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/DescribeDRTAccessResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDRTAccessResult::DescribeDRTAccessResult()
{
}

DescribeDRTAccessResult::DescribeDRTAccessResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDRTAccessResult& DescribeDRTAccessResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("LogBucketList"))
  {
    Aws::Utils::Array<JsonView> logBucketListJsonList = jsonValue.GetArray("LogBucketList");
    for(unsigned logBucketListIndex = 0; logBucketListIndex < logBucketListJsonList.GetLength(); ++logBucketListIndex)
    {
      m_logBucketList.push_back(logBucketListJsonList[logBucketListIndex].AsString());
    }
  }



  return *this;
}
