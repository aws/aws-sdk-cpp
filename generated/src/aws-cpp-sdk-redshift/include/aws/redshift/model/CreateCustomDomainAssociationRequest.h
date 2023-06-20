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
   */
  class CreateCustomDomainAssociationRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API CreateCustomDomainAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomDomainAssociation"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The custom domain name for a custom domain association.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }

    /**
     * <p>The custom domain name for a custom domain association.</p>
     */
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }

    /**
     * <p>The custom domain name for a custom domain association.</p>
     */
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = value; }

    /**
     * <p>The custom domain name for a custom domain association.</p>
     */
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::move(value); }

    /**
     * <p>The custom domain name for a custom domain association.</p>
     */
    inline void SetCustomDomainName(const char* value) { m_customDomainNameHasBeenSet = true; m_customDomainName.assign(value); }

    /**
     * <p>The custom domain name for a custom domain association.</p>
     */
    inline CreateCustomDomainAssociationRequest& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}

    /**
     * <p>The custom domain name for a custom domain association.</p>
     */
    inline CreateCustomDomainAssociationRequest& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}

    /**
     * <p>The custom domain name for a custom domain association.</p>
     */
    inline CreateCustomDomainAssociationRequest& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}


    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain name
     * association.</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const{ return m_customDomainCertificateArn; }

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain name
     * association.</p>
     */
    inline bool CustomDomainCertificateArnHasBeenSet() const { return m_customDomainCertificateArnHasBeenSet; }

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain name
     * association.</p>
     */
    inline void SetCustomDomainCertificateArn(const Aws::String& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = value; }

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain name
     * association.</p>
     */
    inline void SetCustomDomainCertificateArn(Aws::String&& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = std::move(value); }

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain name
     * association.</p>
     */
    inline void SetCustomDomainCertificateArn(const char* value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn.assign(value); }

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain name
     * association.</p>
     */
    inline CreateCustomDomainAssociationRequest& WithCustomDomainCertificateArn(const Aws::String& value) { SetCustomDomainCertificateArn(value); return *this;}

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain name
     * association.</p>
     */
    inline CreateCustomDomainAssociationRequest& WithCustomDomainCertificateArn(Aws::String&& value) { SetCustomDomainCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain name
     * association.</p>
     */
    inline CreateCustomDomainAssociationRequest& WithCustomDomainCertificateArn(const char* value) { SetCustomDomainCertificateArn(value); return *this;}


    /**
     * <p>The cluster identifier that the custom domain is associated with.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier that the custom domain is associated with.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier that the custom domain is associated with.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier that the custom domain is associated with.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier that the custom domain is associated with.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier that the custom domain is associated with.</p>
     */
    inline CreateCustomDomainAssociationRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier that the custom domain is associated with.</p>
     */
    inline CreateCustomDomainAssociationRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier that the custom domain is associated with.</p>
     */
    inline CreateCustomDomainAssociationRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

  private:

    Aws::String m_customDomainName;
    bool m_customDomainNameHasBeenSet = false;

    Aws::String m_customDomainCertificateArn;
    bool m_customDomainCertificateArnHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
