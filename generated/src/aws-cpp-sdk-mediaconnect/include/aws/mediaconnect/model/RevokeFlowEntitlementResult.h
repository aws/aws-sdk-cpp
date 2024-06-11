/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
  class RevokeFlowEntitlementResult
  {
  public:
    AWS_MEDIACONNECT_API RevokeFlowEntitlementResult();
    AWS_MEDIACONNECT_API RevokeFlowEntitlementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API RevokeFlowEntitlementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the entitlement that was revoked.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArn = value; }
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArn = std::move(value); }
    inline void SetEntitlementArn(const char* value) { m_entitlementArn.assign(value); }
    inline RevokeFlowEntitlementResult& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}
    inline RevokeFlowEntitlementResult& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}
    inline RevokeFlowEntitlementResult& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the flow that the entitlement was revoked from.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }
    inline RevokeFlowEntitlementResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline RevokeFlowEntitlementResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline RevokeFlowEntitlementResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RevokeFlowEntitlementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RevokeFlowEntitlementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RevokeFlowEntitlementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_entitlementArn;

    Aws::String m_flowArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
