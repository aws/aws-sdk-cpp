/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/HeadBucketResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws;

HeadBucketResult::HeadBucketResult(const Aws::AmazonWebServiceResult<Utils::Xml::XmlDocument>& result)
{
  *this = result;
}

HeadBucketResult::HeadBucketResult(Aws::AmazonWebServiceResult<Utils::Xml::XmlDocument>&& result)
{
  *this = std::move(result);
}

HeadBucketResult& HeadBucketResult::operator =(Aws::AmazonWebServiceResult<Utils::Xml::XmlDocument> result)
{
  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amz-bucket-region");
  if(requestIdIter != headers.end())
  {
    m_region = requestIdIter->second;
  }

   return *this;
}
