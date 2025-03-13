/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ReadSetListItem.h>
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
namespace Omics
{
namespace Model
{
  class ListReadSetsResult
  {
  public:
    AWS_OMICS_API ListReadSetsResult() = default;
    AWS_OMICS_API ListReadSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReadSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReadSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of read sets.</p>
     */
    inline const Aws::Vector<ReadSetListItem>& GetReadSets() const { return m_readSets; }
    template<typename ReadSetsT = Aws::Vector<ReadSetListItem>>
    void SetReadSets(ReadSetsT&& value) { m_readSetsHasBeenSet = true; m_readSets = std::forward<ReadSetsT>(value); }
    template<typename ReadSetsT = Aws::Vector<ReadSetListItem>>
    ListReadSetsResult& WithReadSets(ReadSetsT&& value) { SetReadSets(std::forward<ReadSetsT>(value)); return *this;}
    template<typename ReadSetsT = ReadSetListItem>
    ListReadSetsResult& AddReadSets(ReadSetsT&& value) { m_readSetsHasBeenSet = true; m_readSets.emplace_back(std::forward<ReadSetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReadSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ReadSetListItem> m_readSets;
    bool m_readSetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
