/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/TapeArchive.h>
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
   * <p>DescribeTapeArchivesOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapeArchivesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeTapeArchivesResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeTapeArchivesResult() = default;
    AWS_STORAGEGATEWAY_API DescribeTapeArchivesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeTapeArchivesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of virtual tape objects in the virtual tape shelf (VTS). The
     * description includes of the Amazon Resource Name (ARN) of the virtual tapes. The
     * information returned includes the Amazon Resource Names (ARNs) of the tapes,
     * size of the tapes, status of the tapes, progress of the description, and tape
     * barcode.</p>
     */
    inline const Aws::Vector<TapeArchive>& GetTapeArchives() const { return m_tapeArchives; }
    template<typename TapeArchivesT = Aws::Vector<TapeArchive>>
    void SetTapeArchives(TapeArchivesT&& value) { m_tapeArchivesHasBeenSet = true; m_tapeArchives = std::forward<TapeArchivesT>(value); }
    template<typename TapeArchivesT = Aws::Vector<TapeArchive>>
    DescribeTapeArchivesResult& WithTapeArchives(TapeArchivesT&& value) { SetTapeArchives(std::forward<TapeArchivesT>(value)); return *this;}
    template<typename TapeArchivesT = TapeArchive>
    DescribeTapeArchivesResult& AddTapeArchives(TapeArchivesT&& value) { m_tapeArchivesHasBeenSet = true; m_tapeArchives.emplace_back(std::forward<TapeArchivesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that indicates the position at which the virtual tapes that
     * were fetched for description ended. Use this marker in your next request to
     * fetch the next set of virtual tapes in the virtual tape shelf (VTS). If there
     * are no more virtual tapes to describe, this field does not appear in the
     * response.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeTapeArchivesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTapeArchivesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TapeArchive> m_tapeArchives;
    bool m_tapeArchivesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
