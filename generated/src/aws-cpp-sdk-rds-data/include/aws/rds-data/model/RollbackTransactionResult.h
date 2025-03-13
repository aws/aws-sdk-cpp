/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
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
namespace RDSDataService
{
namespace Model
{
  /**
   * <p>The response elements represent the output of a request to perform a rollback
   * of a transaction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/RollbackTransactionResponse">AWS
   * API Reference</a></p>
   */
  class RollbackTransactionResult
  {
  public:
    AWS_RDSDATASERVICE_API RollbackTransactionResult() = default;
    AWS_RDSDATASERVICE_API RollbackTransactionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RDSDATASERVICE_API RollbackTransactionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the rollback operation.</p>
     */
    inline const Aws::String& GetTransactionStatus() const { return m_transactionStatus; }
    template<typename TransactionStatusT = Aws::String>
    void SetTransactionStatus(TransactionStatusT&& value) { m_transactionStatusHasBeenSet = true; m_transactionStatus = std::forward<TransactionStatusT>(value); }
    template<typename TransactionStatusT = Aws::String>
    RollbackTransactionResult& WithTransactionStatus(TransactionStatusT&& value) { SetTransactionStatus(std::forward<TransactionStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RollbackTransactionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transactionStatus;
    bool m_transactionStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
