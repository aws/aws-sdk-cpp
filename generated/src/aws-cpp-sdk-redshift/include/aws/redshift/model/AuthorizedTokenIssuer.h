/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The authorized token issuer for the Amazon Redshift IAM Identity Center
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AuthorizedTokenIssuer">AWS
   * API Reference</a></p>
   */
  class AuthorizedTokenIssuer
  {
  public:
    AWS_REDSHIFT_API AuthorizedTokenIssuer();
    AWS_REDSHIFT_API AuthorizedTokenIssuer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API AuthorizedTokenIssuer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ARN for the authorized token issuer for integrating Amazon Redshift with
     * IDC Identity Center.</p>
     */
    inline const Aws::String& GetTrustedTokenIssuerArn() const{ return m_trustedTokenIssuerArn; }

    /**
     * <p>The ARN for the authorized token issuer for integrating Amazon Redshift with
     * IDC Identity Center.</p>
     */
    inline bool TrustedTokenIssuerArnHasBeenSet() const { return m_trustedTokenIssuerArnHasBeenSet; }

    /**
     * <p>The ARN for the authorized token issuer for integrating Amazon Redshift with
     * IDC Identity Center.</p>
     */
    inline void SetTrustedTokenIssuerArn(const Aws::String& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = value; }

    /**
     * <p>The ARN for the authorized token issuer for integrating Amazon Redshift with
     * IDC Identity Center.</p>
     */
    inline void SetTrustedTokenIssuerArn(Aws::String&& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = std::move(value); }

    /**
     * <p>The ARN for the authorized token issuer for integrating Amazon Redshift with
     * IDC Identity Center.</p>
     */
    inline void SetTrustedTokenIssuerArn(const char* value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn.assign(value); }

    /**
     * <p>The ARN for the authorized token issuer for integrating Amazon Redshift with
     * IDC Identity Center.</p>
     */
    inline AuthorizedTokenIssuer& WithTrustedTokenIssuerArn(const Aws::String& value) { SetTrustedTokenIssuerArn(value); return *this;}

    /**
     * <p>The ARN for the authorized token issuer for integrating Amazon Redshift with
     * IDC Identity Center.</p>
     */
    inline AuthorizedTokenIssuer& WithTrustedTokenIssuerArn(Aws::String&& value) { SetTrustedTokenIssuerArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the authorized token issuer for integrating Amazon Redshift with
     * IDC Identity Center.</p>
     */
    inline AuthorizedTokenIssuer& WithTrustedTokenIssuerArn(const char* value) { SetTrustedTokenIssuerArn(value); return *this;}


    /**
     * <p>The list of audiences for the authorized token issuer for integrating Amazon
     * Redshift with IDC Identity Center.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedAudiencesList() const{ return m_authorizedAudiencesList; }

    /**
     * <p>The list of audiences for the authorized token issuer for integrating Amazon
     * Redshift with IDC Identity Center.</p>
     */
    inline bool AuthorizedAudiencesListHasBeenSet() const { return m_authorizedAudiencesListHasBeenSet; }

    /**
     * <p>The list of audiences for the authorized token issuer for integrating Amazon
     * Redshift with IDC Identity Center.</p>
     */
    inline void SetAuthorizedAudiencesList(const Aws::Vector<Aws::String>& value) { m_authorizedAudiencesListHasBeenSet = true; m_authorizedAudiencesList = value; }

    /**
     * <p>The list of audiences for the authorized token issuer for integrating Amazon
     * Redshift with IDC Identity Center.</p>
     */
    inline void SetAuthorizedAudiencesList(Aws::Vector<Aws::String>&& value) { m_authorizedAudiencesListHasBeenSet = true; m_authorizedAudiencesList = std::move(value); }

    /**
     * <p>The list of audiences for the authorized token issuer for integrating Amazon
     * Redshift with IDC Identity Center.</p>
     */
    inline AuthorizedTokenIssuer& WithAuthorizedAudiencesList(const Aws::Vector<Aws::String>& value) { SetAuthorizedAudiencesList(value); return *this;}

    /**
     * <p>The list of audiences for the authorized token issuer for integrating Amazon
     * Redshift with IDC Identity Center.</p>
     */
    inline AuthorizedTokenIssuer& WithAuthorizedAudiencesList(Aws::Vector<Aws::String>&& value) { SetAuthorizedAudiencesList(std::move(value)); return *this;}

    /**
     * <p>The list of audiences for the authorized token issuer for integrating Amazon
     * Redshift with IDC Identity Center.</p>
     */
    inline AuthorizedTokenIssuer& AddAuthorizedAudiencesList(const Aws::String& value) { m_authorizedAudiencesListHasBeenSet = true; m_authorizedAudiencesList.push_back(value); return *this; }

    /**
     * <p>The list of audiences for the authorized token issuer for integrating Amazon
     * Redshift with IDC Identity Center.</p>
     */
    inline AuthorizedTokenIssuer& AddAuthorizedAudiencesList(Aws::String&& value) { m_authorizedAudiencesListHasBeenSet = true; m_authorizedAudiencesList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of audiences for the authorized token issuer for integrating Amazon
     * Redshift with IDC Identity Center.</p>
     */
    inline AuthorizedTokenIssuer& AddAuthorizedAudiencesList(const char* value) { m_authorizedAudiencesListHasBeenSet = true; m_authorizedAudiencesList.push_back(value); return *this; }

  private:

    Aws::String m_trustedTokenIssuerArn;
    bool m_trustedTokenIssuerArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedAudiencesList;
    bool m_authorizedAudiencesListHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
