/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateServiceNetworkVpcAssociationResult
  {
  public:
    AWS_VPCLATTICE_API UpdateServiceNetworkVpcAssociationResult();
    AWS_VPCLATTICE_API UpdateServiceNetworkVpcAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API UpdateServiceNetworkVpcAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateServiceNetworkVpcAssociationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline UpdateServiceNetworkVpcAssociationResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The account that created the association.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The account that created the association.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& WithId(const char* value) { SetId(value); return *this;}


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
    inline UpdateServiceNetworkVpcAssociationResult& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The IDs of the security groups.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& AddSecurityGroupIds(const char* value) { m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it while the status is
     * <code>DELETE_IN_PROGRESS</code>, there is no change in the status.</p>
     */
    inline const ServiceNetworkVpcAssociationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it while the status is
     * <code>DELETE_IN_PROGRESS</code>, there is no change in the status.</p>
     */
    inline void SetStatus(const ServiceNetworkVpcAssociationStatus& value) { m_status = value; }

    /**
     * <p>The status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it while the status is
     * <code>DELETE_IN_PROGRESS</code>, there is no change in the status.</p>
     */
    inline void SetStatus(ServiceNetworkVpcAssociationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it while the status is
     * <code>DELETE_IN_PROGRESS</code>, there is no change in the status.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& WithStatus(const ServiceNetworkVpcAssociationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it while the status is
     * <code>DELETE_IN_PROGRESS</code>, there is no change in the status.</p>
     */
    inline UpdateServiceNetworkVpcAssociationResult& WithStatus(ServiceNetworkVpcAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateServiceNetworkVpcAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateServiceNetworkVpcAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateServiceNetworkVpcAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_createdBy;

    Aws::String m_id;

    Aws::Vector<Aws::String> m_securityGroupIds;

    ServiceNetworkVpcAssociationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
