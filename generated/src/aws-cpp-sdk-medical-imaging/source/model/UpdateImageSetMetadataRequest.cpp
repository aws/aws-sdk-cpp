/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/UpdateImageSetMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateImageSetMetadataRequest::UpdateImageSetMetadataRequest() : 
    m_datastoreIdHasBeenSet(false),
    m_imageSetIdHasBeenSet(false),
    m_latestVersionIdHasBeenSet(false),
    m_updateImageSetMetadataUpdatesHasBeenSet(false)
{
}

Aws::String UpdateImageSetMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updateImageSetMetadataUpdatesHasBeenSet)
  {
   payload = m_updateImageSetMetadataUpdates.Jsonize();
  }

  return payload.View().WriteReadable();
}

void UpdateImageSetMetadataRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_latestVersionIdHasBeenSet)
    {
      ss << m_latestVersionId;
      uri.AddQueryStringParameter("latestVersion", ss.str());
      ss.str("");
    }

}



