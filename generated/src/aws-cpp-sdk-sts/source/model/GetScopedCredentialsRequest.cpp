/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sts/model/GetScopedCredentialsRequest.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

Aws::String GetScopedCredentialsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=GetScopedCredentials&";
  if (m_policyHasBeenSet) {
    ss << "Policy=" << StringUtils::URLEncode(m_policy.c_str()) << "&";
  }

  if (m_durationSecondsHasBeenSet) {
    ss << "DurationSeconds=" << m_durationSeconds << "&";
  }

  if (m_minimumSessionTokenSizeHasBeenSet) {
    ss << "MinimumSessionTokenSize=" << m_minimumSessionTokenSize << "&";
  }

  if (m_scopedSessionDescriptionHasBeenSet) {
    ss << "ScopedSessionDescription=" << StringUtils::URLEncode(m_scopedSessionDescription.c_str()) << "&";
  }

  ss << "Version=2011-06-15";
  return ss.str();
}

void GetScopedCredentialsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
