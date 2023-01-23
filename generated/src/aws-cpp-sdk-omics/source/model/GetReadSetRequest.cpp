/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetReadSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetReadSetRequest::GetReadSetRequest() : 
    m_file(ReadSetFile::NOT_SET),
    m_fileHasBeenSet(false),
    m_idHasBeenSet(false),
    m_partNumber(0),
    m_partNumberHasBeenSet(false),
    m_sequenceStoreIdHasBeenSet(false)
{
}

Aws::String GetReadSetRequest::SerializePayload() const
{
  return {};
}

void GetReadSetRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_fileHasBeenSet)
    {
      ss << ReadSetFileMapper::GetNameForReadSetFile(m_file);
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



