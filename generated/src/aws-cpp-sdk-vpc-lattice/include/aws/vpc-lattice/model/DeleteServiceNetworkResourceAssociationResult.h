/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/ServiceNetworkResourceAssociationStatus.h>
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
  class DeleteServiceNetworkResourceAssociationResult
  {
  public:
    AWS_VPCLATTICE_API DeleteServiceNetworkResourceAssociationResult();
    AWS_VPCLATTICE_API DeleteServiceNetworkResourceAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API DeleteServiceNetworkResourceAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeleteServiceNetworkResourceAssociationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeleteServiceNetworkResourceAssociationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeleteServiceNetworkResourceAssociationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DeleteServiceNetworkResourceAssociationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeleteServiceNetworkResourceAssociationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeleteServiceNetworkResourceAssociationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the association.</p>
     */
    inline const ServiceNetworkResourceAssociationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ServiceNetworkResourceAssociationStatus& value) { m_status = value; }
    inline void SetStatus(ServiceNetworkResourceAssociationStatus&& value) { m_status = std::move(value); }
    inline DeleteServiceNetworkResourceAssociationResult& WithStatus(const ServiceNetworkResourceAssociationStatus& value) { SetStatus(value); return *this;}
    inline DeleteServiceNetworkResourceAssociationResult& WithStatus(ServiceNetworkResourceAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteServiceNetworkResourceAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteServiceNetworkResourceAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteServiceNetworkResourceAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    ServiceNetworkResourceAssociationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
