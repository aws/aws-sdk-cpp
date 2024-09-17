/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolFunctionPackageContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSolFunctionPackageContentRequest::GetSolFunctionPackageContentRequest() : 
    m_accept(PackageContentType::NOT_SET),
    m_acceptHasBeenSet(false),
    m_vnfPkgIdHasBeenSet(false)
{
}

Aws::String GetSolFunctionPackageContentRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetSolFunctionPackageContentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_acceptHasBeenSet && m_accept != PackageContentType::NOT_SET)
  {
    headers.emplace("accept", PackageContentTypeMapper::GetNameForPackageContentType(m_accept));
  }

  return headers;

}




