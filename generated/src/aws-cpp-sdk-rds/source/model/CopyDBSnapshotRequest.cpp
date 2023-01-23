/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CopyDBSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CopyDBSnapshotRequest::CopyDBSnapshotRequest() : 
    m_sourceDBSnapshotIdentifierHasBeenSet(false),
    m_targetDBSnapshotIdentifierHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_preSignedUrlHasBeenSet(false),
    m_optionGroupNameHasBeenSet(false),
    m_targetCustomAvailabilityZoneHasBeenSet(false),
    m_copyOptionGroup(false),
    m_copyOptionGroupHasBeenSet(false),
    m_sourceRegionHasBeenSet(false)
{
}

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
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
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

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CopyDBSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
