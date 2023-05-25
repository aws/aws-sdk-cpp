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
    AWS_REDSHIFT_API ModifyAuthenticationProfileResult();
    AWS_REDSHIFT_API ModifyAuthenticationProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API ModifyAuthenticationProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of the authentication profile that was replaced.</p>
     */
    inline const Aws::String& GetAuthenticationProfileName() const{ return m_authenticationProfileName; }

    /**
     * <p>The name of the authentication profile that was replaced.</p>
     */
    inline void SetAuthenticationProfileName(const Aws::String& value) { m_authenticationProfileName = value; }

    /**
     * <p>The name of the authentication profile that was replaced.</p>
     */
    inline void SetAuthenticationProfileName(Aws::String&& value) { m_authenticationProfileName = std::move(value); }

    /**
     * <p>The name of the authentication profile that was replaced.</p>
     */
    inline void SetAuthenticationProfileName(const char* value) { m_authenticationProfileName.assign(value); }

    /**
     * <p>The name of the authentication profile that was replaced.</p>
     */
    inline ModifyAuthenticationProfileResult& WithAuthenticationProfileName(const Aws::String& value) { SetAuthenticationProfileName(value); return *this;}

    /**
     * <p>The name of the authentication profile that was replaced.</p>
     */
    inline ModifyAuthenticationProfileResult& WithAuthenticationProfileName(Aws::String&& value) { SetAuthenticationProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the authentication profile that was replaced.</p>
     */
    inline ModifyAuthenticationProfileResult& WithAuthenticationProfileName(const char* value) { SetAuthenticationProfileName(value); return *this;}


    /**
     * <p>The updated content of the authentication profile in JSON format.</p>
     */
    inline const Aws::String& GetAuthenticationProfileContent() const{ return m_authenticationProfileContent; }

    /**
     * <p>The updated content of the authentication profile in JSON format.</p>
     */
    inline void SetAuthenticationProfileContent(const Aws::String& value) { m_authenticationProfileContent = value; }

    /**
     * <p>The updated content of the authentication profile in JSON format.</p>
     */
    inline void SetAuthenticationProfileContent(Aws::String&& value) { m_authenticationProfileContent = std::move(value); }

    /**
     * <p>The updated content of the authentication profile in JSON format.</p>
     */
    inline void SetAuthenticationProfileContent(const char* value) { m_authenticationProfileContent.assign(value); }

    /**
     * <p>The updated content of the authentication profile in JSON format.</p>
     */
    inline ModifyAuthenticationProfileResult& WithAuthenticationProfileContent(const Aws::String& value) { SetAuthenticationProfileContent(value); return *this;}

    /**
     * <p>The updated content of the authentication profile in JSON format.</p>
     */
    inline ModifyAuthenticationProfileResult& WithAuthenticationProfileContent(Aws::String&& value) { SetAuthenticationProfileContent(std::move(value)); return *this;}

    /**
     * <p>The updated content of the authentication profile in JSON format.</p>
     */
    inline ModifyAuthenticationProfileResult& WithAuthenticationProfileContent(const char* value) { SetAuthenticationProfileContent(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyAuthenticationProfileResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyAuthenticationProfileResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_authenticationProfileName;

    Aws::String m_authenticationProfileContent;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
