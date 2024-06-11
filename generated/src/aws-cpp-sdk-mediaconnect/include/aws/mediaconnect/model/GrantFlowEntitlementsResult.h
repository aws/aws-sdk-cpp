﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Entitlement.h>
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
  class GrantFlowEntitlementsResult
  {
  public:
    AWS_MEDIACONNECT_API GrantFlowEntitlementsResult();
    AWS_MEDIACONNECT_API GrantFlowEntitlementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API GrantFlowEntitlementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The entitlements that were just granted.
     */
    inline const Aws::Vector<Entitlement>& GetEntitlements() const{ return m_entitlements; }
    inline void SetEntitlements(const Aws::Vector<Entitlement>& value) { m_entitlements = value; }
    inline void SetEntitlements(Aws::Vector<Entitlement>&& value) { m_entitlements = std::move(value); }
    inline GrantFlowEntitlementsResult& WithEntitlements(const Aws::Vector<Entitlement>& value) { SetEntitlements(value); return *this;}
    inline GrantFlowEntitlementsResult& WithEntitlements(Aws::Vector<Entitlement>&& value) { SetEntitlements(std::move(value)); return *this;}
    inline GrantFlowEntitlementsResult& AddEntitlements(const Entitlement& value) { m_entitlements.push_back(value); return *this; }
    inline GrantFlowEntitlementsResult& AddEntitlements(Entitlement&& value) { m_entitlements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The ARN of the flow that these entitlements were granted to.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }
    inline GrantFlowEntitlementsResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline GrantFlowEntitlementsResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline GrantFlowEntitlementsResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GrantFlowEntitlementsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GrantFlowEntitlementsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GrantFlowEntitlementsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Entitlement> m_entitlements;

    Aws::String m_flowArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
