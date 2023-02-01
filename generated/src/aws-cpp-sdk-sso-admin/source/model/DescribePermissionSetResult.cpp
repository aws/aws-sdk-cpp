/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DescribePermissionSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePermissionSetResult::DescribePermissionSetResult()
{
}

DescribePermissionSetResult::DescribePermissionSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePermissionSetResult& DescribePermissionSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PermissionSet"))
  {
    m_permissionSet = jsonValue.GetObject("PermissionSet");

  }



  return *this;
}
