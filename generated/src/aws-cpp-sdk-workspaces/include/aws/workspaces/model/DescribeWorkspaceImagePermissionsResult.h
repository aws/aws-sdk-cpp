/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ImagePermission.h>
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
namespace WorkSpaces
{
namespace Model
{
  class DescribeWorkspaceImagePermissionsResult
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspaceImagePermissionsResult() = default;
    AWS_WORKSPACES_API DescribeWorkspaceImagePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspaceImagePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the image.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    DescribeWorkspaceImagePermissionsResult& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the Amazon Web Services accounts that the image has been
     * shared with.</p>
     */
    inline const Aws::Vector<ImagePermission>& GetImagePermissions() const { return m_imagePermissions; }
    template<typename ImagePermissionsT = Aws::Vector<ImagePermission>>
    void SetImagePermissions(ImagePermissionsT&& value) { m_imagePermissionsHasBeenSet = true; m_imagePermissions = std::forward<ImagePermissionsT>(value); }
    template<typename ImagePermissionsT = Aws::Vector<ImagePermission>>
    DescribeWorkspaceImagePermissionsResult& WithImagePermissions(ImagePermissionsT&& value) { SetImagePermissions(std::forward<ImagePermissionsT>(value)); return *this;}
    template<typename ImagePermissionsT = ImagePermission>
    DescribeWorkspaceImagePermissionsResult& AddImagePermissions(ImagePermissionsT&& value) { m_imagePermissionsHasBeenSet = true; m_imagePermissions.emplace_back(std::forward<ImagePermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeWorkspaceImagePermissionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkspaceImagePermissionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::Vector<ImagePermission> m_imagePermissions;
    bool m_imagePermissionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
