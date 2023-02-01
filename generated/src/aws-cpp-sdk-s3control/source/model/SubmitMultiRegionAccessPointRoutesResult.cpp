/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/SubmitMultiRegionAccessPointRoutesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

SubmitMultiRegionAccessPointRoutesResult::SubmitMultiRegionAccessPointRoutesResult()
{
}

SubmitMultiRegionAccessPointRoutesResult::SubmitMultiRegionAccessPointRoutesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

SubmitMultiRegionAccessPointRoutesResult& SubmitMultiRegionAccessPointRoutesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
  }

  return *this;
}
