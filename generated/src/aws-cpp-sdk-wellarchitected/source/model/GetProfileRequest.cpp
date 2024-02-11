/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetProfileRequest::GetProfileRequest() : 
    m_profileArnHasBeenSet(false),
    m_profileVersionHasBeenSet(false)
{
}

Aws::String GetProfileRequest::SerializePayload() const
{
  return {};
}

void GetProfileRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_profileVersionHasBeenSet)
    {
      ss << m_profileVersion;
      uri.AddQueryStringParameter("ProfileVersion", ss.str());
      ss.str("");
    }

}



