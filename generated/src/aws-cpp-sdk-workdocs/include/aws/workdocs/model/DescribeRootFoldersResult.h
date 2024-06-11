﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/FolderMetadata.h>
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
namespace WorkDocs
{
namespace Model
{
  class DescribeRootFoldersResult
  {
  public:
    AWS_WORKDOCS_API DescribeRootFoldersResult();
    AWS_WORKDOCS_API DescribeRootFoldersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeRootFoldersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user's special folders.</p>
     */
    inline const Aws::Vector<FolderMetadata>& GetFolders() const{ return m_folders; }
    inline void SetFolders(const Aws::Vector<FolderMetadata>& value) { m_folders = value; }
    inline void SetFolders(Aws::Vector<FolderMetadata>&& value) { m_folders = std::move(value); }
    inline DescribeRootFoldersResult& WithFolders(const Aws::Vector<FolderMetadata>& value) { SetFolders(value); return *this;}
    inline DescribeRootFoldersResult& WithFolders(Aws::Vector<FolderMetadata>&& value) { SetFolders(std::move(value)); return *this;}
    inline DescribeRootFoldersResult& AddFolders(const FolderMetadata& value) { m_folders.push_back(value); return *this; }
    inline DescribeRootFoldersResult& AddFolders(FolderMetadata&& value) { m_folders.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeRootFoldersResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeRootFoldersResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeRootFoldersResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRootFoldersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRootFoldersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRootFoldersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FolderMetadata> m_folders;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
