/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
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
namespace TimestreamQuery
{
namespace Model
{
  class CancelQueryResult
  {
  public:
    AWS_TIMESTREAMQUERY_API CancelQueryResult();
    AWS_TIMESTREAMQUERY_API CancelQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API CancelQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A <code>CancellationMessage</code> is returned when a
     * <code>CancelQuery</code> request for the query specified by <code>QueryId</code>
     * has already been issued. </p>
     */
    inline const Aws::String& GetCancellationMessage() const{ return m_cancellationMessage; }

    /**
     * <p> A <code>CancellationMessage</code> is returned when a
     * <code>CancelQuery</code> request for the query specified by <code>QueryId</code>
     * has already been issued. </p>
     */
    inline void SetCancellationMessage(const Aws::String& value) { m_cancellationMessage = value; }

    /**
     * <p> A <code>CancellationMessage</code> is returned when a
     * <code>CancelQuery</code> request for the query specified by <code>QueryId</code>
     * has already been issued. </p>
     */
    inline void SetCancellationMessage(Aws::String&& value) { m_cancellationMessage = std::move(value); }

    /**
     * <p> A <code>CancellationMessage</code> is returned when a
     * <code>CancelQuery</code> request for the query specified by <code>QueryId</code>
     * has already been issued. </p>
     */
    inline void SetCancellationMessage(const char* value) { m_cancellationMessage.assign(value); }

    /**
     * <p> A <code>CancellationMessage</code> is returned when a
     * <code>CancelQuery</code> request for the query specified by <code>QueryId</code>
     * has already been issued. </p>
     */
    inline CancelQueryResult& WithCancellationMessage(const Aws::String& value) { SetCancellationMessage(value); return *this;}

    /**
     * <p> A <code>CancellationMessage</code> is returned when a
     * <code>CancelQuery</code> request for the query specified by <code>QueryId</code>
     * has already been issued. </p>
     */
    inline CancelQueryResult& WithCancellationMessage(Aws::String&& value) { SetCancellationMessage(std::move(value)); return *this;}

    /**
     * <p> A <code>CancellationMessage</code> is returned when a
     * <code>CancelQuery</code> request for the query specified by <code>QueryId</code>
     * has already been issued. </p>
     */
    inline CancelQueryResult& WithCancellationMessage(const char* value) { SetCancellationMessage(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CancelQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CancelQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CancelQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_cancellationMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
