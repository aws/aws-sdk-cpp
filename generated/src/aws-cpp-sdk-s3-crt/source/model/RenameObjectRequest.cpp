/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/RenameObjectRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;


Aws::String RenameObjectRequest::SerializePayload() const
{
  return {};
}

void RenameObjectRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(!m_customizedAccessLogTag.empty())
    {
        // only accept customized LogTag which starts with "x-"
        Aws::Map<Aws::String, Aws::String> collectedLogTags;
        for(const auto& entry: m_customizedAccessLogTag)
        {
            if (!entry.first.empty() && !entry.second.empty() && entry.first.substr(0, 2) == "x-")
            {
                collectedLogTags.emplace(entry.first, entry.second);
            }
        }

        if (!collectedLogTags.empty())
        {
            uri.AddQueryStringParameter(collectedLogTags);
        }
    }
}

Aws::Http::HeaderValueCollection RenameObjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_renameSourceHasBeenSet)
  {
    ss << m_renameSource;
    headers.emplace("x-amz-rename-source",  ss.str());
    ss.str("");
  }

  if(m_destinationIfMatchHasBeenSet)
  {
    ss << m_destinationIfMatch;
    headers.emplace("if-match",  ss.str());
    ss.str("");
  }

  if(m_destinationIfNoneMatchHasBeenSet)
  {
    ss << m_destinationIfNoneMatch;
    headers.emplace("if-none-match",  ss.str());
    ss.str("");
  }

  if(m_destinationIfModifiedSinceHasBeenSet)
  {
    headers.emplace("if-modified-since", m_destinationIfModifiedSince.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if(m_destinationIfUnmodifiedSinceHasBeenSet)
  {
    headers.emplace("if-unmodified-since", m_destinationIfUnmodifiedSince.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if(m_sourceIfMatchHasBeenSet)
  {
    ss << m_sourceIfMatch;
    headers.emplace("x-amz-rename-source-if-match",  ss.str());
    ss.str("");
  }

  if(m_sourceIfNoneMatchHasBeenSet)
  {
    ss << m_sourceIfNoneMatch;
    headers.emplace("x-amz-rename-source-if-none-match",  ss.str());
    ss.str("");
  }

  if(m_sourceIfModifiedSinceHasBeenSet)
  {
    headers.emplace("x-amz-rename-source-if-modified-since", m_sourceIfModifiedSince.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if(m_sourceIfUnmodifiedSinceHasBeenSet)
  {
    headers.emplace("x-amz-rename-source-if-unmodified-since", m_sourceIfUnmodifiedSince.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;
}

RenameObjectRequest::EndpointParameters RenameObjectRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (BucketHasBeenSet()) {
        parameters.emplace_back(Aws::String("Bucket"), this->GetBucket(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    if (KeyHasBeenSet()) {
        parameters.emplace_back(Aws::String("Key"), this->GetKey(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}
