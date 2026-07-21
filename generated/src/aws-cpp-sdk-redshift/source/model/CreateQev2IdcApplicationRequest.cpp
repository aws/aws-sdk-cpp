/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/redshift/model/CreateQev2IdcApplicationRequest.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String CreateQev2IdcApplicationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateQev2IdcApplication&";
  if (m_idcInstanceArnHasBeenSet) {
    ss << "IdcInstanceArn=" << StringUtils::URLEncode(m_idcInstanceArn.c_str()) << "&";
  }

  if (m_qev2IdcApplicationNameHasBeenSet) {
    ss << "Qev2IdcApplicationName=" << StringUtils::URLEncode(m_qev2IdcApplicationName.c_str()) << "&";
  }

  if (m_idcDisplayNameHasBeenSet) {
    ss << "IdcDisplayName=" << StringUtils::URLEncode(m_idcDisplayName.c_str()) << "&";
  }

  if (m_tagsHasBeenSet) {
    if (m_tags.empty()) {
      ss << "Tags=&";
    } else {
      unsigned tagsCount = 1;
      for (auto& item : m_tags) {
        item.OutputToStream(ss, "Tags.Tag.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}

void CreateQev2IdcApplicationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
