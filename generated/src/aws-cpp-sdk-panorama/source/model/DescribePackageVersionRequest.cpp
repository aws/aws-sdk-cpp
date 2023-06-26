/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribePackageVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribePackageVersionRequest::DescribePackageVersionRequest() : 
    m_ownerAccountHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_patchVersionHasBeenSet(false)
{
}

Aws::String DescribePackageVersionRequest::SerializePayload() const
{
  return {};
}

void DescribePackageVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_ownerAccountHasBeenSet)
    {
      ss << m_ownerAccount;
      uri.AddQueryStringParameter("OwnerAccount", ss.str());
      ss.str("");
    }

    if(m_patchVersionHasBeenSet)
    {
      ss << m_patchVersion;
      uri.AddQueryStringParameter("PatchVersion", ss.str());
      ss.str("");
    }

}



