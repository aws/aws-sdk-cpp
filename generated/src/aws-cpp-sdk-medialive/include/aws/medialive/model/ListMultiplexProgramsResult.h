/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/MultiplexProgramSummary.h>
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
   * Placeholder documentation for ListMultiplexProgramsResponse<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexProgramsResponse">AWS
   * API Reference</a></p>
   */
  class ListMultiplexProgramsResult
  {
  public:
    AWS_MEDIALIVE_API ListMultiplexProgramsResult() = default;
    AWS_MEDIALIVE_API ListMultiplexProgramsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListMultiplexProgramsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * List of multiplex programs.
     */
    inline const Aws::Vector<MultiplexProgramSummary>& GetMultiplexPrograms() const { return m_multiplexPrograms; }
    template<typename MultiplexProgramsT = Aws::Vector<MultiplexProgramSummary>>
    void SetMultiplexPrograms(MultiplexProgramsT&& value) { m_multiplexProgramsHasBeenSet = true; m_multiplexPrograms = std::forward<MultiplexProgramsT>(value); }
    template<typename MultiplexProgramsT = Aws::Vector<MultiplexProgramSummary>>
    ListMultiplexProgramsResult& WithMultiplexPrograms(MultiplexProgramsT&& value) { SetMultiplexPrograms(std::forward<MultiplexProgramsT>(value)); return *this;}
    template<typename MultiplexProgramsT = MultiplexProgramSummary>
    ListMultiplexProgramsResult& AddMultiplexPrograms(MultiplexProgramsT&& value) { m_multiplexProgramsHasBeenSet = true; m_multiplexPrograms.emplace_back(std::forward<MultiplexProgramsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Token for the next ListMultiplexProgram request.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMultiplexProgramsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMultiplexProgramsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MultiplexProgramSummary> m_multiplexPrograms;
    bool m_multiplexProgramsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
