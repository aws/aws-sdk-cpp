﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/GetBucketLifecycleConfigurationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetBucketLifecycleConfigurationResult::GetBucketLifecycleConfigurationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetBucketLifecycleConfigurationResult& GetBucketLifecycleConfigurationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode rulesNode = resultNode.FirstChild("Rule");
    if(!rulesNode.IsNull())
    {
      XmlNode ruleMember = rulesNode;
      m_rulesHasBeenSet = !ruleMember.IsNull();
      while(!ruleMember.IsNull())
      {
        m_rules.push_back(ruleMember);
        ruleMember = ruleMember.NextNode("Rule");
      }

      m_rulesHasBeenSet = true;
    }
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
