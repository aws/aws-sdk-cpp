/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListFeatureGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFeatureGroupsResult::ListFeatureGroupsResult()
{
}

ListFeatureGroupsResult::ListFeatureGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFeatureGroupsResult& ListFeatureGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FeatureGroupSummaries"))
  {
    Aws::Utils::Array<JsonView> featureGroupSummariesJsonList = jsonValue.GetArray("FeatureGroupSummaries");
    for(unsigned featureGroupSummariesIndex = 0; featureGroupSummariesIndex < featureGroupSummariesJsonList.GetLength(); ++featureGroupSummariesIndex)
    {
      m_featureGroupSummaries.push_back(featureGroupSummariesJsonList[featureGroupSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
