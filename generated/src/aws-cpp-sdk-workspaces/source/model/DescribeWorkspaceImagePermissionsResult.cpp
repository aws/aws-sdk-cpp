/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspaceImagePermissionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeWorkspaceImagePermissionsResult::DescribeWorkspaceImagePermissionsResult()
{
}

DescribeWorkspaceImagePermissionsResult::DescribeWorkspaceImagePermissionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeWorkspaceImagePermissionsResult& DescribeWorkspaceImagePermissionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ImageId"))
  {
    m_imageId = jsonValue.GetString("ImageId");

  }

  if(jsonValue.ValueExists("ImagePermissions"))
  {
    Aws::Utils::Array<JsonView> imagePermissionsJsonList = jsonValue.GetArray("ImagePermissions");
    for(unsigned imagePermissionsIndex = 0; imagePermissionsIndex < imagePermissionsJsonList.GetLength(); ++imagePermissionsIndex)
    {
      m_imagePermissions.push_back(imagePermissionsJsonList[imagePermissionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
