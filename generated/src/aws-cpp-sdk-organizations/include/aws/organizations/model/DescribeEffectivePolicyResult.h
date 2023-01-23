/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/EffectivePolicy.h>
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

  private:

    EffectivePolicy m_effectivePolicy;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
