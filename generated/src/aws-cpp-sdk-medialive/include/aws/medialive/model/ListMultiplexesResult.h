/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/MultiplexSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListMultiplexesResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexesResponse">AWS
   * API Reference</a></p>
   */
  class ListMultiplexesResult
  {
  public:
    AWS_MEDIALIVE_API ListMultiplexesResult() = default;
    AWS_MEDIALIVE_API ListMultiplexesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListMultiplexesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * List of multiplexes.
     */
    inline const Aws::Vector<MultiplexSummary>& GetMultiplexes() const { return m_multiplexes; }
    template<typename MultiplexesT = Aws::Vector<MultiplexSummary>>
    void SetMultiplexes(MultiplexesT&& value) { m_multiplexesHasBeenSet = true; m_multiplexes = std::forward<MultiplexesT>(value); }
    template<typename MultiplexesT = Aws::Vector<MultiplexSummary>>
    ListMultiplexesResult& WithMultiplexes(MultiplexesT&& value) { SetMultiplexes(std::forward<MultiplexesT>(value)); return *this;}
    template<typename MultiplexesT = MultiplexSummary>
    ListMultiplexesResult& AddMultiplexes(MultiplexesT&& value) { m_multiplexesHasBeenSet = true; m_multiplexes.emplace_back(std::forward<MultiplexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Token for the next ListMultiplexes request.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMultiplexesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMultiplexesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MultiplexSummary> m_multiplexes;
    bool m_multiplexesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
