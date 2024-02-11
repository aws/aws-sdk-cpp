/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/DescribeEntityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEntityResult::DescribeEntityResult()
{
}

DescribeEntityResult::DescribeEntityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEntityResult& DescribeEntityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EntityType"))
  {
    m_entityType = jsonValue.GetString("EntityType");

  }

  if(jsonValue.ValueExists("EntityIdentifier"))
  {
    m_entityIdentifier = jsonValue.GetString("EntityIdentifier");

  }

  if(jsonValue.ValueExists("EntityArn"))
  {
    m_entityArn = jsonValue.GetString("EntityArn");

  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

  }

  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetString("Details");

  }

  if(jsonValue.ValueExists("DetailsDocument"))
  {
    m_detailsDocument = jsonValue.GetObject("DetailsDocument");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
