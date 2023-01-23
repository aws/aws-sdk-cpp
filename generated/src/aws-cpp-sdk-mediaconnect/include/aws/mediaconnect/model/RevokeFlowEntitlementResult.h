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


    /**
     * The ARN of the entitlement that was revoked.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }

    /**
     * The ARN of the entitlement that was revoked.
     */
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArn = value; }

    /**
     * The ARN of the entitlement that was revoked.
     */
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArn = std::move(value); }

    /**
     * The ARN of the entitlement that was revoked.
     */
    inline void SetEntitlementArn(const char* value) { m_entitlementArn.assign(value); }

    /**
     * The ARN of the entitlement that was revoked.
     */
    inline RevokeFlowEntitlementResult& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}

    /**
     * The ARN of the entitlement that was revoked.
     */
    inline RevokeFlowEntitlementResult& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}

    /**
     * The ARN of the entitlement that was revoked.
     */
    inline RevokeFlowEntitlementResult& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}


    /**
     * The ARN of the flow that the entitlement was revoked from.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that the entitlement was revoked from.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that the entitlement was revoked from.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that the entitlement was revoked from.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that the entitlement was revoked from.
     */
    inline RevokeFlowEntitlementResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that the entitlement was revoked from.
     */
    inline RevokeFlowEntitlementResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that the entitlement was revoked from.
     */
    inline RevokeFlowEntitlementResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}

  private:

    Aws::String m_entitlementArn;

    Aws::String m_flowArn;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
