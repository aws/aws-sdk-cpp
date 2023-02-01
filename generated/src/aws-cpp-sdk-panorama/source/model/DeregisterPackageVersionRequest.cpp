/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DeregisterPackageVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeregisterPackageVersionRequest::DeregisterPackageVersionRequest() : 
    m_ownerAccountHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_patchVersionHasBeenSet(false),
    m_updatedLatestPatchVersionHasBeenSet(false)
{
}

Aws::String DeregisterPackageVersionRequest::SerializePayload() const
{
  return {};
}

void DeregisterPackageVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_ownerAccountHasBeenSet)
    {
      ss << m_ownerAccount;
      uri.AddQueryStringParameter("OwnerAccount", ss.str());
      ss.str("");
    }

    if(m_updatedLatestPatchVersionHasBeenSet)
    {
      ss << m_updatedLatestPatchVersion;
      uri.AddQueryStringParameter("UpdatedLatestPatchVersion", ss.str());
      ss.str("");
    }

}



