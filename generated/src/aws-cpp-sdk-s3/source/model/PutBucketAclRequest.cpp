/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3/model/PutBucketAclRequest.h>

#include <numeric>
#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String PutBucketAclRequest::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection PutBucketAclRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_aCLHasBeenSet && m_aCL != BucketCannedACL::NOT_SET) {
    headers.emplace("x-amz-acl", BucketCannedACLMapper::GetNameForBucketCannedACL(m_aCL));
  }
  if (m_contentMD5HasBeenSet) {
    ss << m_contentMD5;
    headers.emplace("content-md5", ss.str());
    ss.str("");
  }
  if (m_checksumAlgorithmHasBeenSet && m_checksumAlgorithm != ChecksumAlgorithm::NOT_SET) {
    headers.emplace("x-amz-sdk-checksum-algorithm", ChecksumAlgorithmMapper::GetNameForChecksumAlgorithm(m_checksumAlgorithm));
  }
  if (m_grantFullControlHasBeenSet) {
    ss << m_grantFullControl;
    headers.emplace("x-amz-grant-full-control", ss.str());
    ss.str("");
  }
  if (m_grantReadHasBeenSet) {
    ss << m_grantRead;
    headers.emplace("x-amz-grant-read", ss.str());
    ss.str("");
  }
  if (m_grantReadACPHasBeenSet) {
    ss << m_grantReadACP;
    headers.emplace("x-amz-grant-read-acp", ss.str());
    ss.str("");
  }
  if (m_grantWriteHasBeenSet) {
    ss << m_grantWrite;
    headers.emplace("x-amz-grant-write", ss.str());
    ss.str("");
  }
  if (m_grantWriteACPHasBeenSet) {
    ss << m_grantWriteACP;
    headers.emplace("x-amz-grant-write-acp", ss.str());
    ss.str("");
  }
  if (m_expectedBucketOwnerHasBeenSet) {
    ss << m_expectedBucketOwner;
    headers.emplace("x-amz-expected-bucket-owner", ss.str());
    ss.str("");
  }
  return headers;
}

void PutBucketAclRequest::AddQueryStringParameters(Aws::Http::URI& uri) const {
  Aws::StringStream ss;
  if (!m_customizedAccessLogTag.empty()) {
    // only accept customized LogTag which starts with "x-"
    Aws::Map<Aws::String, Aws::String> collectedLogTags;
    for (const auto& entry : m_customizedAccessLogTag) {
      if (!entry.first.empty() && !entry.second.empty() && entry.first.substr(0, 2) == "x-") {
        collectedLogTags.emplace(entry.first, entry.second);
      }
    }
    if (!collectedLogTags.empty()) {
      uri.AddQueryStringParameter(collectedLogTags);
    }
  }
}

bool PutBucketAclRequest::HasEmbeddedError(Aws::IOStream& body, const Aws::Http::HeaderValueCollection& header) const {
  AWS_UNREFERENCED_PARAM(header);
  auto readPointer = body.tellg();
  Utils::Xml::XmlDocument doc = XmlDocument::CreateFromXmlStream(body);
  body.seekg(readPointer);
  if (!doc.WasParseSuccessful()) {
    return false;
  }
  if (!doc.GetRootElement().IsNull() && doc.GetRootElement().GetName() == Aws::String("Error")) {
    return true;
  }
  return false;
}
Aws::String PutBucketAclRequest::GetChecksumAlgorithmName() const {
  if (m_checksumAlgorithm == ChecksumAlgorithm::NOT_SET) {
    return "crc64nvme";
  } else {
    return ChecksumAlgorithmMapper::GetNameForChecksumAlgorithm(m_checksumAlgorithm);
  }
}

bool PutBucketAclRequest::ChecksumAlgorithmIsSet() const { return m_checksumAlgorithm != ChecksumAlgorithm::NOT_SET; }

PutBucketAclRequest::EndpointParameters PutBucketAclRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("UseS3ExpressControlEndpoint"), true,
                          Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  // Operation context parameters
  if (BucketHasBeenSet()) {
    parameters.emplace_back(Aws::String("Bucket"), this->GetBucket(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
