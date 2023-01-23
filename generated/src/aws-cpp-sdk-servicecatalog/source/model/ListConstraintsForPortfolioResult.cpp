/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListConstraintsForPortfolioResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConstraintsForPortfolioResult::ListConstraintsForPortfolioResult()
{
}

ListConstraintsForPortfolioResult::ListConstraintsForPortfolioResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConstraintsForPortfolioResult& ListConstraintsForPortfolioResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConstraintDetails"))
  {
    Aws::Utils::Array<JsonView> constraintDetailsJsonList = jsonValue.GetArray("ConstraintDetails");
    for(unsigned constraintDetailsIndex = 0; constraintDetailsIndex < constraintDetailsJsonList.GetLength(); ++constraintDetailsIndex)
    {
      m_constraintDetails.push_back(constraintDetailsJsonList[constraintDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
