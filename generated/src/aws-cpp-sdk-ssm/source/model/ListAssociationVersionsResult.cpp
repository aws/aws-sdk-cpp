/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ListAssociationVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssociationVersionsResult::ListAssociationVersionsResult()
{
}

ListAssociationVersionsResult::ListAssociationVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssociationVersionsResult& ListAssociationVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AssociationVersions"))
  {
    Aws::Utils::Array<JsonView> associationVersionsJsonList = jsonValue.GetArray("AssociationVersions");
    for(unsigned associationVersionsIndex = 0; associationVersionsIndex < associationVersionsJsonList.GetLength(); ++associationVersionsIndex)
    {
      m_associationVersions.push_back(associationVersionsJsonList[associationVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
