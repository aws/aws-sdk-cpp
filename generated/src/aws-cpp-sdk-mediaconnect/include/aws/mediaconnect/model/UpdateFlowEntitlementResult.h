/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Entitlement.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaConnect
{
namespace Model
{
  class UpdateFlowEntitlementResult
  {
  public:
    AWS_MEDIACONNECT_API UpdateFlowEntitlementResult();
    AWS_MEDIACONNECT_API UpdateFlowEntitlementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API UpdateFlowEntitlementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The new configuration of the entitlement that you updated.
     */
    inline const Entitlement& GetEntitlement() const{ return m_entitlement; }

    /**
     * The new configuration of the entitlement that you updated.
     */
    inline void SetEntitlement(const Entitlement& value) { m_entitlement = value; }

    /**
     * The new configuration of the entitlement that you updated.
     */
    inline void SetEntitlement(Entitlement&& value) { m_entitlement = std::move(value); }

    /**
     * The new configuration of the entitlement that you updated.
     */
    inline UpdateFlowEntitlementResult& WithEntitlement(const Entitlement& value) { SetEntitlement(value); return *this;}

    /**
     * The new configuration of the entitlement that you updated.
     */
    inline UpdateFlowEntitlementResult& WithEntitlement(Entitlement&& value) { SetEntitlement(std::move(value)); return *this;}


    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline UpdateFlowEntitlementResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline UpdateFlowEntitlementResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that this entitlement was granted on.
     */
    inline UpdateFlowEntitlementResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateFlowEntitlementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateFlowEntitlementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateFlowEntitlementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Entitlement m_entitlement;

    Aws::String m_flowArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
