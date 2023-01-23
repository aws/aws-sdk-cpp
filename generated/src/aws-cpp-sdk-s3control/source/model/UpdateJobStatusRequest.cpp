/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/UpdateJobStatusRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateJobStatusRequest::UpdateJobStatusRequest() : 
    m_accountIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_requestedJobStatus(RequestedJobStatus::NOT_SET),
    m_requestedJobStatusHasBeenSet(false),
    m_statusUpdateReasonHasBeenSet(false)
{
}

Aws::String UpdateJobStatusRequest::SerializePayload() const
{
  return {};
}

void UpdateJobStatusRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_requestedJobStatusHasBeenSet)
    {
      ss << RequestedJobStatusMapper::GetNameForRequestedJobStatus(m_requestedJobStatus);
      uri.AddQueryStringParameter("requestedJobStatus", ss.str());
      ss.str("");
    }

    if(m_statusUpdateReasonHasBeenSet)
    {
      ss << m_statusUpdateReason;
      uri.AddQueryStringParameter("statusUpdateReason", ss.str());
      ss.str("");
    }

}

Aws::Http::HeaderValueCollection UpdateJobStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_accountIdHasBeenSet)
  {
    ss << m_accountId;
    headers.emplace("x-amz-account-id",  ss.str());
    ss.str("");
  }

  return headers;
}

UpdateJobStatusRequest::EndpointParameters UpdateJobStatusRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("RequiresAccountId"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    // Operation context parameters
    if (AccountIdHasBeenSet()) {
        parameters.emplace_back(Aws::String("AccountId"), this->GetAccountId(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}
