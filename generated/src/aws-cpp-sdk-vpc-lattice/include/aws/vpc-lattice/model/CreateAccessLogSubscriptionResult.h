/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/ServiceNetworkLogType.h>
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
  class CreateAccessLogSubscriptionResult
  {
  public:
    AWS_VPCLATTICE_API CreateAccessLogSubscriptionResult();
    AWS_VPCLATTICE_API CreateAccessLogSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API CreateAccessLogSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the access log subscription.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateAccessLogSubscriptionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateAccessLogSubscriptionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateAccessLogSubscriptionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the log destination.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArn = value; }
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArn = std::move(value); }
    inline void SetDestinationArn(const char* value) { m_destinationArn.assign(value); }
    inline CreateAccessLogSubscriptionResult& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}
    inline CreateAccessLogSubscriptionResult& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}
    inline CreateAccessLogSubscriptionResult& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the access log subscription.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateAccessLogSubscriptionResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateAccessLogSubscriptionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateAccessLogSubscriptionResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network or service.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline CreateAccessLogSubscriptionResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline CreateAccessLogSubscriptionResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline CreateAccessLogSubscriptionResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network or service.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }
    inline CreateAccessLogSubscriptionResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline CreateAccessLogSubscriptionResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline CreateAccessLogSubscriptionResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of log that monitors your Amazon VPC Lattice service networks.</p>
     */
    inline const ServiceNetworkLogType& GetServiceNetworkLogType() const{ return m_serviceNetworkLogType; }
    inline void SetServiceNetworkLogType(const ServiceNetworkLogType& value) { m_serviceNetworkLogType = value; }
    inline void SetServiceNetworkLogType(ServiceNetworkLogType&& value) { m_serviceNetworkLogType = std::move(value); }
    inline CreateAccessLogSubscriptionResult& WithServiceNetworkLogType(const ServiceNetworkLogType& value) { SetServiceNetworkLogType(value); return *this;}
    inline CreateAccessLogSubscriptionResult& WithServiceNetworkLogType(ServiceNetworkLogType&& value) { SetServiceNetworkLogType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAccessLogSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAccessLogSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAccessLogSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_destinationArn;

    Aws::String m_id;

    Aws::String m_resourceArn;

    Aws::String m_resourceId;

    ServiceNetworkLogType m_serviceNetworkLogType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
