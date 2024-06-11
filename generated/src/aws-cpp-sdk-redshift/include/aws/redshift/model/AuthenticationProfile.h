/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes an authentication profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AuthenticationProfile">AWS
   * API Reference</a></p>
   */
  class AuthenticationProfile
  {
  public:
    AWS_REDSHIFT_API AuthenticationProfile();
    AWS_REDSHIFT_API AuthenticationProfile(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API AuthenticationProfile& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the authentication profile.</p>
     */
    inline const Aws::String& GetAuthenticationProfileName() const{ return m_authenticationProfileName; }
    inline bool AuthenticationProfileNameHasBeenSet() const { return m_authenticationProfileNameHasBeenSet; }
    inline void SetAuthenticationProfileName(const Aws::String& value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName = value; }
    inline void SetAuthenticationProfileName(Aws::String&& value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName = std::move(value); }
    inline void SetAuthenticationProfileName(const char* value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName.assign(value); }
    inline AuthenticationProfile& WithAuthenticationProfileName(const Aws::String& value) { SetAuthenticationProfileName(value); return *this;}
    inline AuthenticationProfile& WithAuthenticationProfileName(Aws::String&& value) { SetAuthenticationProfileName(std::move(value)); return *this;}
    inline AuthenticationProfile& WithAuthenticationProfileName(const char* value) { SetAuthenticationProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the authentication profile in JSON format. The maximum length
     * of the JSON string is determined by a quota for your account.</p>
     */
    inline const Aws::String& GetAuthenticationProfileContent() const{ return m_authenticationProfileContent; }
    inline bool AuthenticationProfileContentHasBeenSet() const { return m_authenticationProfileContentHasBeenSet; }
    inline void SetAuthenticationProfileContent(const Aws::String& value) { m_authenticationProfileContentHasBeenSet = true; m_authenticationProfileContent = value; }
    inline void SetAuthenticationProfileContent(Aws::String&& value) { m_authenticationProfileContentHasBeenSet = true; m_authenticationProfileContent = std::move(value); }
    inline void SetAuthenticationProfileContent(const char* value) { m_authenticationProfileContentHasBeenSet = true; m_authenticationProfileContent.assign(value); }
    inline AuthenticationProfile& WithAuthenticationProfileContent(const Aws::String& value) { SetAuthenticationProfileContent(value); return *this;}
    inline AuthenticationProfile& WithAuthenticationProfileContent(Aws::String&& value) { SetAuthenticationProfileContent(std::move(value)); return *this;}
    inline AuthenticationProfile& WithAuthenticationProfileContent(const char* value) { SetAuthenticationProfileContent(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationProfileName;
    bool m_authenticationProfileNameHasBeenSet = false;

    Aws::String m_authenticationProfileContent;
    bool m_authenticationProfileContentHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
