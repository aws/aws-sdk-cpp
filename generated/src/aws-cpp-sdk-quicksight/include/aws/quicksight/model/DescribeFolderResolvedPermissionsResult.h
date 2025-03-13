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
  class DescribeFolderResolvedPermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeFolderResolvedPermissionsResult() = default;
    AWS_QUICKSIGHT_API DescribeFolderResolvedPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeFolderResolvedPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeFolderResolvedPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const { return m_folderId; }
    template<typename FolderIdT = Aws::String>
    void SetFolderId(FolderIdT&& value) { m_folderIdHasBeenSet = true; m_folderId = std::forward<FolderIdT>(value); }
    template<typename FolderIdT = Aws::String>
    DescribeFolderResolvedPermissionsResult& WithFolderId(FolderIdT&& value) { SetFolderId(std::forward<FolderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the folder.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeFolderResolvedPermissionsResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the permissions for the folder.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    DescribeFolderResolvedPermissionsResult& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    template<typename PermissionsT = ResourcePermission>
    DescribeFolderResolvedPermissionsResult& AddPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions.emplace_back(std::forward<PermissionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFolderResolvedPermissionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFolderResolvedPermissionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
