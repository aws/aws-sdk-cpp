﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CopyDBClusterSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CopyDBClusterSnapshotRequest::CopyDBClusterSnapshotRequest() : 
    m_sourceDBClusterSnapshotIdentifierHasBeenSet(false),
    m_targetDBClusterSnapshotIdentifierHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_preSignedUrlHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_sourceRegionHasBeenSet(false)
{
}

Aws::String CopyDBClusterSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyDBClusterSnapshot&";
  if(m_sourceDBClusterSnapshotIdentifierHasBeenSet)
  {
    ss << "SourceDBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_sourceDBClusterSnapshotIdentifier.c_str()) << "&";
  }

  if(m_targetDBClusterSnapshotIdentifierHasBeenSet)
  {
    ss << "TargetDBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_targetDBClusterSnapshotIdentifier.c_str()) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_preSignedUrlHasBeenSet)
  {
    ss << "PreSignedUrl=" << StringUtils::URLEncode(m_preSignedUrl.c_str()) << "&";
  }

  if(m_copyTagsHasBeenSet)
  {
    ss << "CopyTags=" << std::boolalpha << m_copyTags << "&";
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

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CopyDBClusterSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
