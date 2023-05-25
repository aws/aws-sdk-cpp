/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/EffectivePolicy.h>
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
namespace Organizations
{
namespace Model
{
  class DescribeEffectivePolicyResult
  {
  public:
    AWS_ORGANIZATIONS_API DescribeEffectivePolicyResult();
    AWS_ORGANIZATIONS_API DescribeEffectivePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API DescribeEffectivePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The contents of the effective policy.</p>
     */
    inline const EffectivePolicy& GetEffectivePolicy() const{ return m_effectivePolicy; }

    /**
     * <p>The contents of the effective policy.</p>
     */
    inline void SetEffectivePolicy(const EffectivePolicy& value) { m_effectivePolicy = value; }

    /**
     * <p>The contents of the effective policy.</p>
     */
    inline void SetEffectivePolicy(EffectivePolicy&& value) { m_effectivePolicy = std::move(value); }

    /**
     * <p>The contents of the effective policy.</p>
     */
    inline DescribeEffectivePolicyResult& WithEffectivePolicy(const EffectivePolicy& value) { SetEffectivePolicy(value); return *this;}

    /**
     * <p>The contents of the effective policy.</p>
     */
    inline DescribeEffectivePolicyResult& WithEffectivePolicy(EffectivePolicy&& value) { SetEffectivePolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEffectivePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEffectivePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEffectivePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EffectivePolicy m_effectivePolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
