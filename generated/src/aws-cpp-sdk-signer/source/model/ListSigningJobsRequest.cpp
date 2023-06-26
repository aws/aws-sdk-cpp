/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/ListSigningJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListSigningJobsRequest::ListSigningJobsRequest() : 
    m_status(SigningStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_requestedByHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_isRevoked(false),
    m_isRevokedHasBeenSet(false),
    m_signatureExpiresBeforeHasBeenSet(false),
    m_signatureExpiresAfterHasBeenSet(false),
    m_jobInvokerHasBeenSet(false)
{
}

Aws::String ListSigningJobsRequest::SerializePayload() const
{
  return {};
}

void ListSigningJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_statusHasBeenSet)
    {
      ss << SigningStatusMapper::GetNameForSigningStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

    if(m_platformIdHasBeenSet)
    {
      ss << m_platformId;
      uri.AddQueryStringParameter("platformId", ss.str());
      ss.str("");
    }

    if(m_requestedByHasBeenSet)
    {
      ss << m_requestedBy;
      uri.AddQueryStringParameter("requestedBy", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_isRevokedHasBeenSet)
    {
      ss << m_isRevoked;
      uri.AddQueryStringParameter("isRevoked", ss.str());
      ss.str("");
    }

    if(m_signatureExpiresBeforeHasBeenSet)
    {
      ss << m_signatureExpiresBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("signatureExpiresBefore", ss.str());
      ss.str("");
    }

    if(m_signatureExpiresAfterHasBeenSet)
    {
      ss << m_signatureExpiresAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("signatureExpiresAfter", ss.str());
      ss.str("");
    }

    if(m_jobInvokerHasBeenSet)
    {
      ss << m_jobInvoker;
      uri.AddQueryStringParameter("jobInvoker", ss.str());
      ss.str("");
    }

}



