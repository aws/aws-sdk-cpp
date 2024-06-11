﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
  class DeleteFolderResult
  {
  public:
    AWS_QUICKSIGHT_API DeleteFolderResult();
    AWS_QUICKSIGHT_API DeleteFolderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DeleteFolderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline DeleteFolderResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the deleted folder.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeleteFolderResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeleteFolderResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeleteFolderResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const{ return m_folderId; }
    inline void SetFolderId(const Aws::String& value) { m_folderId = value; }
    inline void SetFolderId(Aws::String&& value) { m_folderId = std::move(value); }
    inline void SetFolderId(const char* value) { m_folderId.assign(value); }
    inline DeleteFolderResult& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}
    inline DeleteFolderResult& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}
    inline DeleteFolderResult& WithFolderId(const char* value) { SetFolderId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteFolderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteFolderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteFolderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_status;

    Aws::String m_arn;

    Aws::String m_folderId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
