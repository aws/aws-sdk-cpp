/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribeNodeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNodeResult::DescribeNodeResult() : 
    m_category(NodeCategory::NOT_SET)
{
}

DescribeNodeResult::DescribeNodeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_category(NodeCategory::NOT_SET)
{
  *this = result;
}

DescribeNodeResult& DescribeNodeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AssetName"))
  {
    m_assetName = jsonValue.GetString("AssetName");

  }

  if(jsonValue.ValueExists("Category"))
  {
    m_category = NodeCategoryMapper::GetNodeCategoryForName(jsonValue.GetString("Category"));

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("NodeId"))
  {
    m_nodeId = jsonValue.GetString("NodeId");

  }

  if(jsonValue.ValueExists("NodeInterface"))
  {
    m_nodeInterface = jsonValue.GetObject("NodeInterface");

  }

  if(jsonValue.ValueExists("OwnerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("OwnerAccount");

  }

  if(jsonValue.ValueExists("PackageArn"))
  {
    m_packageArn = jsonValue.GetString("PackageArn");

  }

  if(jsonValue.ValueExists("PackageId"))
  {
    m_packageId = jsonValue.GetString("PackageId");

  }

  if(jsonValue.ValueExists("PackageName"))
  {
    m_packageName = jsonValue.GetString("PackageName");

  }

  if(jsonValue.ValueExists("PackageVersion"))
  {
    m_packageVersion = jsonValue.GetString("PackageVersion");

  }

  if(jsonValue.ValueExists("PatchVersion"))
  {
    m_patchVersion = jsonValue.GetString("PatchVersion");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
