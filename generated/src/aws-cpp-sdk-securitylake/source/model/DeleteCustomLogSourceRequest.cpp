﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DeleteCustomLogSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteCustomLogSourceRequest::DeleteCustomLogSourceRequest() : 
    m_sourceNameHasBeenSet(false),
    m_sourceVersionHasBeenSet(false)
{
}

Aws::String DeleteCustomLogSourceRequest::SerializePayload() const
{
  return {};
}

void DeleteCustomLogSourceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_sourceVersionHasBeenSet)
    {
      ss << m_sourceVersion;
      uri.AddQueryStringParameter("sourceVersion", ss.str());
      ss.str("");
    }

}



