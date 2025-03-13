/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/CheckDetail.h>
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
namespace WellArchitected
{
namespace Model
{
  class ListCheckDetailsResult
  {
  public:
    AWS_WELLARCHITECTED_API ListCheckDetailsResult() = default;
    AWS_WELLARCHITECTED_API ListCheckDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListCheckDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details about the Trusted Advisor checks related to the Well-Architected
     * best practice.</p>
     */
    inline const Aws::Vector<CheckDetail>& GetCheckDetails() const { return m_checkDetails; }
    template<typename CheckDetailsT = Aws::Vector<CheckDetail>>
    void SetCheckDetails(CheckDetailsT&& value) { m_checkDetailsHasBeenSet = true; m_checkDetails = std::forward<CheckDetailsT>(value); }
    template<typename CheckDetailsT = Aws::Vector<CheckDetail>>
    ListCheckDetailsResult& WithCheckDetails(CheckDetailsT&& value) { SetCheckDetails(std::forward<CheckDetailsT>(value)); return *this;}
    template<typename CheckDetailsT = CheckDetail>
    ListCheckDetailsResult& AddCheckDetails(CheckDetailsT&& value) { m_checkDetailsHasBeenSet = true; m_checkDetails.emplace_back(std::forward<CheckDetailsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCheckDetailsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCheckDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CheckDetail> m_checkDetails;
    bool m_checkDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
