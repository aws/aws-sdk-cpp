/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/UploadReadSetPartRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

UploadReadSetPartRequest::UploadReadSetPartRequest() : 
    m_sequenceStoreIdHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_partSource(ReadSetPartSource::NOT_SET),
    m_partSourceHasBeenSet(false),
    m_partNumber(0),
    m_partNumberHasBeenSet(false)
{
}


void UploadReadSetPartRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_partSourceHasBeenSet)
    {
      ss << ReadSetPartSourceMapper::GetNameForReadSetPartSource(m_partSource);
      uri.AddQueryStringParameter("partSource", ss.str());
      ss.str("");
    }

    if(m_partNumberHasBeenSet)
    {
      ss << m_partNumber;
      uri.AddQueryStringParameter("partNumber", ss.str());
      ss.str("");
    }

}

