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
    AWS_REDSHIFT_API Association();
    AWS_REDSHIFT_API Association(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API Association& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) for the certificate associated with the custom
     * domain.</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const{ return m_customDomainCertificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate associated with the custom
     * domain.</p>
     */
    inline bool CustomDomainCertificateArnHasBeenSet() const { return m_customDomainCertificateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate associated with the custom
     * domain.</p>
     */
    inline void SetCustomDomainCertificateArn(const Aws::String& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate associated with the custom
     * domain.</p>
     */
    inline void SetCustomDomainCertificateArn(Aws::String&& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate associated with the custom
     * domain.</p>
     */
    inline void SetCustomDomainCertificateArn(const char* value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate associated with the custom
     * domain.</p>
     */
    inline Association& WithCustomDomainCertificateArn(const Aws::String& value) { SetCustomDomainCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate associated with the custom
     * domain.</p>
     */
    inline Association& WithCustomDomainCertificateArn(Aws::String&& value) { SetCustomDomainCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate associated with the custom
     * domain.</p>
     */
    inline Association& WithCustomDomainCertificateArn(const char* value) { SetCustomDomainCertificateArn(value); return *this;}


    /**
     * <p>The expiration date for the certificate.</p>
     */
    inline const Aws::Utils::DateTime& GetCustomDomainCertificateExpiryDate() const{ return m_customDomainCertificateExpiryDate; }

    /**
     * <p>The expiration date for the certificate.</p>
     */
    inline bool CustomDomainCertificateExpiryDateHasBeenSet() const { return m_customDomainCertificateExpiryDateHasBeenSet; }

    /**
     * <p>The expiration date for the certificate.</p>
     */
    inline void SetCustomDomainCertificateExpiryDate(const Aws::Utils::DateTime& value) { m_customDomainCertificateExpiryDateHasBeenSet = true; m_customDomainCertificateExpiryDate = value; }

    /**
     * <p>The expiration date for the certificate.</p>
     */
    inline void SetCustomDomainCertificateExpiryDate(Aws::Utils::DateTime&& value) { m_customDomainCertificateExpiryDateHasBeenSet = true; m_customDomainCertificateExpiryDate = std::move(value); }

    /**
     * <p>The expiration date for the certificate.</p>
     */
    inline Association& WithCustomDomainCertificateExpiryDate(const Aws::Utils::DateTime& value) { SetCustomDomainCertificateExpiryDate(value); return *this;}

    /**
     * <p>The expiration date for the certificate.</p>
     */
    inline Association& WithCustomDomainCertificateExpiryDate(Aws::Utils::DateTime&& value) { SetCustomDomainCertificateExpiryDate(std::move(value)); return *this;}


    /**
     * <p>A list of all associated clusters and domain names tied to a specific
     * certificate.</p>
     */
    inline const Aws::Vector<CertificateAssociation>& GetCertificateAssociations() const{ return m_certificateAssociations; }

    /**
     * <p>A list of all associated clusters and domain names tied to a specific
     * certificate.</p>
     */
    inline bool CertificateAssociationsHasBeenSet() const { return m_certificateAssociationsHasBeenSet; }

    /**
     * <p>A list of all associated clusters and domain names tied to a specific
     * certificate.</p>
     */
    inline void SetCertificateAssociations(const Aws::Vector<CertificateAssociation>& value) { m_certificateAssociationsHasBeenSet = true; m_certificateAssociations = value; }

    /**
     * <p>A list of all associated clusters and domain names tied to a specific
     * certificate.</p>
     */
    inline void SetCertificateAssociations(Aws::Vector<CertificateAssociation>&& value) { m_certificateAssociationsHasBeenSet = true; m_certificateAssociations = std::move(value); }

    /**
     * <p>A list of all associated clusters and domain names tied to a specific
     * certificate.</p>
     */
    inline Association& WithCertificateAssociations(const Aws::Vector<CertificateAssociation>& value) { SetCertificateAssociations(value); return *this;}

    /**
     * <p>A list of all associated clusters and domain names tied to a specific
     * certificate.</p>
     */
    inline Association& WithCertificateAssociations(Aws::Vector<CertificateAssociation>&& value) { SetCertificateAssociations(std::move(value)); return *this;}

    /**
     * <p>A list of all associated clusters and domain names tied to a specific
     * certificate.</p>
     */
    inline Association& AddCertificateAssociations(const CertificateAssociation& value) { m_certificateAssociationsHasBeenSet = true; m_certificateAssociations.push_back(value); return *this; }

    /**
     * <p>A list of all associated clusters and domain names tied to a specific
     * certificate.</p>
     */
    inline Association& AddCertificateAssociations(CertificateAssociation&& value) { m_certificateAssociationsHasBeenSet = true; m_certificateAssociations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_customDomainCertificateArn;
    bool m_customDomainCertificateArnHasBeenSet = false;

    Aws::Utils::DateTime m_customDomainCertificateExpiryDate;
    bool m_customDomainCertificateExpiryDateHasBeenSet = false;

    Aws::Vector<CertificateAssociation> m_certificateAssociations;
    bool m_certificateAssociationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
