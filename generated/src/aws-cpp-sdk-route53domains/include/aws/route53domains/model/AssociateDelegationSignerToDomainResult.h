/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
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
namespace Route53Domains
{
namespace Model
{
  class AssociateDelegationSignerToDomainResult
  {
  public:
    AWS_ROUTE53DOMAINS_API AssociateDelegationSignerToDomainResult();
    AWS_ROUTE53DOMAINS_API AssociateDelegationSignerToDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API AssociateDelegationSignerToDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for tracking the progress of the request. To query the
     * operation status, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The identifier for tracking the progress of the request. To query the
     * operation status, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }

    /**
     * <p>The identifier for tracking the progress of the request. To query the
     * operation status, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }

    /**
     * <p>The identifier for tracking the progress of the request. To query the
     * operation status, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>.</p>
     */
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }

    /**
     * <p>The identifier for tracking the progress of the request. To query the
     * operation status, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>.</p>
     */
    inline AssociateDelegationSignerToDomainResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The identifier for tracking the progress of the request. To query the
     * operation status, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>.</p>
     */
    inline AssociateDelegationSignerToDomainResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for tracking the progress of the request. To query the
     * operation status, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>.</p>
     */
    inline AssociateDelegationSignerToDomainResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:

    Aws::String m_operationId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
