/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/GetSparqlStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSparqlStreamRequest::GetSparqlStreamRequest() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_iteratorType(IteratorType::NOT_SET),
    m_iteratorTypeHasBeenSet(false),
    m_commitNum(0),
    m_commitNumHasBeenSet(false),
    m_opNum(0),
    m_opNumHasBeenSet(false),
    m_encoding(Encoding::NOT_SET),
    m_encodingHasBeenSet(false)
{
}

Aws::String GetSparqlStreamRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetSparqlStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_encodingHasBeenSet && m_encoding != Encoding::NOT_SET)
  {
    headers.emplace("accept-encoding", EncodingMapper::GetNameForEncoding(m_encoding));
  }

  return headers;

}

void GetSparqlStreamRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_iteratorTypeHasBeenSet)
    {
      ss << IteratorTypeMapper::GetNameForIteratorType(m_iteratorType);
      uri.AddQueryStringParameter("iteratorType", ss.str());
      ss.str("");
    }

    if(m_commitNumHasBeenSet)
    {
      ss << m_commitNum;
      uri.AddQueryStringParameter("commitNum", ss.str());
      ss.str("");
    }

    if(m_opNumHasBeenSet)
    {
      ss << m_opNum;
      uri.AddQueryStringParameter("opNum", ss.str());
      ss.str("");
    }

}



