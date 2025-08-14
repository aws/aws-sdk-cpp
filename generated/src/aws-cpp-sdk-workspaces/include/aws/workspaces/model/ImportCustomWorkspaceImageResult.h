/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/CustomWorkspaceImageImportState.h>
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
  class ImportCustomWorkspaceImageResult
  {
  public:
    AWS_WORKSPACES_API ImportCustomWorkspaceImageResult() = default;
    AWS_WORKSPACES_API ImportCustomWorkspaceImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API ImportCustomWorkspaceImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the WorkSpace image.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ImportCustomWorkspaceImageResult& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the WorkSpace image.</p>
     */
    inline CustomWorkspaceImageImportState GetState() const { return m_state; }
    inline void SetState(CustomWorkspaceImageImportState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ImportCustomWorkspaceImageResult& WithState(CustomWorkspaceImageImportState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ImportCustomWorkspaceImageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    CustomWorkspaceImageImportState m_state{CustomWorkspaceImageImportState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
