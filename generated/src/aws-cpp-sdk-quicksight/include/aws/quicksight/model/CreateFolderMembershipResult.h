/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FolderMember.h>
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
  class CreateFolderMembershipResult
  {
  public:
    AWS_QUICKSIGHT_API CreateFolderMembershipResult();
    AWS_QUICKSIGHT_API CreateFolderMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateFolderMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline CreateFolderMembershipResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>Information about the member in the folder.</p>
     */
    inline const FolderMember& GetFolderMember() const{ return m_folderMember; }

    /**
     * <p>Information about the member in the folder.</p>
     */
    inline void SetFolderMember(const FolderMember& value) { m_folderMember = value; }

    /**
     * <p>Information about the member in the folder.</p>
     */
    inline void SetFolderMember(FolderMember&& value) { m_folderMember = std::move(value); }

    /**
     * <p>Information about the member in the folder.</p>
     */
    inline CreateFolderMembershipResult& WithFolderMember(const FolderMember& value) { SetFolderMember(value); return *this;}

    /**
     * <p>Information about the member in the folder.</p>
     */
    inline CreateFolderMembershipResult& WithFolderMember(FolderMember&& value) { SetFolderMember(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateFolderMembershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateFolderMembershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateFolderMembershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_status;

    FolderMember m_folderMember;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
