/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/GetCodeBindingSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetCodeBindingSourceRequest::GetCodeBindingSourceRequest() : 
    m_languageHasBeenSet(false),
    m_registryNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_schemaVersionHasBeenSet(false)
{
}

Aws::String GetCodeBindingSourceRequest::SerializePayload() const
{
  return {};
}

void GetCodeBindingSourceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_schemaVersionHasBeenSet)
    {
      ss << m_schemaVersion;
      uri.AddQueryStringParameter("schemaVersion", ss.str());
      ss.str("");
    }

}



