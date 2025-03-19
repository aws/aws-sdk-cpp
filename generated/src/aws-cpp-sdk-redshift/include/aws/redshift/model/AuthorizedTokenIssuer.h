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
    AWS_REDSHIFT_API AuthorizedTokenIssuer() = default;
    AWS_REDSHIFT_API AuthorizedTokenIssuer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API AuthorizedTokenIssuer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN for the authorized token issuer for integrating Amazon Redshift with
     * IDC Identity Center.</p>
     */
    inline const Aws::String& GetTrustedTokenIssuerArn() const { return m_trustedTokenIssuerArn; }
    inline bool TrustedTokenIssuerArnHasBeenSet() const { return m_trustedTokenIssuerArnHasBeenSet; }
    template<typename TrustedTokenIssuerArnT = Aws::String>
    void SetTrustedTokenIssuerArn(TrustedTokenIssuerArnT&& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = std::forward<TrustedTokenIssuerArnT>(value); }
    template<typename TrustedTokenIssuerArnT = Aws::String>
    AuthorizedTokenIssuer& WithTrustedTokenIssuerArn(TrustedTokenIssuerArnT&& value) { SetTrustedTokenIssuerArn(std::forward<TrustedTokenIssuerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of audiences for the authorized token issuer for integrating Amazon
     * Redshift with IDC Identity Center.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedAudiencesList() const { return m_authorizedAudiencesList; }
    inline bool AuthorizedAudiencesListHasBeenSet() const { return m_authorizedAudiencesListHasBeenSet; }
    template<typename AuthorizedAudiencesListT = Aws::Vector<Aws::String>>
    void SetAuthorizedAudiencesList(AuthorizedAudiencesListT&& value) { m_authorizedAudiencesListHasBeenSet = true; m_authorizedAudiencesList = std::forward<AuthorizedAudiencesListT>(value); }
    template<typename AuthorizedAudiencesListT = Aws::Vector<Aws::String>>
    AuthorizedTokenIssuer& WithAuthorizedAudiencesList(AuthorizedAudiencesListT&& value) { SetAuthorizedAudiencesList(std::forward<AuthorizedAudiencesListT>(value)); return *this;}
    template<typename AuthorizedAudiencesListT = Aws::String>
    AuthorizedTokenIssuer& AddAuthorizedAudiencesList(AuthorizedAudiencesListT&& value) { m_authorizedAudiencesListHasBeenSet = true; m_authorizedAudiencesList.emplace_back(std::forward<AuthorizedAudiencesListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trustedTokenIssuerArn;
    bool m_trustedTokenIssuerArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedAudiencesList;
    bool m_authorizedAudiencesListHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
