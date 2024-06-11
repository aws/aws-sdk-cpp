﻿/**
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
    AWS_STORAGEGATEWAY_API ListFileSystemAssociationsResult();
    AWS_STORAGEGATEWAY_API ListFileSystemAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListFileSystemAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListFileSystemAssociationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListFileSystemAssociationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListFileSystemAssociationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a value is present, there are more file system associations to return. In
     * a subsequent request, use <code>NextMarker</code> as the value for
     * <code>Marker</code> to retrieve the next set of file system associations.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListFileSystemAssociationsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListFileSystemAssociationsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListFileSystemAssociationsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of information about the Amazon FSx gateway's file system
     * associations.</p>
     */
    inline const Aws::Vector<FileSystemAssociationSummary>& GetFileSystemAssociationSummaryList() const{ return m_fileSystemAssociationSummaryList; }
    inline void SetFileSystemAssociationSummaryList(const Aws::Vector<FileSystemAssociationSummary>& value) { m_fileSystemAssociationSummaryList = value; }
    inline void SetFileSystemAssociationSummaryList(Aws::Vector<FileSystemAssociationSummary>&& value) { m_fileSystemAssociationSummaryList = std::move(value); }
    inline ListFileSystemAssociationsResult& WithFileSystemAssociationSummaryList(const Aws::Vector<FileSystemAssociationSummary>& value) { SetFileSystemAssociationSummaryList(value); return *this;}
    inline ListFileSystemAssociationsResult& WithFileSystemAssociationSummaryList(Aws::Vector<FileSystemAssociationSummary>&& value) { SetFileSystemAssociationSummaryList(std::move(value)); return *this;}
    inline ListFileSystemAssociationsResult& AddFileSystemAssociationSummaryList(const FileSystemAssociationSummary& value) { m_fileSystemAssociationSummaryList.push_back(value); return *this; }
    inline ListFileSystemAssociationsResult& AddFileSystemAssociationSummaryList(FileSystemAssociationSummary&& value) { m_fileSystemAssociationSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFileSystemAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFileSystemAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFileSystemAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::String m_nextMarker;

    Aws::Vector<FileSystemAssociationSummary> m_fileSystemAssociationSummaryList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
