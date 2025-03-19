/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/WorkspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a WorkSpace that cannot be created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/FailedCreateWorkspaceRequest">AWS
   * API Reference</a></p>
   */
  class FailedCreateWorkspaceRequest
  {
  public:
    AWS_WORKSPACES_API FailedCreateWorkspaceRequest() = default;
    AWS_WORKSPACES_API FailedCreateWorkspaceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API FailedCreateWorkspaceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the WorkSpace.</p>
     */
    inline const WorkspaceRequest& GetWorkspaceRequest() const { return m_workspaceRequest; }
    inline bool WorkspaceRequestHasBeenSet() const { return m_workspaceRequestHasBeenSet; }
    template<typename WorkspaceRequestT = WorkspaceRequest>
    void SetWorkspaceRequest(WorkspaceRequestT&& value) { m_workspaceRequestHasBeenSet = true; m_workspaceRequest = std::forward<WorkspaceRequestT>(value); }
    template<typename WorkspaceRequestT = WorkspaceRequest>
    FailedCreateWorkspaceRequest& WithWorkspaceRequest(WorkspaceRequestT&& value) { SetWorkspaceRequest(std::forward<WorkspaceRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    FailedCreateWorkspaceRequest& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    FailedCreateWorkspaceRequest& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    WorkspaceRequest m_workspaceRequest;
    bool m_workspaceRequestHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
