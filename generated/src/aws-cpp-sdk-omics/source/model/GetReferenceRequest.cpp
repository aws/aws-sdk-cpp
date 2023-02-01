/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetReferenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetReferenceRequest::GetReferenceRequest() : 
    m_file(ReferenceFile::NOT_SET),
    m_fileHasBeenSet(false),
    m_idHasBeenSet(false),
    m_partNumber(0),
    m_partNumberHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_referenceStoreIdHasBeenSet(false)
{
}

Aws::String GetReferenceRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetReferenceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_rangeHasBeenSet)
  {
    ss << m_range;
    headers.emplace("range",  ss.str());
    ss.str("");
  }

  return headers;

}

void GetReferenceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_fileHasBeenSet)
    {
      ss << ReferenceFileMapper::GetNameForReferenceFile(m_file);
      uri.AddQueryStringParameter("file", ss.str());
      ss.str("");
    }

    if(m_partNumberHasBeenSet)
    {
      ss << m_partNumber;
      uri.AddQueryStringParameter("partNumber", ss.str());
      ss.str("");
    }

}



