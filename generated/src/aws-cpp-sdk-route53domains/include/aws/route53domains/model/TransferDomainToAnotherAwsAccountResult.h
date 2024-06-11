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
   * <p>The <code>TransferDomainToAnotherAwsAccount</code> response includes the
   * following elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TransferDomainToAnotherAwsAccountResponse">AWS
   * API Reference</a></p>
   */
  class TransferDomainToAnotherAwsAccountResult
  {
  public:
    AWS_ROUTE53DOMAINS_API TransferDomainToAnotherAwsAccountResult();
    AWS_ROUTE53DOMAINS_API TransferDomainToAnotherAwsAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API TransferDomainToAnotherAwsAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Identifier for tracking the progress of the request. To query the operation
     * status, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }
    inline TransferDomainToAnotherAwsAccountResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}
    inline TransferDomainToAnotherAwsAccountResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}
    inline TransferDomainToAnotherAwsAccountResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To finish transferring a domain to another Amazon Web Services account, the
     * account that the domain is being transferred to must submit an <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AcceptDomainTransferFromAnotherAwsAccount.html">AcceptDomainTransferFromAnotherAwsAccount</a>
     * request. The request must include the value of the <code>Password</code> element
     * that was returned in the <code>TransferDomainToAnotherAwsAccount</code>
     * response.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline void SetPassword(const Aws::String& value) { m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_password.assign(value); }
    inline TransferDomainToAnotherAwsAccountResult& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline TransferDomainToAnotherAwsAccountResult& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline TransferDomainToAnotherAwsAccountResult& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TransferDomainToAnotherAwsAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TransferDomainToAnotherAwsAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TransferDomainToAnotherAwsAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_operationId;

    Aws::String m_password;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
