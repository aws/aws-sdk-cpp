/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourcePermission.h>
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
  class UpdateFolderPermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateFolderPermissionsResult();
    AWS_QUICKSIGHT_API UpdateFolderPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateFolderPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateFolderPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline UpdateFolderPermissionsResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline UpdateFolderPermissionsResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline UpdateFolderPermissionsResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const{ return m_folderId; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const Aws::String& value) { m_folderId = value; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(Aws::String&& value) { m_folderId = std::move(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const char* value) { m_folderId.assign(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline UpdateFolderPermissionsResult& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline UpdateFolderPermissionsResult& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline UpdateFolderPermissionsResult& WithFolderId(const char* value) { SetFolderId(value); return *this;}


    /**
     * <p>Information about the permissions for the folder.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>Information about the permissions for the folder.</p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissions = value; }

    /**
     * <p>Information about the permissions for the folder.</p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissions = std::move(value); }

    /**
     * <p>Information about the permissions for the folder.</p>
     */
    inline UpdateFolderPermissionsResult& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>Information about the permissions for the folder.</p>
     */
    inline UpdateFolderPermissionsResult& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>Information about the permissions for the folder.</p>
     */
    inline UpdateFolderPermissionsResult& AddPermissions(const ResourcePermission& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>Information about the permissions for the folder.</p>
     */
    inline UpdateFolderPermissionsResult& AddPermissions(ResourcePermission&& value) { m_permissions.push_back(std::move(value)); return *this; }


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
    inline UpdateFolderPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline UpdateFolderPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline UpdateFolderPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_status;

    Aws::String m_arn;

    Aws::String m_folderId;

    Aws::Vector<ResourcePermission> m_permissions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
