/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/Tape.h>
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
   * <p>DescribeTapesOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeTapesResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeTapesResult() = default;
    AWS_STORAGEGATEWAY_API DescribeTapesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeTapesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of virtual tape descriptions.</p>
     */
    inline const Aws::Vector<Tape>& GetTapes() const { return m_tapes; }
    template<typename TapesT = Aws::Vector<Tape>>
    void SetTapes(TapesT&& value) { m_tapesHasBeenSet = true; m_tapes = std::forward<TapesT>(value); }
    template<typename TapesT = Aws::Vector<Tape>>
    DescribeTapesResult& WithTapes(TapesT&& value) { SetTapes(std::forward<TapesT>(value)); return *this;}
    template<typename TapesT = Tape>
    DescribeTapesResult& AddTapes(TapesT&& value) { m_tapesHasBeenSet = true; m_tapes.emplace_back(std::forward<TapesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that can be used as part of a subsequent
     * <code>DescribeTapes</code> call to retrieve the next page of results.</p> <p>If
     * a response does not contain a marker, then there are no more results to be
     * retrieved.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeTapesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTapesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Tape> m_tapes;
    bool m_tapesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
