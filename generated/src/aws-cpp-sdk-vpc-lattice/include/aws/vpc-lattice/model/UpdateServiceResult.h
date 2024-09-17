/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/AuthType.h>
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
namespace VPCLattice
{
namespace Model
{
  class UpdateServiceResult
  {
  public:
    AWS_VPCLATTICE_API UpdateServiceResult();
    AWS_VPCLATTICE_API UpdateServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API UpdateServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateServiceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateServiceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateServiceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IAM policy.</p>
     */
    inline const AuthType& GetAuthType() const{ return m_authType; }
    inline void SetAuthType(const AuthType& value) { m_authType = value; }
    inline void SetAuthType(AuthType&& value) { m_authType = std::move(value); }
    inline UpdateServiceResult& WithAuthType(const AuthType& value) { SetAuthType(value); return *this;}
    inline UpdateServiceResult& WithAuthType(AuthType&& value) { SetAuthType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArn.assign(value); }
    inline UpdateServiceResult& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline UpdateServiceResult& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline UpdateServiceResult& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom domain name of the service.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainName = value; }
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainName = std::move(value); }
    inline void SetCustomDomainName(const char* value) { m_customDomainName.assign(value); }
    inline UpdateServiceResult& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}
    inline UpdateServiceResult& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}
    inline UpdateServiceResult& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateServiceResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateServiceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateServiceResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateServiceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateServiceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateServiceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    AuthType m_authType;

    Aws::String m_certificateArn;

    Aws::String m_customDomainName;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
