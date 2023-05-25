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
   * <p>The response elements represent the output of a request to start a SQL
   * transaction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BeginTransactionResponse">AWS
   * API Reference</a></p>
   */
  class BeginTransactionResult
  {
  public:
    AWS_RDSDATASERVICE_API BeginTransactionResult();
    AWS_RDSDATASERVICE_API BeginTransactionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RDSDATASERVICE_API BeginTransactionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionId = value; }

    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionId = std::move(value); }

    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionId.assign(value); }

    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline BeginTransactionResult& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline BeginTransactionResult& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline BeginTransactionResult& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BeginTransactionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BeginTransactionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BeginTransactionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_transactionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
