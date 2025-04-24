/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyTenantDatabaseRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String ModifyTenantDatabaseRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyTenantDatabase&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_tenantDBNameHasBeenSet)
  {
    ss << "TenantDBName=" << StringUtils::URLEncode(m_tenantDBName.c_str()) << "&";
  }

  if(m_masterUserPasswordHasBeenSet)
  {
    ss << "MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }

  if(m_newTenantDBNameHasBeenSet)
  {
    ss << "NewTenantDBName=" << StringUtils::URLEncode(m_newTenantDBName.c_str()) << "&";
  }

  if(m_manageMasterUserPasswordHasBeenSet)
  {
    ss << "ManageMasterUserPassword=" << std::boolalpha << m_manageMasterUserPassword << "&";
  }

  if(m_rotateMasterUserPasswordHasBeenSet)
  {
    ss << "RotateMasterUserPassword=" << std::boolalpha << m_rotateMasterUserPassword << "&";
  }

  if(m_masterUserSecretKmsKeyIdHasBeenSet)
  {
    ss << "MasterUserSecretKmsKeyId=" << StringUtils::URLEncode(m_masterUserSecretKmsKeyId.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyTenantDatabaseRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
