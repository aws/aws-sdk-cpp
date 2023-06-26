/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchGetStandardsControlAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetStandardsControlAssociationsResult::BatchGetStandardsControlAssociationsResult()
{
}

BatchGetStandardsControlAssociationsResult::BatchGetStandardsControlAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetStandardsControlAssociationsResult& BatchGetStandardsControlAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StandardsControlAssociationDetails"))
  {
    Aws::Utils::Array<JsonView> standardsControlAssociationDetailsJsonList = jsonValue.GetArray("StandardsControlAssociationDetails");
    for(unsigned standardsControlAssociationDetailsIndex = 0; standardsControlAssociationDetailsIndex < standardsControlAssociationDetailsJsonList.GetLength(); ++standardsControlAssociationDetailsIndex)
    {
      m_standardsControlAssociationDetails.push_back(standardsControlAssociationDetailsJsonList[standardsControlAssociationDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedAssociations"))
  {
    Aws::Utils::Array<JsonView> unprocessedAssociationsJsonList = jsonValue.GetArray("UnprocessedAssociations");
    for(unsigned unprocessedAssociationsIndex = 0; unprocessedAssociationsIndex < unprocessedAssociationsJsonList.GetLength(); ++unprocessedAssociationsIndex)
    {
      m_unprocessedAssociations.push_back(unprocessedAssociationsJsonList[unprocessedAssociationsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
