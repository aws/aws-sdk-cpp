/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3/model/ListObjectAnnotationsResult.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListObjectAnnotationsResult::ListObjectAnnotationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

ListObjectAnnotationsResult& ListObjectAnnotationsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
    XmlNode annotationsNode = resultNode.FirstChild("Annotations");
    if (!annotationsNode.IsNull()) {
      XmlNode annotationsMember = annotationsNode.FirstChild("AnnotationEntry");
      m_annotationsHasBeenSet = !annotationsMember.IsNull();
      while (!annotationsMember.IsNull()) {
        m_annotations.push_back(annotationsMember);
        annotationsMember = annotationsMember.NextNode("AnnotationEntry");
      }

      m_annotationsHasBeenSet = true;
    }
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if (!bucketNode.IsNull()) {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
    XmlNode keyNode = resultNode.FirstChild("Key");
    if (!keyNode.IsNull()) {
      m_key = Aws::Utils::Xml::DecodeEscapedXmlText(keyNode.GetText());
      m_keyHasBeenSet = true;
    }
    XmlNode annotationPrefixNode = resultNode.FirstChild("AnnotationPrefix");
    if (!annotationPrefixNode.IsNull()) {
      m_annotationPrefix = Aws::Utils::Xml::DecodeEscapedXmlText(annotationPrefixNode.GetText());
      m_annotationPrefixHasBeenSet = true;
    }
    XmlNode maxAnnotationResultsNode = resultNode.FirstChild("MaxAnnotationResults");
    if (!maxAnnotationResultsNode.IsNull()) {
      m_maxAnnotationResults = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxAnnotationResultsNode.GetText()).c_str()).c_str());
      m_maxAnnotationResultsHasBeenSet = true;
    }
    XmlNode annotationCountNode = resultNode.FirstChild("AnnotationCount");
    if (!annotationCountNode.IsNull()) {
      m_annotationCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(annotationCountNode.GetText()).c_str()).c_str());
      m_annotationCountHasBeenSet = true;
    }
    XmlNode continuationTokenNode = resultNode.FirstChild("ContinuationToken");
    if (!continuationTokenNode.IsNull()) {
      m_continuationToken = Aws::Utils::Xml::DecodeEscapedXmlText(continuationTokenNode.GetText());
      m_continuationTokenHasBeenSet = true;
    }
    XmlNode nextContinuationTokenNode = resultNode.FirstChild("NextContinuationToken");
    if (!nextContinuationTokenNode.IsNull()) {
      m_nextContinuationToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextContinuationTokenNode.GetText());
      m_nextContinuationTokenHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& objectVersionIdIter = headers.find("x-amz-object-version-id");
  if (objectVersionIdIter != headers.end()) {
    m_objectVersionId = objectVersionIdIter->second;
    m_objectVersionIdHasBeenSet = true;
  }

  const auto& requestChargedIter = headers.find("x-amz-request-charged");
  if (requestChargedIter != headers.end()) {
    m_requestCharged = RequestChargedMapper::GetRequestChargedForName(requestChargedIter->second);
    m_requestChargedHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amz-request-id");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
