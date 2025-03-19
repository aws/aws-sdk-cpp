/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/FileShareInfo.h>
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
   * <p>ListFileShareOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListFileSharesOutput">AWS
   * API Reference</a></p>
   */
  class ListFileSharesResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListFileSharesResult() = default;
    AWS_STORAGEGATEWAY_API ListFileSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListFileSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListFileSharesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a value is present, there are more file shares to return. In a subsequent
     * request, use <code>NextMarker</code> as the value for <code>Marker</code> to
     * retrieve the next set of file shares.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListFileSharesResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of information about the S3 File Gateway's file shares.</p>
     */
    inline const Aws::Vector<FileShareInfo>& GetFileShareInfoList() const { return m_fileShareInfoList; }
    template<typename FileShareInfoListT = Aws::Vector<FileShareInfo>>
    void SetFileShareInfoList(FileShareInfoListT&& value) { m_fileShareInfoListHasBeenSet = true; m_fileShareInfoList = std::forward<FileShareInfoListT>(value); }
    template<typename FileShareInfoListT = Aws::Vector<FileShareInfo>>
    ListFileSharesResult& WithFileShareInfoList(FileShareInfoListT&& value) { SetFileShareInfoList(std::forward<FileShareInfoListT>(value)); return *this;}
    template<typename FileShareInfoListT = FileShareInfo>
    ListFileSharesResult& AddFileShareInfoList(FileShareInfoListT&& value) { m_fileShareInfoListHasBeenSet = true; m_fileShareInfoList.emplace_back(std::forward<FileShareInfoListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFileSharesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<FileShareInfo> m_fileShareInfoList;
    bool m_fileShareInfoListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
