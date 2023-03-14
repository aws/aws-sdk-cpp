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

DescribePackageVersionResult::DescribePackageVersionResult() : 
    m_isLatestPatch(false),
    m_status(PackageVersionStatus::NOT_SET)
{
}

DescribePackageVersionResult::DescribePackageVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isLatestPatch(false),
    m_status(PackageVersionStatus::NOT_SET)
{
  *this = result;
}

DescribePackageVersionResult& DescribePackageVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IsLatestPatch"))
  {
    m_isLatestPatch = jsonValue.GetBool("IsLatestPatch");

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

  if(jsonValue.ValueExists("RegisteredTime"))
  {
    m_registeredTime = jsonValue.GetDouble("RegisteredTime");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = PackageVersionStatusMapper::GetPackageVersionStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusDescription"))
  {
    m_statusDescription = jsonValue.GetString("StatusDescription");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
