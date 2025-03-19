/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/PutBucketLifecycleConfigurationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

PutBucketLifecycleConfigurationResult::PutBucketLifecycleConfigurationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

PutBucketLifecycleConfigurationResult& PutBucketLifecycleConfigurationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& transitionDefaultMinimumObjectSizeIter = headers.find("x-amz-transition-default-minimum-object-size");
  if(transitionDefaultMinimumObjectSizeIter != headers.end())
  {
    m_transitionDefaultMinimumObjectSize = TransitionDefaultMinimumObjectSizeMapper::GetTransitionDefaultMinimumObjectSizeForName(transitionDefaultMinimumObjectSizeIter->second);
    m_transitionDefaultMinimumObjectSizeHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amz-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
