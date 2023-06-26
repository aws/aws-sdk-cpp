/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/AuthType.h>
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
namespace VPCLattice
{
namespace Model
{
  class GetServiceNetworkResult
  {
  public:
    AWS_VPCLATTICE_API GetServiceNetworkResult();
    AWS_VPCLATTICE_API GetServiceNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetServiceNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline GetServiceNetworkResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline GetServiceNetworkResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline GetServiceNetworkResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type of IAM policy.</p>
     */
    inline const AuthType& GetAuthType() const{ return m_authType; }

    /**
     * <p>The type of IAM policy.</p>
     */
    inline void SetAuthType(const AuthType& value) { m_authType = value; }

    /**
     * <p>The type of IAM policy.</p>
     */
    inline void SetAuthType(AuthType&& value) { m_authType = std::move(value); }

    /**
     * <p>The type of IAM policy.</p>
     */
    inline GetServiceNetworkResult& WithAuthType(const AuthType& value) { SetAuthType(value); return *this;}

    /**
     * <p>The type of IAM policy.</p>
     */
    inline GetServiceNetworkResult& WithAuthType(AuthType&& value) { SetAuthType(std::move(value)); return *this;}


    /**
     * <p>The date and time that the service network was created, specified in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the service network was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time that the service network was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the service network was created, specified in ISO-8601
     * format.</p>
     */
    inline GetServiceNetworkResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the service network was created, specified in ISO-8601
     * format.</p>
     */
    inline GetServiceNetworkResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The ID of the service network.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the service network.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the service network.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the service network.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the service network.</p>
     */
    inline GetServiceNetworkResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the service network.</p>
     */
    inline GetServiceNetworkResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service network.</p>
     */
    inline GetServiceNetworkResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date and time of the last update, specified in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time of the last update, specified in ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The date and time of the last update, specified in ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time of the last update, specified in ISO-8601 format.</p>
     */
    inline GetServiceNetworkResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time of the last update, specified in ISO-8601 format.</p>
     */
    inline GetServiceNetworkResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the service network.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service network.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the service network.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the service network.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the service network.</p>
     */
    inline GetServiceNetworkResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service network.</p>
     */
    inline GetServiceNetworkResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service network.</p>
     */
    inline GetServiceNetworkResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The number of services associated with the service network.</p>
     */
    inline long long GetNumberOfAssociatedServices() const{ return m_numberOfAssociatedServices; }

    /**
     * <p>The number of services associated with the service network.</p>
     */
    inline void SetNumberOfAssociatedServices(long long value) { m_numberOfAssociatedServices = value; }

    /**
     * <p>The number of services associated with the service network.</p>
     */
    inline GetServiceNetworkResult& WithNumberOfAssociatedServices(long long value) { SetNumberOfAssociatedServices(value); return *this;}


    /**
     * <p>The number of VPCs associated with the service network.</p>
     */
    inline long long GetNumberOfAssociatedVPCs() const{ return m_numberOfAssociatedVPCs; }

    /**
     * <p>The number of VPCs associated with the service network.</p>
     */
    inline void SetNumberOfAssociatedVPCs(long long value) { m_numberOfAssociatedVPCs = value; }

    /**
     * <p>The number of VPCs associated with the service network.</p>
     */
    inline GetServiceNetworkResult& WithNumberOfAssociatedVPCs(long long value) { SetNumberOfAssociatedVPCs(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetServiceNetworkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetServiceNetworkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetServiceNetworkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    AuthType m_authType;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    long long m_numberOfAssociatedServices;

    long long m_numberOfAssociatedVPCs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
