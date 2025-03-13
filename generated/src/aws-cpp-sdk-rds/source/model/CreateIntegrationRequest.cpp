/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateIntegrationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

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

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.Tag.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_dataFilterHasBeenSet)
  {
    ss << "DataFilter=" << StringUtils::URLEncode(m_dataFilter.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateIntegrationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
