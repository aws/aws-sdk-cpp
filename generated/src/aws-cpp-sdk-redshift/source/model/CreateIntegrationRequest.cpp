﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CreateIntegrationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

CreateIntegrationRequest::CreateIntegrationRequest() : 
    m_sourceArnHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_integrationNameHasBeenSet(false),
    m_kMSKeyIdHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_additionalEncryptionContextHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String CreateIntegrationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateIntegration&";
  if(m_sourceArnHasBeenSet)
  {
    ss << "SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

  if(m_targetArnHasBeenSet)
  {
    ss << "TargetArn=" << StringUtils::URLEncode(m_targetArn.c_str()) << "&";
  }

  if(m_integrationNameHasBeenSet)
  {
    ss << "IntegrationName=" << StringUtils::URLEncode(m_integrationName.c_str()) << "&";
  }

  if(m_kMSKeyIdHasBeenSet)
  {
    ss << "KMSKeyId=" << StringUtils::URLEncode(m_kMSKeyId.c_str()) << "&";
  }

  if(m_tagListHasBeenSet)
  {
    if (m_tagList.empty())
    {
      ss << "TagList=&";
    }
    else
    {
      unsigned tagListCount = 1;
      for(auto& item : m_tagList)
      {
        item.OutputToStream(ss, "TagList.Tag.", tagListCount, "");
        tagListCount++;
      }
    }
  }

  if(m_additionalEncryptionContextHasBeenSet)
  {
    unsigned additionalEncryptionContextCount = 1;
    for(auto& item : m_additionalEncryptionContext)
    {
      ss << "AdditionalEncryptionContext.entry." << additionalEncryptionContextCount << ".key="
          << StringUtils::URLEncode(item.first.c_str()) << "&";
      ss << "AdditionalEncryptionContext.entry." << additionalEncryptionContextCount << ".value="
          << StringUtils::URLEncode(item.second.c_str()) << "&";
      additionalEncryptionContextCount++;
    }
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  CreateIntegrationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
