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
    AWS_REDSHIFT_API DescribeAuthenticationProfilesResult() = default;
    AWS_REDSHIFT_API DescribeAuthenticationProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeAuthenticationProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of authentication profiles.</p>
     */
    inline const Aws::Vector<AuthenticationProfile>& GetAuthenticationProfiles() const { return m_authenticationProfiles; }
    template<typename AuthenticationProfilesT = Aws::Vector<AuthenticationProfile>>
    void SetAuthenticationProfiles(AuthenticationProfilesT&& value) { m_authenticationProfilesHasBeenSet = true; m_authenticationProfiles = std::forward<AuthenticationProfilesT>(value); }
    template<typename AuthenticationProfilesT = Aws::Vector<AuthenticationProfile>>
    DescribeAuthenticationProfilesResult& WithAuthenticationProfiles(AuthenticationProfilesT&& value) { SetAuthenticationProfiles(std::forward<AuthenticationProfilesT>(value)); return *this;}
    template<typename AuthenticationProfilesT = AuthenticationProfile>
    DescribeAuthenticationProfilesResult& AddAuthenticationProfiles(AuthenticationProfilesT&& value) { m_authenticationProfilesHasBeenSet = true; m_authenticationProfiles.emplace_back(std::forward<AuthenticationProfilesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAuthenticationProfilesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuthenticationProfile> m_authenticationProfiles;
    bool m_authenticationProfilesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
