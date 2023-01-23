/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class ModifyCertificatesRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyCertificatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCertificates"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The new default certificate identifier to override the current one with.</p>
     * <p>To determine the valid values, use the <code>describe-certificates</code> CLI
     * command or the <code>DescribeCertificates</code> API operation.</p>
     */
    inline const Aws::String& GetCertificateIdentifier() const{ return m_certificateIdentifier; }

    /**
     * <p>The new default certificate identifier to override the current one with.</p>
     * <p>To determine the valid values, use the <code>describe-certificates</code> CLI
     * command or the <code>DescribeCertificates</code> API operation.</p>
     */
    inline bool CertificateIdentifierHasBeenSet() const { return m_certificateIdentifierHasBeenSet; }

    /**
     * <p>The new default certificate identifier to override the current one with.</p>
     * <p>To determine the valid values, use the <code>describe-certificates</code> CLI
     * command or the <code>DescribeCertificates</code> API operation.</p>
     */
    inline void SetCertificateIdentifier(const Aws::String& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = value; }

    /**
     * <p>The new default certificate identifier to override the current one with.</p>
     * <p>To determine the valid values, use the <code>describe-certificates</code> CLI
     * command or the <code>DescribeCertificates</code> API operation.</p>
     */
    inline void SetCertificateIdentifier(Aws::String&& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = std::move(value); }

    /**
     * <p>The new default certificate identifier to override the current one with.</p>
     * <p>To determine the valid values, use the <code>describe-certificates</code> CLI
     * command or the <code>DescribeCertificates</code> API operation.</p>
     */
    inline void SetCertificateIdentifier(const char* value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier.assign(value); }

    /**
     * <p>The new default certificate identifier to override the current one with.</p>
     * <p>To determine the valid values, use the <code>describe-certificates</code> CLI
     * command or the <code>DescribeCertificates</code> API operation.</p>
     */
    inline ModifyCertificatesRequest& WithCertificateIdentifier(const Aws::String& value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>The new default certificate identifier to override the current one with.</p>
     * <p>To determine the valid values, use the <code>describe-certificates</code> CLI
     * command or the <code>DescribeCertificates</code> API operation.</p>
     */
    inline ModifyCertificatesRequest& WithCertificateIdentifier(Aws::String&& value) { SetCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>The new default certificate identifier to override the current one with.</p>
     * <p>To determine the valid values, use the <code>describe-certificates</code> CLI
     * command or the <code>DescribeCertificates</code> API operation.</p>
     */
    inline ModifyCertificatesRequest& WithCertificateIdentifier(const char* value) { SetCertificateIdentifier(value); return *this;}


    /**
     * <p>A value that indicates whether to remove the override for the default
     * certificate. If the override is removed, the default certificate is the system
     * default.</p>
     */
    inline bool GetRemoveCustomerOverride() const{ return m_removeCustomerOverride; }

    /**
     * <p>A value that indicates whether to remove the override for the default
     * certificate. If the override is removed, the default certificate is the system
     * default.</p>
     */
    inline bool RemoveCustomerOverrideHasBeenSet() const { return m_removeCustomerOverrideHasBeenSet; }

    /**
     * <p>A value that indicates whether to remove the override for the default
     * certificate. If the override is removed, the default certificate is the system
     * default.</p>
     */
    inline void SetRemoveCustomerOverride(bool value) { m_removeCustomerOverrideHasBeenSet = true; m_removeCustomerOverride = value; }

    /**
     * <p>A value that indicates whether to remove the override for the default
     * certificate. If the override is removed, the default certificate is the system
     * default.</p>
     */
    inline ModifyCertificatesRequest& WithRemoveCustomerOverride(bool value) { SetRemoveCustomerOverride(value); return *this;}

  private:

    Aws::String m_certificateIdentifier;
    bool m_certificateIdentifierHasBeenSet = false;

    bool m_removeCustomerOverride;
    bool m_removeCustomerOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
