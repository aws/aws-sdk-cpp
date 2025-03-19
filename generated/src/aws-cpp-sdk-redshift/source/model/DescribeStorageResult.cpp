/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeStorageResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeStorageResult::DescribeStorageResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeStorageResult& DescribeStorageResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeStorageResult"))
  {
    resultNode = rootNode.FirstChild("DescribeStorageResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode totalBackupSizeInMegaBytesNode = resultNode.FirstChild("TotalBackupSizeInMegaBytes");
    if(!totalBackupSizeInMegaBytesNode.IsNull())
    {
      m_totalBackupSizeInMegaBytes = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalBackupSizeInMegaBytesNode.GetText()).c_str()).c_str());
      m_totalBackupSizeInMegaBytesHasBeenSet = true;
    }
    XmlNode totalProvisionedStorageInMegaBytesNode = resultNode.FirstChild("TotalProvisionedStorageInMegaBytes");
    if(!totalProvisionedStorageInMegaBytesNode.IsNull())
    {
      m_totalProvisionedStorageInMegaBytes = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalProvisionedStorageInMegaBytesNode.GetText()).c_str()).c_str());
      m_totalProvisionedStorageInMegaBytesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeStorageResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
