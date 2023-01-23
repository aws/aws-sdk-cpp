/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/AuthenticationProfile.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  class DescribeAuthenticationProfilesResult
  {
  public:
    AWS_REDSHIFT_API DescribeAuthenticationProfilesResult();
    AWS_REDSHIFT_API DescribeAuthenticationProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeAuthenticationProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The list of authentication profiles.</p>
     */
    inline const Aws::Vector<AuthenticationProfile>& GetAuthenticationProfiles() const{ return m_authenticationProfiles; }

    /**
     * <p>The list of authentication profiles.</p>
     */
    inline void SetAuthenticationProfiles(const Aws::Vector<AuthenticationProfile>& value) { m_authenticationProfiles = value; }

    /**
     * <p>The list of authentication profiles.</p>
     */
    inline void SetAuthenticationProfiles(Aws::Vector<AuthenticationProfile>&& value) { m_authenticationProfiles = std::move(value); }

    /**
     * <p>The list of authentication profiles.</p>
     */
    inline DescribeAuthenticationProfilesResult& WithAuthenticationProfiles(const Aws::Vector<AuthenticationProfile>& value) { SetAuthenticationProfiles(value); return *this;}

    /**
     * <p>The list of authentication profiles.</p>
     */
    inline DescribeAuthenticationProfilesResult& WithAuthenticationProfiles(Aws::Vector<AuthenticationProfile>&& value) { SetAuthenticationProfiles(std::move(value)); return *this;}

    /**
     * <p>The list of authentication profiles.</p>
     */
    inline DescribeAuthenticationProfilesResult& AddAuthenticationProfiles(const AuthenticationProfile& value) { m_authenticationProfiles.push_back(value); return *this; }

    /**
     * <p>The list of authentication profiles.</p>
     */
    inline DescribeAuthenticationProfilesResult& AddAuthenticationProfiles(AuthenticationProfile&& value) { m_authenticationProfiles.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAuthenticationProfilesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAuthenticationProfilesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AuthenticationProfile> m_authenticationProfiles;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
