/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/ServiceNetworkServiceAssociationStatus.h>
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
  class DeleteServiceNetworkServiceAssociationResult
  {
  public:
    AWS_VPCLATTICE_API DeleteServiceNetworkServiceAssociationResult();
    AWS_VPCLATTICE_API DeleteServiceNetworkServiceAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API DeleteServiceNetworkServiceAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeleteServiceNetworkServiceAssociationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline DeleteServiceNetworkServiceAssociationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline DeleteServiceNetworkServiceAssociationResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline DeleteServiceNetworkServiceAssociationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline DeleteServiceNetworkServiceAssociationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline DeleteServiceNetworkServiceAssociationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The operation's status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it when the status is
     * <code>DELETE_IN_PROGRESS</code>, there is no change in the status.</p>
     */
    inline const ServiceNetworkServiceAssociationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The operation's status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it when the status is
     * <code>DELETE_IN_PROGRESS</code>, there is no change in the status.</p>
     */
    inline void SetStatus(const ServiceNetworkServiceAssociationStatus& value) { m_status = value; }

    /**
     * <p>The operation's status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it when the status is
     * <code>DELETE_IN_PROGRESS</code>, there is no change in the status.</p>
     */
    inline void SetStatus(ServiceNetworkServiceAssociationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The operation's status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it when the status is
     * <code>DELETE_IN_PROGRESS</code>, there is no change in the status.</p>
     */
    inline DeleteServiceNetworkServiceAssociationResult& WithStatus(const ServiceNetworkServiceAssociationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The operation's status. You can retry the operation if the status is
     * <code>DELETE_FAILED</code>. However, if you retry it when the status is
     * <code>DELETE_IN_PROGRESS</code>, there is no change in the status.</p>
     */
    inline DeleteServiceNetworkServiceAssociationResult& WithStatus(ServiceNetworkServiceAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteServiceNetworkServiceAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteServiceNetworkServiceAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteServiceNetworkServiceAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    ServiceNetworkServiceAssociationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
