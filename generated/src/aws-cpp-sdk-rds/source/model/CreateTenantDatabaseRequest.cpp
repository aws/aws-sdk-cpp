/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateTenantDatabaseRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String CreateTenantDatabaseRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateTenantDatabase&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_tenantDBNameHasBeenSet)
  {
    ss << "TenantDBName=" << StringUtils::URLEncode(m_tenantDBName.c_str()) << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
    ss << "MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_masterUserPasswordHasBeenSet)
  {
    ss << "MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }

  if(m_characterSetNameHasBeenSet)
  {
    ss << "CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }

  if(m_ncharCharacterSetNameHasBeenSet)
  {
    ss << "NcharCharacterSetName=" << StringUtils::URLEncode(m_ncharCharacterSetName.c_str()) << "&";
  }

  if(m_manageMasterUserPasswordHasBeenSet)
  {
    ss << "ManageMasterUserPassword=" << std::boolalpha << m_manageMasterUserPassword << "&";
  }

  if(m_masterUserSecretKmsKeyIdHasBeenSet)
  {
    ss << "MasterUserSecretKmsKeyId=" << StringUtils::URLEncode(m_masterUserSecretKmsKeyId.c_str()) << "&";
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

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateTenantDatabaseRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
