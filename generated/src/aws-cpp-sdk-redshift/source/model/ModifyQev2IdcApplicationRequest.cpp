/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/redshift/model/ModifyQev2IdcApplicationRequest.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String ModifyQev2IdcApplicationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyQev2IdcApplication&";
  if (m_qev2IdcApplicationArnHasBeenSet) {
    ss << "Qev2IdcApplicationArn=" << StringUtils::URLEncode(m_qev2IdcApplicationArn.c_str()) << "&";
  }

  if (m_idcDisplayNameHasBeenSet) {
    ss << "IdcDisplayName=" << StringUtils::URLEncode(m_idcDisplayName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}

void ModifyQev2IdcApplicationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
