/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/redshift/model/ModifyLakehouseConfigurationRequest.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String ModifyLakehouseConfigurationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyLakehouseConfiguration&";
  if (m_clusterIdentifierHasBeenSet) {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if (m_lakehouseRegistrationHasBeenSet) {
    ss << "LakehouseRegistration="
       << StringUtils::URLEncode(LakehouseRegistrationMapper::GetNameForLakehouseRegistration(m_lakehouseRegistration)) << "&";
  }

  if (m_catalogNameHasBeenSet) {
    ss << "CatalogName=" << StringUtils::URLEncode(m_catalogName.c_str()) << "&";
  }

  if (m_lakehouseIdcRegistrationHasBeenSet) {
    ss << "LakehouseIdcRegistration="
       << StringUtils::URLEncode(LakehouseIdcRegistrationMapper::GetNameForLakehouseIdcRegistration(m_lakehouseIdcRegistration)) << "&";
  }

  if (m_lakehouseIdcApplicationArnHasBeenSet) {
    ss << "LakehouseIdcApplicationArn=" << StringUtils::URLEncode(m_lakehouseIdcApplicationArn.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}

void ModifyLakehouseConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
