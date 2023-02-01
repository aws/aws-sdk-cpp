/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteHsmClientCertificateMessage">AWS
   * API Reference</a></p>
   */
  class DeleteHsmClientCertificateRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DeleteHsmClientCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHsmClientCertificate"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the HSM client certificate to be deleted.</p>
     */
    inline const Aws::String& GetHsmClientCertificateIdentifier() const{ return m_hsmClientCertificateIdentifier; }

    /**
     * <p>The identifier of the HSM client certificate to be deleted.</p>
     */
    inline bool HsmClientCertificateIdentifierHasBeenSet() const { return m_hsmClientCertificateIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the HSM client certificate to be deleted.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const Aws::String& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = value; }

    /**
     * <p>The identifier of the HSM client certificate to be deleted.</p>
     */
    inline void SetHsmClientCertificateIdentifier(Aws::String&& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = std::move(value); }

    /**
     * <p>The identifier of the HSM client certificate to be deleted.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const char* value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier.assign(value); }

    /**
     * <p>The identifier of the HSM client certificate to be deleted.</p>
     */
    inline DeleteHsmClientCertificateRequest& WithHsmClientCertificateIdentifier(const Aws::String& value) { SetHsmClientCertificateIdentifier(value); return *this;}

    /**
     * <p>The identifier of the HSM client certificate to be deleted.</p>
     */
    inline DeleteHsmClientCertificateRequest& WithHsmClientCertificateIdentifier(Aws::String&& value) { SetHsmClientCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the HSM client certificate to be deleted.</p>
     */
    inline DeleteHsmClientCertificateRequest& WithHsmClientCertificateIdentifier(const char* value) { SetHsmClientCertificateIdentifier(value); return *this;}

  private:

    Aws::String m_hsmClientCertificateIdentifier;
    bool m_hsmClientCertificateIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
