/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/ResourcePolicy.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class GetResourcePolicyResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetResourcePolicyResult();
    AWS_REDSHIFTSERVERLESS_API GetResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The returned resource policy.</p>
     */
    inline const ResourcePolicy& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>The returned resource policy.</p>
     */
    inline void SetResourcePolicy(const ResourcePolicy& value) { m_resourcePolicy = value; }

    /**
     * <p>The returned resource policy.</p>
     */
    inline void SetResourcePolicy(ResourcePolicy&& value) { m_resourcePolicy = std::move(value); }

    /**
     * <p>The returned resource policy.</p>
     */
    inline GetResourcePolicyResult& WithResourcePolicy(const ResourcePolicy& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>The returned resource policy.</p>
     */
    inline GetResourcePolicyResult& WithResourcePolicy(ResourcePolicy&& value) { SetResourcePolicy(std::move(value)); return *this;}

  private:

    ResourcePolicy m_resourcePolicy;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
