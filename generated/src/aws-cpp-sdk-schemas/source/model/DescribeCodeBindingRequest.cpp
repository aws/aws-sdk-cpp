/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/DescribeCodeBindingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeCodeBindingRequest::DescribeCodeBindingRequest() : 
    m_languageHasBeenSet(false),
    m_registryNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_schemaVersionHasBeenSet(false)
{
}

Aws::String DescribeCodeBindingRequest::SerializePayload() const
{
  return {};
}

void DescribeCodeBindingRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_schemaVersionHasBeenSet)
    {
      ss << m_schemaVersion;
      uri.AddQueryStringParameter("schemaVersion", ss.str());
      ss.str("");
    }

}



