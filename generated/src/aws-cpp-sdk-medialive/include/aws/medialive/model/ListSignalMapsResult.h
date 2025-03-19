/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/SignalMapSummary.h>
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
   * Placeholder documentation for ListSignalMapsResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListSignalMapsResponse">AWS
   * API Reference</a></p>
   */
  class ListSignalMapsResult
  {
  public:
    AWS_MEDIALIVE_API ListSignalMapsResult() = default;
    AWS_MEDIALIVE_API ListSignalMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListSignalMapsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSignalMapsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<SignalMapSummary>& GetSignalMaps() const { return m_signalMaps; }
    template<typename SignalMapsT = Aws::Vector<SignalMapSummary>>
    void SetSignalMaps(SignalMapsT&& value) { m_signalMapsHasBeenSet = true; m_signalMaps = std::forward<SignalMapsT>(value); }
    template<typename SignalMapsT = Aws::Vector<SignalMapSummary>>
    ListSignalMapsResult& WithSignalMaps(SignalMapsT&& value) { SetSignalMaps(std::forward<SignalMapsT>(value)); return *this;}
    template<typename SignalMapsT = SignalMapSummary>
    ListSignalMapsResult& AddSignalMaps(SignalMapsT&& value) { m_signalMapsHasBeenSet = true; m_signalMaps.emplace_back(std::forward<SignalMapsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSignalMapsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SignalMapSummary> m_signalMaps;
    bool m_signalMapsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
