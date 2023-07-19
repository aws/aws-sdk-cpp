/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/GetImageSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetImageSetRequest::GetImageSetRequest() : 
    m_datastoreIdHasBeenSet(false),
    m_imageSetIdHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

Aws::String GetImageSetRequest::SerializePayload() const
{
  return {};
}

void GetImageSetRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_versionIdHasBeenSet)
    {
      ss << m_versionId;
      uri.AddQueryStringParameter("version", ss.str());
      ss.str("");
    }

}



