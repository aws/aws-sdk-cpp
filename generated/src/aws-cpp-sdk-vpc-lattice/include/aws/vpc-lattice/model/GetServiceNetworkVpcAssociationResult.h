/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/model/ServiceNetworkVpcAssociationStatus.h>
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
  class GetServiceNetworkVpcAssociationResult
  {
  public:
    AWS_VPCLATTICE_API GetServiceNetworkVpcAssociationResult();
    AWS_VPCLATTICE_API GetServiceNetworkVpcAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetServiceNetworkVpcAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that the association was created, specified in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the association was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time that the association was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the association was created, specified in ISO-8601
     * format.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the association was created, specified in ISO-8601
     * format.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The account that created the association.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The account that created the association.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The account that created the association.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The account that created the association.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The account that created the association.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The account that created the association.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The account that created the association.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The failure code.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(const Aws::String& value) { m_failureCode = value; }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(Aws::String&& value) { m_failureCode = std::move(value); }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(const char* value) { m_failureCode.assign(value); }

    /**
     * <p>The failure code.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}

    /**
     * <p>The failure code.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}


    /**
     * <p>The failure message.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>The failure message.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }

    /**
     * <p>The failure message.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }

    /**
     * <p>The failure message.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }

    /**
     * <p>The failure message.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>The failure message.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>The failure message.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


    /**
     * <p>The ID of the specified association between the service network and the
     * VPC.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the specified association between the service network and the
     * VPC.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the specified association between the service network and the
     * VPC.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the specified association between the service network and the
     * VPC.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the specified association between the service network and the
     * VPC.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the specified association between the service network and the
     * VPC.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the specified association between the service network and the
     * VPC.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date and time that the association was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time that the association was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The date and time that the association was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time that the association was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the association was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The IDs of the security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The IDs of the security groups.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIds = value; }

    /**
     * <p>The IDs of the security groups.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIds = std::move(value); }

    /**
     * <p>The IDs of the security groups.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The IDs of the security groups.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& AddSecurityGroupIds(const char* value) { m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const{ return m_serviceNetworkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline void SetServiceNetworkArn(const Aws::String& value) { m_serviceNetworkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline void SetServiceNetworkArn(Aws::String&& value) { m_serviceNetworkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline void SetServiceNetworkArn(const char* value) { m_serviceNetworkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithServiceNetworkArn(const Aws::String& value) { SetServiceNetworkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithServiceNetworkArn(Aws::String&& value) { SetServiceNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithServiceNetworkArn(const char* value) { SetServiceNetworkArn(value); return *this;}


    /**
     * <p>The ID of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkId() const{ return m_serviceNetworkId; }

    /**
     * <p>The ID of the service network.</p>
     */
    inline void SetServiceNetworkId(const Aws::String& value) { m_serviceNetworkId = value; }

    /**
     * <p>The ID of the service network.</p>
     */
    inline void SetServiceNetworkId(Aws::String&& value) { m_serviceNetworkId = std::move(value); }

    /**
     * <p>The ID of the service network.</p>
     */
    inline void SetServiceNetworkId(const char* value) { m_serviceNetworkId.assign(value); }

    /**
     * <p>The ID of the service network.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithServiceNetworkId(const Aws::String& value) { SetServiceNetworkId(value); return *this;}

    /**
     * <p>The ID of the service network.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithServiceNetworkId(Aws::String&& value) { SetServiceNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service network.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithServiceNetworkId(const char* value) { SetServiceNetworkId(value); return *this;}


    /**
     * <p>The name of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkName() const{ return m_serviceNetworkName; }

    /**
     * <p>The name of the service network.</p>
     */
    inline void SetServiceNetworkName(const Aws::String& value) { m_serviceNetworkName = value; }

    /**
     * <p>The name of the service network.</p>
     */
    inline void SetServiceNetworkName(Aws::String&& value) { m_serviceNetworkName = std::move(value); }

    /**
     * <p>The name of the service network.</p>
     */
    inline void SetServiceNetworkName(const char* value) { m_serviceNetworkName.assign(value); }

    /**
     * <p>The name of the service network.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithServiceNetworkName(const Aws::String& value) { SetServiceNetworkName(value); return *this;}

    /**
     * <p>The name of the service network.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithServiceNetworkName(Aws::String&& value) { SetServiceNetworkName(std::move(value)); return *this;}

    /**
     * <p>The name of the service network.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithServiceNetworkName(const char* value) { SetServiceNetworkName(value); return *this;}


    /**
     * <p>The status of the association.</p>
     */
    inline const ServiceNetworkVpcAssociationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the association.</p>
     */
    inline void SetStatus(const ServiceNetworkVpcAssociationStatus& value) { m_status = value; }

    /**
     * <p>The status of the association.</p>
     */
    inline void SetStatus(ServiceNetworkVpcAssociationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the association.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithStatus(const ServiceNetworkVpcAssociationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the association.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithStatus(ServiceNetworkVpcAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline GetServiceNetworkVpcAssociationResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetServiceNetworkVpcAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetServiceNetworkVpcAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetServiceNetworkVpcAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_failureCode;

    Aws::String m_failureMessage;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Vector<Aws::String> m_securityGroupIds;

    Aws::String m_serviceNetworkArn;

    Aws::String m_serviceNetworkId;

    Aws::String m_serviceNetworkName;

    ServiceNetworkVpcAssociationStatus m_status;

    Aws::String m_vpcId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
