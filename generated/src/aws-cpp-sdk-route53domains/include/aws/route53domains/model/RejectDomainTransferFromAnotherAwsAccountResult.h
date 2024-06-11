﻿/**
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
   * <p>The RejectDomainTransferFromAnotherAwsAccount response includes the following
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RejectDomainTransferFromAnotherAwsAccountResponse">AWS
   * API Reference</a></p>
   */
  class RejectDomainTransferFromAnotherAwsAccountResult
  {
  public:
    AWS_ROUTE53DOMAINS_API RejectDomainTransferFromAnotherAwsAccountResult();
    AWS_ROUTE53DOMAINS_API RejectDomainTransferFromAnotherAwsAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API RejectDomainTransferFromAnotherAwsAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was rejected,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }
    inline RejectDomainTransferFromAnotherAwsAccountResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}
    inline RejectDomainTransferFromAnotherAwsAccountResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}
    inline RejectDomainTransferFromAnotherAwsAccountResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RejectDomainTransferFromAnotherAwsAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RejectDomainTransferFromAnotherAwsAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RejectDomainTransferFromAnotherAwsAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_operationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
