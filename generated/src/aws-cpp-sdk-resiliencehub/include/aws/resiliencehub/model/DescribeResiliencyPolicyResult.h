﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/ResiliencyPolicy.h>
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
namespace ResilienceHub
{
namespace Model
{
  class DescribeResiliencyPolicyResult
  {
  public:
    AWS_RESILIENCEHUB_API DescribeResiliencyPolicyResult();
    AWS_RESILIENCEHUB_API DescribeResiliencyPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DescribeResiliencyPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specific resiliency policy, returned as an object. This
     * object includes creation time, data location constraints, its name, description,
     * tags, the recovery time objective (RTO) and recovery point objective (RPO) in
     * seconds, and more.</p>
     */
    inline const ResiliencyPolicy& GetPolicy() const{ return m_policy; }

    /**
     * <p>Information about the specific resiliency policy, returned as an object. This
     * object includes creation time, data location constraints, its name, description,
     * tags, the recovery time objective (RTO) and recovery point objective (RPO) in
     * seconds, and more.</p>
     */
    inline void SetPolicy(const ResiliencyPolicy& value) { m_policy = value; }

    /**
     * <p>Information about the specific resiliency policy, returned as an object. This
     * object includes creation time, data location constraints, its name, description,
     * tags, the recovery time objective (RTO) and recovery point objective (RPO) in
     * seconds, and more.</p>
     */
    inline void SetPolicy(ResiliencyPolicy&& value) { m_policy = std::move(value); }

    /**
     * <p>Information about the specific resiliency policy, returned as an object. This
     * object includes creation time, data location constraints, its name, description,
     * tags, the recovery time objective (RTO) and recovery point objective (RPO) in
     * seconds, and more.</p>
     */
    inline DescribeResiliencyPolicyResult& WithPolicy(const ResiliencyPolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p>Information about the specific resiliency policy, returned as an object. This
     * object includes creation time, data location constraints, its name, description,
     * tags, the recovery time objective (RTO) and recovery point objective (RPO) in
     * seconds, and more.</p>
     */
    inline DescribeResiliencyPolicyResult& WithPolicy(ResiliencyPolicy&& value) { SetPolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeResiliencyPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeResiliencyPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeResiliencyPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResiliencyPolicy m_policy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
