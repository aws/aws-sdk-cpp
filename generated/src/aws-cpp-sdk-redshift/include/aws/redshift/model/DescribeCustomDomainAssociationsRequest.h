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
  class DescribeCustomDomainAssociationsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeCustomDomainAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCustomDomainAssociations"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The custom domain name for the custom domain association.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }

    /**
     * <p>The custom domain name for the custom domain association.</p>
     */
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }

    /**
     * <p>The custom domain name for the custom domain association.</p>
     */
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = value; }

    /**
     * <p>The custom domain name for the custom domain association.</p>
     */
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::move(value); }

    /**
     * <p>The custom domain name for the custom domain association.</p>
     */
    inline void SetCustomDomainName(const char* value) { m_customDomainNameHasBeenSet = true; m_customDomainName.assign(value); }

    /**
     * <p>The custom domain name for the custom domain association.</p>
     */
    inline DescribeCustomDomainAssociationsRequest& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}

    /**
     * <p>The custom domain name for the custom domain association.</p>
     */
    inline DescribeCustomDomainAssociationsRequest& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}

    /**
     * <p>The custom domain name for the custom domain association.</p>
     */
    inline DescribeCustomDomainAssociationsRequest& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}


    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain
     * association.</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const{ return m_customDomainCertificateArn; }

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain
     * association.</p>
     */
    inline bool CustomDomainCertificateArnHasBeenSet() const { return m_customDomainCertificateArnHasBeenSet; }

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain
     * association.</p>
     */
    inline void SetCustomDomainCertificateArn(const Aws::String& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = value; }

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain
     * association.</p>
     */
    inline void SetCustomDomainCertificateArn(Aws::String&& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = std::move(value); }

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain
     * association.</p>
     */
    inline void SetCustomDomainCertificateArn(const char* value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn.assign(value); }

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain
     * association.</p>
     */
    inline DescribeCustomDomainAssociationsRequest& WithCustomDomainCertificateArn(const Aws::String& value) { SetCustomDomainCertificateArn(value); return *this;}

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain
     * association.</p>
     */
    inline DescribeCustomDomainAssociationsRequest& WithCustomDomainCertificateArn(Aws::String&& value) { SetCustomDomainCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The certificate Amazon Resource Name (ARN) for the custom domain
     * association.</p>
     */
    inline DescribeCustomDomainAssociationsRequest& WithCustomDomainCertificateArn(const char* value) { SetCustomDomainCertificateArn(value); return *this;}


    /**
     * <p>The maximum records setting for the associated custom domain.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum records setting for the associated custom domain.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum records setting for the associated custom domain.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum records setting for the associated custom domain.</p>
     */
    inline DescribeCustomDomainAssociationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline DescribeCustomDomainAssociationsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline DescribeCustomDomainAssociationsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline DescribeCustomDomainAssociationsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_customDomainName;
    bool m_customDomainNameHasBeenSet = false;

    Aws::String m_customDomainCertificateArn;
    bool m_customDomainCertificateArnHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
