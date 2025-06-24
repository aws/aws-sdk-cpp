/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CopyDBSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String CopyDBSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyDBSnapshot&";
  if(m_sourceDBSnapshotIdentifierHasBeenSet)
  {
    ss << "SourceDBSnapshotIdentifier=" << StringUtils::URLEncode(m_sourceDBSnapshotIdentifier.c_str()) << "&";
  }

  if(m_targetDBSnapshotIdentifierHasBeenSet)
  {
    ss << "TargetDBSnapshotIdentifier=" << StringUtils::URLEncode(m_targetDBSnapshotIdentifier.c_str()) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
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

  if(m_copyTagsHasBeenSet)
  {
    ss << "CopyTags=" << std::boolalpha << m_copyTags << "&";
  }

  if(m_preSignedUrlHasBeenSet)
  {
    ss << "PreSignedUrl=" << StringUtils::URLEncode(m_preSignedUrl.c_str()) << "&";
  }

  if(m_optionGroupNameHasBeenSet)
  {
    ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_targetCustomAvailabilityZoneHasBeenSet)
  {
    ss << "TargetCustomAvailabilityZone=" << StringUtils::URLEncode(m_targetCustomAvailabilityZone.c_str()) << "&";
  }

  if(m_copyOptionGroupHasBeenSet)
  {
    ss << "CopyOptionGroup=" << std::boolalpha << m_copyOptionGroup << "&";
  }

  if(m_snapshotAvailabilityZoneHasBeenSet)
  {
    ss << "SnapshotAvailabilityZone=" << StringUtils::URLEncode(m_snapshotAvailabilityZone.c_str()) << "&";
  }

  if(m_snapshotTargetHasBeenSet)
  {
    ss << "SnapshotTarget=" << StringUtils::URLEncode(m_snapshotTarget.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CopyDBSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
