/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/Receipt.h>
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
namespace SSMContacts
{
namespace Model
{
  class ListPageReceiptsResult
  {
  public:
    AWS_SSMCONTACTS_API ListPageReceiptsResult() = default;
    AWS_SSMCONTACTS_API ListPageReceiptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListPageReceiptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPageReceiptsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of each acknowledgement.</p>
     */
    inline const Aws::Vector<Receipt>& GetReceipts() const { return m_receipts; }
    template<typename ReceiptsT = Aws::Vector<Receipt>>
    void SetReceipts(ReceiptsT&& value) { m_receiptsHasBeenSet = true; m_receipts = std::forward<ReceiptsT>(value); }
    template<typename ReceiptsT = Aws::Vector<Receipt>>
    ListPageReceiptsResult& WithReceipts(ReceiptsT&& value) { SetReceipts(std::forward<ReceiptsT>(value)); return *this;}
    template<typename ReceiptsT = Receipt>
    ListPageReceiptsResult& AddReceipts(ReceiptsT&& value) { m_receiptsHasBeenSet = true; m_receipts.emplace_back(std::forward<ReceiptsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPageReceiptsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Receipt> m_receipts;
    bool m_receiptsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
