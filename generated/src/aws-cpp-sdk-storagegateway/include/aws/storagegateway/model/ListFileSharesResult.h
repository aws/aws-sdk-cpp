﻿/**
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
    AWS_STORAGEGATEWAY_API ListFileSharesResult();
    AWS_STORAGEGATEWAY_API ListFileSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListFileSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListFileSharesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListFileSharesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListFileSharesResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a value is present, there are more file shares to return. In a subsequent
     * request, use <code>NextMarker</code> as the value for <code>Marker</code> to
     * retrieve the next set of file shares.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListFileSharesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListFileSharesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListFileSharesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of information about the S3 File Gateway's file shares.</p>
     */
    inline const Aws::Vector<FileShareInfo>& GetFileShareInfoList() const{ return m_fileShareInfoList; }
    inline void SetFileShareInfoList(const Aws::Vector<FileShareInfo>& value) { m_fileShareInfoList = value; }
    inline void SetFileShareInfoList(Aws::Vector<FileShareInfo>&& value) { m_fileShareInfoList = std::move(value); }
    inline ListFileSharesResult& WithFileShareInfoList(const Aws::Vector<FileShareInfo>& value) { SetFileShareInfoList(value); return *this;}
    inline ListFileSharesResult& WithFileShareInfoList(Aws::Vector<FileShareInfo>&& value) { SetFileShareInfoList(std::move(value)); return *this;}
    inline ListFileSharesResult& AddFileShareInfoList(const FileShareInfo& value) { m_fileShareInfoList.push_back(value); return *this; }
    inline ListFileSharesResult& AddFileShareInfoList(FileShareInfo&& value) { m_fileShareInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFileSharesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFileSharesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFileSharesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::String m_nextMarker;

    Aws::Vector<FileShareInfo> m_fileShareInfoList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
