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
    AWS_TIMESTREAMQUERY_API CancelQueryResult() = default;
    AWS_TIMESTREAMQUERY_API CancelQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API CancelQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A <code>CancellationMessage</code> is returned when a
     * <code>CancelQuery</code> request for the query specified by <code>QueryId</code>
     * has already been issued. </p>
     */
    inline const Aws::String& GetCancellationMessage() const { return m_cancellationMessage; }
    template<typename CancellationMessageT = Aws::String>
    void SetCancellationMessage(CancellationMessageT&& value) { m_cancellationMessageHasBeenSet = true; m_cancellationMessage = std::forward<CancellationMessageT>(value); }
    template<typename CancellationMessageT = Aws::String>
    CancelQueryResult& WithCancellationMessage(CancellationMessageT&& value) { SetCancellationMessage(std::forward<CancellationMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cancellationMessage;
    bool m_cancellationMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
