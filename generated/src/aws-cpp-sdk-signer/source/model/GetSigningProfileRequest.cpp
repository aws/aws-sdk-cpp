﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/GetSigningProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSigningProfileRequest::GetSigningProfileRequest() : 
    m_profileNameHasBeenSet(false),
    m_profileOwnerHasBeenSet(false)
{
}

Aws::String GetSigningProfileRequest::SerializePayload() const
{
  return {};
}

void GetSigningProfileRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_profileOwnerHasBeenSet)
    {
      ss << m_profileOwner;
      uri.AddQueryStringParameter("profileOwner", ss.str());
      ss.str("");
    }

}



