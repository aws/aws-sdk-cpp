/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/CertificateAssociation.h>
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
   * <p>Contains information about the custom domain name association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/Association">AWS
   * API Reference</a></p>
   */
  class Association
  {
  public:
    AWS_REDSHIFT_API Association() = default;
    AWS_REDSHIFT_API Association(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API Association& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the certificate associated with the custom
     * domain.</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const { return m_customDomainCertificateArn; }
    inline bool CustomDomainCertificateArnHasBeenSet() const { return m_customDomainCertificateArnHasBeenSet; }
    template<typename CustomDomainCertificateArnT = Aws::String>
    void SetCustomDomainCertificateArn(CustomDomainCertificateArnT&& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = std::forward<CustomDomainCertificateArnT>(value); }
    template<typename CustomDomainCertificateArnT = Aws::String>
    Association& WithCustomDomainCertificateArn(CustomDomainCertificateArnT&& value) { SetCustomDomainCertificateArn(std::forward<CustomDomainCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration date for the certificate.</p>
     */
    inline const Aws::Utils::DateTime& GetCustomDomainCertificateExpiryDate() const { return m_customDomainCertificateExpiryDate; }
    inline bool CustomDomainCertificateExpiryDateHasBeenSet() const { return m_customDomainCertificateExpiryDateHasBeenSet; }
    template<typename CustomDomainCertificateExpiryDateT = Aws::Utils::DateTime>
    void SetCustomDomainCertificateExpiryDate(CustomDomainCertificateExpiryDateT&& value) { m_customDomainCertificateExpiryDateHasBeenSet = true; m_customDomainCertificateExpiryDate = std::forward<CustomDomainCertificateExpiryDateT>(value); }
    template<typename CustomDomainCertificateExpiryDateT = Aws::Utils::DateTime>
    Association& WithCustomDomainCertificateExpiryDate(CustomDomainCertificateExpiryDateT&& value) { SetCustomDomainCertificateExpiryDate(std::forward<CustomDomainCertificateExpiryDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all associated clusters and domain names tied to a specific
     * certificate.</p>
     */
    inline const Aws::Vector<CertificateAssociation>& GetCertificateAssociations() const { return m_certificateAssociations; }
    inline bool CertificateAssociationsHasBeenSet() const { return m_certificateAssociationsHasBeenSet; }
    template<typename CertificateAssociationsT = Aws::Vector<CertificateAssociation>>
    void SetCertificateAssociations(CertificateAssociationsT&& value) { m_certificateAssociationsHasBeenSet = true; m_certificateAssociations = std::forward<CertificateAssociationsT>(value); }
    template<typename CertificateAssociationsT = Aws::Vector<CertificateAssociation>>
    Association& WithCertificateAssociations(CertificateAssociationsT&& value) { SetCertificateAssociations(std::forward<CertificateAssociationsT>(value)); return *this;}
    template<typename CertificateAssociationsT = CertificateAssociation>
    Association& AddCertificateAssociations(CertificateAssociationsT&& value) { m_certificateAssociationsHasBeenSet = true; m_certificateAssociations.emplace_back(std::forward<CertificateAssociationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_customDomainCertificateArn;
    bool m_customDomainCertificateArnHasBeenSet = false;

    Aws::Utils::DateTime m_customDomainCertificateExpiryDate{};
    bool m_customDomainCertificateExpiryDateHasBeenSet = false;

    Aws::Vector<CertificateAssociation> m_certificateAssociations;
    bool m_certificateAssociationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
