/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/TapeInfo.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
   * <a>ListTapesOutput$Marker</a> </p> </li> <li> <p>
   * <a>ListTapesOutput$VolumeInfos</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListTapesOutput">AWS
   * API Reference</a></p>
   */
  class ListTapesResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListTapesResult() = default;
    AWS_STORAGEGATEWAY_API ListTapesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListTapesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<TapeInfo>& GetTapeInfos() const { return m_tapeInfos; }
    template<typename TapeInfosT = Aws::Vector<TapeInfo>>
    void SetTapeInfos(TapeInfosT&& value) { m_tapeInfosHasBeenSet = true; m_tapeInfos = std::forward<TapeInfosT>(value); }
    template<typename TapeInfosT = Aws::Vector<TapeInfo>>
    ListTapesResult& WithTapeInfos(TapeInfosT&& value) { SetTapeInfos(std::forward<TapeInfosT>(value)); return *this;}
    template<typename TapeInfosT = TapeInfo>
    ListTapesResult& AddTapeInfos(TapeInfosT&& value) { m_tapeInfosHasBeenSet = true; m_tapeInfos.emplace_back(std::forward<TapeInfosT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that indicates the position at which to begin returning the next
     * list of tapes. Use the marker in your next request to continue pagination of
     * tapes. If there are no more tapes to list, this element does not appear in the
     * response body.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListTapesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTapesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TapeInfo> m_tapeInfos;
    bool m_tapeInfosHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
