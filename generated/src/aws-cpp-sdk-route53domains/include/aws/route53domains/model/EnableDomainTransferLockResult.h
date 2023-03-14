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
  /**
   * <p>The EnableDomainTransferLock response includes the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/EnableDomainTransferLockResponse">AWS
   * API Reference</a></p>
   */
  class EnableDomainTransferLockResult
  {
  public:
    AWS_ROUTE53DOMAINS_API EnableDomainTransferLockResult();
    AWS_ROUTE53DOMAINS_API EnableDomainTransferLockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API EnableDomainTransferLockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p>
     */
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p>
     */
    inline EnableDomainTransferLockResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p>
     */
    inline EnableDomainTransferLockResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>Identifier for tracking the progress of the request. To use this ID to query
     * the operation status, use GetOperationDetail.</p>
     */
    inline EnableDomainTransferLockResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline EnableDomainTransferLockResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline EnableDomainTransferLockResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline EnableDomainTransferLockResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_operationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
