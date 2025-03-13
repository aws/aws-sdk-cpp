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

DescribeNodeResult::DescribeNodeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeNodeResult& DescribeNodeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AssetName"))
  {
    m_assetName = jsonValue.GetString("AssetName");
    m_assetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Category"))
  {
    m_category = NodeCategoryMapper::GetNodeCategoryForName(jsonValue.GetString("Category"));
    m_categoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeId"))
  {
    m_nodeId = jsonValue.GetString("NodeId");
    m_nodeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeInterface"))
  {
    m_nodeInterface = jsonValue.GetObject("NodeInterface");
    m_nodeInterfaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OwnerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("OwnerAccount");
    m_ownerAccountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageArn"))
  {
    m_packageArn = jsonValue.GetString("PackageArn");
    m_packageArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageId"))
  {
    m_packageId = jsonValue.GetString("PackageId");
    m_packageIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageName"))
  {
    m_packageName = jsonValue.GetString("PackageName");
    m_packageNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageVersion"))
  {
    m_packageVersion = jsonValue.GetString("PackageVersion");
    m_packageVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PatchVersion"))
  {
    m_patchVersion = jsonValue.GetString("PatchVersion");
    m_patchVersionHasBeenSet = true;
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
