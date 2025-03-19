/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateCustomDBEngineVersionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String CreateCustomDBEngineVersionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateCustomDBEngineVersion&";
  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_databaseInstallationFilesS3BucketNameHasBeenSet)
  {
    ss << "DatabaseInstallationFilesS3BucketName=" << StringUtils::URLEncode(m_databaseInstallationFilesS3BucketName.c_str()) << "&";
  }

  if(m_databaseInstallationFilesS3PrefixHasBeenSet)
  {
    ss << "DatabaseInstallationFilesS3Prefix=" << StringUtils::URLEncode(m_databaseInstallationFilesS3Prefix.c_str()) << "&";
  }

  if(m_imageIdHasBeenSet)
  {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_kMSKeyIdHasBeenSet)
  {
    ss << "KMSKeyId=" << StringUtils::URLEncode(m_kMSKeyId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_manifestHasBeenSet)
  {
    ss << "Manifest=" << StringUtils::URLEncode(m_manifest.c_str()) << "&";
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

  if(m_sourceCustomDbEngineVersionIdentifierHasBeenSet)
  {
    ss << "SourceCustomDbEngineVersionIdentifier=" << StringUtils::URLEncode(m_sourceCustomDbEngineVersionIdentifier.c_str()) << "&";
  }

  if(m_useAwsProvidedLatestImageHasBeenSet)
  {
    ss << "UseAwsProvidedLatestImage=" << std::boolalpha << m_useAwsProvidedLatestImage << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateCustomDBEngineVersionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
