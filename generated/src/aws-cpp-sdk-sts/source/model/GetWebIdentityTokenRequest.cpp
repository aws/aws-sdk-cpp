/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sts/model/GetWebIdentityTokenRequest.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

Aws::String GetWebIdentityTokenRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=GetWebIdentityToken&";
  if (m_audienceHasBeenSet) {
    if (m_audience.empty()) {
      ss << "Audience=&";
    } else {
      unsigned audienceCount = 1;
      for (auto& item : m_audience) {
        ss << "Audience.member." << audienceCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
        audienceCount++;
      }
    }
  }

  if (m_durationSecondsHasBeenSet) {
    ss << "DurationSeconds=" << m_durationSeconds << "&";
  }

  if (m_signingAlgorithmHasBeenSet) {
    ss << "SigningAlgorithm=" << StringUtils::URLEncode(m_signingAlgorithm.c_str()) << "&";
  }

  if (m_tagsHasBeenSet) {
    if (m_tags.empty()) {
      ss << "Tags=&";
    } else {
      unsigned tagsCount = 1;
      for (auto& item : m_tags) {
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  ss << "Version=2011-06-15";
  return ss.str();
}

void GetWebIdentityTokenRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
