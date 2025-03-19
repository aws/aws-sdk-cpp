/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
  class ModifyAuthenticationProfileResult
  {
  public:
    AWS_REDSHIFT_API ModifyAuthenticationProfileResult() = default;
    AWS_REDSHIFT_API ModifyAuthenticationProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API ModifyAuthenticationProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the authentication profile that was replaced.</p>
     */
    inline const Aws::String& GetAuthenticationProfileName() const { return m_authenticationProfileName; }
    template<typename AuthenticationProfileNameT = Aws::String>
    void SetAuthenticationProfileName(AuthenticationProfileNameT&& value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName = std::forward<AuthenticationProfileNameT>(value); }
    template<typename AuthenticationProfileNameT = Aws::String>
    ModifyAuthenticationProfileResult& WithAuthenticationProfileName(AuthenticationProfileNameT&& value) { SetAuthenticationProfileName(std::forward<AuthenticationProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated content of the authentication profile in JSON format.</p>
     */
    inline const Aws::String& GetAuthenticationProfileContent() const { return m_authenticationProfileContent; }
    template<typename AuthenticationProfileContentT = Aws::String>
    void SetAuthenticationProfileContent(AuthenticationProfileContentT&& value) { m_authenticationProfileContentHasBeenSet = true; m_authenticationProfileContent = std::forward<AuthenticationProfileContentT>(value); }
    template<typename AuthenticationProfileContentT = Aws::String>
    ModifyAuthenticationProfileResult& WithAuthenticationProfileContent(AuthenticationProfileContentT&& value) { SetAuthenticationProfileContent(std::forward<AuthenticationProfileContentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyAuthenticationProfileResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authenticationProfileName;
    bool m_authenticationProfileNameHasBeenSet = false;

    Aws::String m_authenticationProfileContent;
    bool m_authenticationProfileContentHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
