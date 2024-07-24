/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/CopyImageSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CopyImageSetRequest::CopyImageSetRequest() : 
    m_datastoreIdHasBeenSet(false),
    m_sourceImageSetIdHasBeenSet(false),
    m_copyImageSetInformationHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String CopyImageSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_copyImageSetInformationHasBeenSet)
  {
   payload = m_copyImageSetInformation.Jsonize();
  }

  return payload.View().WriteReadable();
}

void CopyImageSetRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_forceHasBeenSet)
    {
      ss << m_force;
      uri.AddQueryStringParameter("force", ss.str());
      ss.str("");
    }

}



