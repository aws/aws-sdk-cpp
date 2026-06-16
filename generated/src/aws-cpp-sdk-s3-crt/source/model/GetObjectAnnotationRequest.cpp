/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3-crt/model/GetObjectAnnotationRequest.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetObjectAnnotationRequest::SerializePayload() const { return {}; }

void GetObjectAnnotationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_annotationNameHasBeenSet) {
    ss << m_annotationName;
    uri.AddQueryStringParameter("annotationName", ss.str());
    ss.str("");
  }

  if (m_versionIdHasBeenSet) {
    ss << m_versionId;
    uri.AddQueryStringParameter("versionId", ss.str());
    ss.str("");
  }

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

Aws::Http::HeaderValueCollection GetObjectAnnotationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_requestPayerHasBeenSet && m_requestPayer != RequestPayer::NOT_SET) {
    headers.emplace("x-amz-request-payer", RequestPayerMapper::GetNameForRequestPayer(m_requestPayer));
  }

  if (m_expectedBucketOwnerHasBeenSet) {
    ss << m_expectedBucketOwner;
    headers.emplace("x-amz-expected-bucket-owner", ss.str());
    ss.str("");
  }

  if (m_checksumModeHasBeenSet && m_checksumMode != ChecksumMode::NOT_SET) {
    headers.emplace("x-amz-checksum-mode", ChecksumModeMapper::GetNameForChecksumMode(m_checksumMode));
  }

  return headers;
}

GetObjectAnnotationRequest::EndpointParameters GetObjectAnnotationRequest::GetEndpointContextParams() const {
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
bool GetObjectAnnotationRequest::ShouldValidateResponseChecksum() const { return m_checksumMode == ChecksumMode::ENABLED; }

Aws::Vector<Aws::String> GetObjectAnnotationRequest::GetResponseChecksumAlgorithmNames() const {
  Aws::Vector<Aws::String> responseChecksumAlgorithmNames;
  responseChecksumAlgorithmNames.push_back("CRC64NVME");
  responseChecksumAlgorithmNames.push_back("CRC32");
  responseChecksumAlgorithmNames.push_back("CRC32C");
  responseChecksumAlgorithmNames.push_back("SHA256");
  responseChecksumAlgorithmNames.push_back("SHA1");
  responseChecksumAlgorithmNames.push_back("SHA512");
  responseChecksumAlgorithmNames.push_back("MD5");
  responseChecksumAlgorithmNames.push_back("XXHASH64");
  responseChecksumAlgorithmNames.push_back("XXHASH3");
  responseChecksumAlgorithmNames.push_back("XXHASH128");
  return responseChecksumAlgorithmNames;
}
