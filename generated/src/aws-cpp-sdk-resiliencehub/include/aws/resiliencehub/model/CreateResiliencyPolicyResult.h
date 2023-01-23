/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/ResiliencyPolicy.h>
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
namespace ResilienceHub
{
namespace Model
{
  class CreateResiliencyPolicyResult
  {
  public:
    AWS_RESILIENCEHUB_API CreateResiliencyPolicyResult();
    AWS_RESILIENCEHUB_API CreateResiliencyPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API CreateResiliencyPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The type of resiliency policy that was created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline const ResiliencyPolicy& GetPolicy() const{ return m_policy; }

    /**
     * <p>The type of resiliency policy that was created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline void SetPolicy(const ResiliencyPolicy& value) { m_policy = value; }

    /**
     * <p>The type of resiliency policy that was created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline void SetPolicy(ResiliencyPolicy&& value) { m_policy = std::move(value); }

    /**
     * <p>The type of resiliency policy that was created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline CreateResiliencyPolicyResult& WithPolicy(const ResiliencyPolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p>The type of resiliency policy that was created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline CreateResiliencyPolicyResult& WithPolicy(ResiliencyPolicy&& value) { SetPolicy(std::move(value)); return *this;}

  private:

    ResiliencyPolicy m_policy;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
