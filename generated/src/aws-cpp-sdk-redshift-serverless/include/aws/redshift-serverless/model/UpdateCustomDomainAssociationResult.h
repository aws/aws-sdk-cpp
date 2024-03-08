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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RedshiftServerless
{
namespace Model
{
  class UpdateCustomDomainAssociationResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateCustomDomainAssociationResult();
    AWS_REDSHIFTSERVERLESS_API UpdateCustomDomainAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API UpdateCustomDomainAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN).</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const{ return m_customDomainCertificateArn; }

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN).</p>
     */
    inline void SetCustomDomainCertificateArn(const Aws::String& value) { m_customDomainCertificateArn = value; }

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN).</p>
     */
    inline void SetCustomDomainCertificateArn(Aws::String&& value) { m_customDomainCertificateArn = std::move(value); }

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN).</p>
     */
    inline void SetCustomDomainCertificateArn(const char* value) { m_customDomainCertificateArn.assign(value); }

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN).</p>
     */
    inline UpdateCustomDomainAssociationResult& WithCustomDomainCertificateArn(const Aws::String& value) { SetCustomDomainCertificateArn(value); return *this;}

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN).</p>
     */
    inline UpdateCustomDomainAssociationResult& WithCustomDomainCertificateArn(Aws::String&& value) { SetCustomDomainCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN).</p>
     */
    inline UpdateCustomDomainAssociationResult& WithCustomDomainCertificateArn(const char* value) { SetCustomDomainCertificateArn(value); return *this;}


    /**
     * <p>The expiration time for the certificate.</p>
     */
    inline const Aws::Utils::DateTime& GetCustomDomainCertificateExpiryTime() const{ return m_customDomainCertificateExpiryTime; }

    /**
     * <p>The expiration time for the certificate.</p>
     */
    inline void SetCustomDomainCertificateExpiryTime(const Aws::Utils::DateTime& value) { m_customDomainCertificateExpiryTime = value; }

    /**
     * <p>The expiration time for the certificate.</p>
     */
    inline void SetCustomDomainCertificateExpiryTime(Aws::Utils::DateTime&& value) { m_customDomainCertificateExpiryTime = std::move(value); }

    /**
     * <p>The expiration time for the certificate.</p>
     */
    inline UpdateCustomDomainAssociationResult& WithCustomDomainCertificateExpiryTime(const Aws::Utils::DateTime& value) { SetCustomDomainCertificateExpiryTime(value); return *this;}

    /**
     * <p>The expiration time for the certificate.</p>
     */
    inline UpdateCustomDomainAssociationResult& WithCustomDomainCertificateExpiryTime(Aws::Utils::DateTime&& value) { SetCustomDomainCertificateExpiryTime(std::move(value)); return *this;}


    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainName = value; }

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainName = std::move(value); }

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline void SetCustomDomainName(const char* value) { m_customDomainName.assign(value); }

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline UpdateCustomDomainAssociationResult& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline UpdateCustomDomainAssociationResult& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}

    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline UpdateCustomDomainAssociationResult& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}


    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupName = value; }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupName = std::move(value); }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupName.assign(value); }

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline UpdateCustomDomainAssociationResult& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline UpdateCustomDomainAssociationResult& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup associated with the database.</p>
     */
    inline UpdateCustomDomainAssociationResult& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateCustomDomainAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateCustomDomainAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateCustomDomainAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_customDomainCertificateArn;

    Aws::Utils::DateTime m_customDomainCertificateExpiryTime;

    Aws::String m_customDomainName;

    Aws::String m_workgroupName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
