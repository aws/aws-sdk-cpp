/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetBucketResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetBucketResult::GetBucketResult() : 
    m_publicAccessBlockEnabled(false)
{
}

GetBucketResult::GetBucketResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_publicAccessBlockEnabled(false)
{
  *this = result;
}

GetBucketResult& GetBucketResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
    }
    XmlNode publicAccessBlockEnabledNode = resultNode.FirstChild("PublicAccessBlockEnabled");
    if(!publicAccessBlockEnabledNode.IsNull())
    {
      m_publicAccessBlockEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publicAccessBlockEnabledNode.GetText()).c_str()).c_str());
    }
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  return *this;
}
