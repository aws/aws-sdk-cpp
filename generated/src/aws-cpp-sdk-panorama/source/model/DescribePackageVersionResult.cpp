/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribePackageVersionResult.h>
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

DescribePackageVersionResult::DescribePackageVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePackageVersionResult& DescribePackageVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IsLatestPatch"))
  {
    m_isLatestPatch = jsonValue.GetBool("IsLatestPatch");
    m_isLatestPatchHasBeenSet = true;
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
  if(jsonValue.ValueExists("RegisteredTime"))
  {
    m_registeredTime = jsonValue.GetDouble("RegisteredTime");
    m_registeredTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = PackageVersionStatusMapper::GetPackageVersionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusDescription"))
  {
    m_statusDescription = jsonValue.GetString("StatusDescription");
    m_statusDescriptionHasBeenSet = true;
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
