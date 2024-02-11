/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/ListDICOMImportJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDICOMImportJobsRequest::ListDICOMImportJobsRequest() : 
    m_datastoreIdHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListDICOMImportJobsRequest::SerializePayload() const
{
  return {};
}

void ListDICOMImportJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_jobStatusHasBeenSet)
    {
      ss << JobStatusMapper::GetNameForJobStatus(m_jobStatus);
      uri.AddQueryStringParameter("jobStatus", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

}



