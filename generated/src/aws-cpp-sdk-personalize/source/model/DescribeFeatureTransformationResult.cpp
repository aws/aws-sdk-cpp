/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DescribeFeatureTransformationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFeatureTransformationResult::DescribeFeatureTransformationResult()
{
}

DescribeFeatureTransformationResult::DescribeFeatureTransformationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFeatureTransformationResult& DescribeFeatureTransformationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("featureTransformation"))
  {
    m_featureTransformation = jsonValue.GetObject("featureTransformation");

  }



  return *this;
}
