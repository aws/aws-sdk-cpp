/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetLensRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetLensRequest::GetLensRequest() : 
    m_lensAliasHasBeenSet(false),
    m_lensVersionHasBeenSet(false)
{
}

Aws::String GetLensRequest::SerializePayload() const
{
  return {};
}

void GetLensRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_lensVersionHasBeenSet)
    {
      ss << m_lensVersion;
      uri.AddQueryStringParameter("LensVersion", ss.str());
      ss.str("");
    }

}



