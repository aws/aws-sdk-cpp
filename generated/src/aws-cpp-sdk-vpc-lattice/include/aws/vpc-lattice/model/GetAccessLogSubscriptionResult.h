/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class GetAccessLogSubscriptionResult
  {
  public:
    AWS_VPCLATTICE_API GetAccessLogSubscriptionResult();
    AWS_VPCLATTICE_API GetAccessLogSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetAccessLogSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the access log subscription.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetAccessLogSubscriptionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetAccessLogSubscriptionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetAccessLogSubscriptionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the access log subscription was created, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetAccessLogSubscriptionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetAccessLogSubscriptionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the access log destination.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArn = value; }
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArn = std::move(value); }
    inline void SetDestinationArn(const char* value) { m_destinationArn.assign(value); }
    inline GetAccessLogSubscriptionResult& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}
    inline GetAccessLogSubscriptionResult& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}
    inline GetAccessLogSubscriptionResult& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the access log subscription.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetAccessLogSubscriptionResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetAccessLogSubscriptionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetAccessLogSubscriptionResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the access log subscription was last updated, in
     * ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetAccessLogSubscriptionResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetAccessLogSubscriptionResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network or service.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline GetAccessLogSubscriptionResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline GetAccessLogSubscriptionResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline GetAccessLogSubscriptionResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network or service.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }
    inline GetAccessLogSubscriptionResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline GetAccessLogSubscriptionResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline GetAccessLogSubscriptionResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log type for the service network.</p>
     */
    inline const ServiceNetworkLogType& GetServiceNetworkLogType() const{ return m_serviceNetworkLogType; }
    inline void SetServiceNetworkLogType(const ServiceNetworkLogType& value) { m_serviceNetworkLogType = value; }
    inline void SetServiceNetworkLogType(ServiceNetworkLogType&& value) { m_serviceNetworkLogType = std::move(value); }
    inline GetAccessLogSubscriptionResult& WithServiceNetworkLogType(const ServiceNetworkLogType& value) { SetServiceNetworkLogType(value); return *this;}
    inline GetAccessLogSubscriptionResult& WithServiceNetworkLogType(ServiceNetworkLogType&& value) { SetServiceNetworkLogType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAccessLogSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAccessLogSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAccessLogSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_destinationArn;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_resourceArn;

    Aws::String m_resourceId;

    ServiceNetworkLogType m_serviceNetworkLogType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
