/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeEffectivePatchesForPatchBaselineResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEffectivePatchesForPatchBaselineResult::DescribeEffectivePatchesForPatchBaselineResult()
{
}

DescribeEffectivePatchesForPatchBaselineResult::DescribeEffectivePatchesForPatchBaselineResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEffectivePatchesForPatchBaselineResult& DescribeEffectivePatchesForPatchBaselineResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EffectivePatches"))
  {
    Aws::Utils::Array<JsonView> effectivePatchesJsonList = jsonValue.GetArray("EffectivePatches");
    for(unsigned effectivePatchesIndex = 0; effectivePatchesIndex < effectivePatchesJsonList.GetLength(); ++effectivePatchesIndex)
    {
      m_effectivePatches.push_back(effectivePatchesJsonList[effectivePatchesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
