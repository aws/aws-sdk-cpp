/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/FileSystemAssociationSummary.h>
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
  class ListFileSystemAssociationsResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListFileSystemAssociationsResult() = default;
    AWS_STORAGEGATEWAY_API ListFileSystemAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListFileSystemAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListFileSystemAssociationsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a value is present, there are more file system associations to return. In
     * a subsequent request, use <code>NextMarker</code> as the value for
     * <code>Marker</code> to retrieve the next set of file system associations.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListFileSystemAssociationsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of information about the Amazon FSx gateway's file system
     * associations.</p>
     */
    inline const Aws::Vector<FileSystemAssociationSummary>& GetFileSystemAssociationSummaryList() const { return m_fileSystemAssociationSummaryList; }
    template<typename FileSystemAssociationSummaryListT = Aws::Vector<FileSystemAssociationSummary>>
    void SetFileSystemAssociationSummaryList(FileSystemAssociationSummaryListT&& value) { m_fileSystemAssociationSummaryListHasBeenSet = true; m_fileSystemAssociationSummaryList = std::forward<FileSystemAssociationSummaryListT>(value); }
    template<typename FileSystemAssociationSummaryListT = Aws::Vector<FileSystemAssociationSummary>>
    ListFileSystemAssociationsResult& WithFileSystemAssociationSummaryList(FileSystemAssociationSummaryListT&& value) { SetFileSystemAssociationSummaryList(std::forward<FileSystemAssociationSummaryListT>(value)); return *this;}
    template<typename FileSystemAssociationSummaryListT = FileSystemAssociationSummary>
    ListFileSystemAssociationsResult& AddFileSystemAssociationSummaryList(FileSystemAssociationSummaryListT&& value) { m_fileSystemAssociationSummaryListHasBeenSet = true; m_fileSystemAssociationSummaryList.emplace_back(std::forward<FileSystemAssociationSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFileSystemAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<FileSystemAssociationSummary> m_fileSystemAssociationSummaryList;
    bool m_fileSystemAssociationSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
