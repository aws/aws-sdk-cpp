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
   * <p>The <code>CancelDomainTransferToAnotherAwsAccount</code> response includes
   * the following element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CancelDomainTransferToAnotherAwsAccountResponse">AWS
   * API Reference</a></p>
   */
  class CancelDomainTransferToAnotherAwsAccountResult
  {
  public:
    AWS_ROUTE53DOMAINS_API CancelDomainTransferToAnotherAwsAccountResult();
    AWS_ROUTE53DOMAINS_API CancelDomainTransferToAnotherAwsAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API CancelDomainTransferToAnotherAwsAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was canceled,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was canceled,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }

    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was canceled,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }

    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was canceled,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }

    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was canceled,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline CancelDomainTransferToAnotherAwsAccountResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was canceled,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline CancelDomainTransferToAnotherAwsAccountResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The identifier that <code>TransferDomainToAnotherAwsAccount</code> returned
     * to track the progress of the request. Because the transfer request was canceled,
     * the value is no longer valid, and you can't use <code>GetOperationDetail</code>
     * to query the operation status.</p>
     */
    inline CancelDomainTransferToAnotherAwsAccountResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:

    Aws::String m_operationId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
