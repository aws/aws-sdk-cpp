/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/GetRevocationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetRevocationStatusRequest::GetRevocationStatusRequest() : 
    m_signatureTimestampHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_profileVersionArnHasBeenSet(false),
    m_jobArnHasBeenSet(false),
    m_certificateHashesHasBeenSet(false)
{
}

Aws::String GetRevocationStatusRequest::SerializePayload() const
{
  return {};
}

void GetRevocationStatusRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_signatureTimestampHasBeenSet)
    {
      ss << m_signatureTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("signatureTimestamp", ss.str());
      ss.str("");
    }

    if(m_platformIdHasBeenSet)
    {
      ss << m_platformId;
      uri.AddQueryStringParameter("platformId", ss.str());
      ss.str("");
    }

    if(m_profileVersionArnHasBeenSet)
    {
      ss << m_profileVersionArn;
      uri.AddQueryStringParameter("profileVersionArn", ss.str());
      ss.str("");
    }

    if(m_jobArnHasBeenSet)
    {
      ss << m_jobArn;
      uri.AddQueryStringParameter("jobArn", ss.str());
      ss.str("");
    }

    if(m_certificateHashesHasBeenSet)
    {
      for(const auto& item : m_certificateHashes)
      {
        ss << item;
        uri.AddQueryStringParameter("certificateHashes", ss.str());
        ss.str("");
      }
    }

}



