/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class UpdateCustomDomainAssociationRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateCustomDomainAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomDomainAssociation"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN). This is
     * optional.</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const{ return m_customDomainCertificateArn; }

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN). This is
     * optional.</p>
     */
    inline bool CustomDomainCertificateArnHasBeenSet() const { return m_customDomainCertificateArnHasBeenSet; }

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN). This is
     * optional.</p>
     */
    inline void SetCustomDomainCertificateArn(const Aws::String& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = value; }

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN). This is
     * optional.</p>
     */
    inline void SetCustomDomainCertificateArn(Aws::String&& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = std::move(value); }

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN). This is
     * optional.</p>
     */
    inline void SetCustomDomainCertificateArn(const char* value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn.assign(value); }

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN). This is
     * optional.</p>
     */
    inline UpdateCustomDomainAssociationRequest& WithCustomDomainCertificateArn(const Aws::String& value) { SetCustomDomainCertificateArn(value); return *this;}

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN). This is
     * optional.</p>
     */
    inline UpdateCustomDomainAssociationRequest& WithCustomDomainCertificateArn(Aws::String&& value) { SetCustomDomainCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN). This is
     * optional.</p>
     */
    inline UpdateCustomDomainAssociationRequest& WithCustomDomainCertificateArn(const char* value) { SetCustomDomainCertificateArn(value); return *this;}


    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = value; }

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::move(value); }

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline void SetCustomDomainName(const char* value) { m_customDomainNameHasBeenSet = true; m_customDomainName.assign(value); }

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline UpdateCustomDomainAssociationRequest& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline UpdateCustomDomainAssociationRequest& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline UpdateCustomDomainAssociationRequest& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}


    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline UpdateCustomDomainAssociationRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline UpdateCustomDomainAssociationRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline UpdateCustomDomainAssociationRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    Aws::String m_customDomainCertificateArn;
    bool m_customDomainCertificateArnHasBeenSet = false;

    Aws::String m_customDomainName;
    bool m_customDomainNameHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
