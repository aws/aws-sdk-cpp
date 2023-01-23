﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetStorageLensConfigurationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetStorageLensConfigurationResult::GetStorageLensConfigurationResult()
{
}

GetStorageLensConfigurationResult::GetStorageLensConfigurationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetStorageLensConfigurationResult& GetStorageLensConfigurationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    m_storageLensConfiguration = resultNode;
  }

  return *this;
}
