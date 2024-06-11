/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>An object that represents the custom domain name association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/Association">AWS
   * API Reference</a></p>
   */
  class Association
  {
  public:
    AWS_REDSHIFTSERVERLESS_API Association();
    AWS_REDSHIFTSERVERLESS_API Association(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Association& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN).</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const{ return m_customDomainCertificateArn; }
    inline bool CustomDomainCertificateArnHasBeenSet() const { return m_customDomainCertificateArnHasBeenSet; }
    inline void SetCustomDomainCertificateArn(const Aws::String& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = value; }
    inline void SetCustomDomainCertificateArn(Aws::String&& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = std::move(value); }
    inline void SetCustomDomainCertificateArn(const char* value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn.assign(value); }
    inline Association& WithCustomDomainCertificateArn(const Aws::String& value) { SetCustomDomainCertificateArn(value); return *this;}
    inline Association& WithCustomDomainCertificateArn(Aws::String&& value) { SetCustomDomainCertificateArn(std::move(value)); return *this;}
    inline Association& WithCustomDomainCertificateArn(const char* value) { SetCustomDomainCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time for the certificate.</p>
     */
    inline const Aws::Utils::DateTime& GetCustomDomainCertificateExpiryTime() const{ return m_customDomainCertificateExpiryTime; }
    inline bool CustomDomainCertificateExpiryTimeHasBeenSet() const { return m_customDomainCertificateExpiryTimeHasBeenSet; }
    inline void SetCustomDomainCertificateExpiryTime(const Aws::Utils::DateTime& value) { m_customDomainCertificateExpiryTimeHasBeenSet = true; m_customDomainCertificateExpiryTime = value; }
    inline void SetCustomDomainCertificateExpiryTime(Aws::Utils::DateTime&& value) { m_customDomainCertificateExpiryTimeHasBeenSet = true; m_customDomainCertificateExpiryTime = std::move(value); }
    inline Association& WithCustomDomainCertificateExpiryTime(const Aws::Utils::DateTime& value) { SetCustomDomainCertificateExpiryTime(value); return *this;}
    inline Association& WithCustomDomainCertificateExpiryTime(Aws::Utils::DateTime&& value) { SetCustomDomainCertificateExpiryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = value; }
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::move(value); }
    inline void SetCustomDomainName(const char* value) { m_customDomainNameHasBeenSet = true; m_customDomainName.assign(value); }
    inline Association& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}
    inline Association& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}
    inline Association& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }
    inline Association& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}
    inline Association& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}
    inline Association& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}
    ///@}
  private:

    Aws::String m_customDomainCertificateArn;
    bool m_customDomainCertificateArnHasBeenSet = false;

    Aws::Utils::DateTime m_customDomainCertificateExpiryTime;
    bool m_customDomainCertificateExpiryTimeHasBeenSet = false;

    Aws::String m_customDomainName;
    bool m_customDomainNameHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
