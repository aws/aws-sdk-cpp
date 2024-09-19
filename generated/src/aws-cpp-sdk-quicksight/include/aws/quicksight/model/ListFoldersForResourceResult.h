/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{
  class ListFoldersForResourceResult
  {
  public:
    AWS_QUICKSIGHT_API ListFoldersForResourceResult();
    AWS_QUICKSIGHT_API ListFoldersForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListFoldersForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListFoldersForResourceResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that contains the Amazon Resource Names (ARNs) of all folders that the
     * resource is a member of.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolders() const{ return m_folders; }
    inline void SetFolders(const Aws::Vector<Aws::String>& value) { m_folders = value; }
    inline void SetFolders(Aws::Vector<Aws::String>&& value) { m_folders = std::move(value); }
    inline ListFoldersForResourceResult& WithFolders(const Aws::Vector<Aws::String>& value) { SetFolders(value); return *this;}
    inline ListFoldersForResourceResult& WithFolders(Aws::Vector<Aws::String>&& value) { SetFolders(std::move(value)); return *this;}
    inline ListFoldersForResourceResult& AddFolders(const Aws::String& value) { m_folders.push_back(value); return *this; }
    inline ListFoldersForResourceResult& AddFolders(Aws::String&& value) { m_folders.push_back(std::move(value)); return *this; }
    inline ListFoldersForResourceResult& AddFolders(const char* value) { m_folders.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFoldersForResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFoldersForResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFoldersForResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFoldersForResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFoldersForResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFoldersForResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_status;

    Aws::Vector<Aws::String> m_folders;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
