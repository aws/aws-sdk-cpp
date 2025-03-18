﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/StandbyWorkspace.h>
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
   * <p>Describes the standby WorkSpace that could not be created.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/FailedCreateStandbyWorkspacesRequest">AWS
   * API Reference</a></p>
   */
  class FailedCreateStandbyWorkspacesRequest
  {
  public:
    AWS_WORKSPACES_API FailedCreateStandbyWorkspacesRequest() = default;
    AWS_WORKSPACES_API FailedCreateStandbyWorkspacesRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API FailedCreateStandbyWorkspacesRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the standby WorkSpace that could not be created.</p>
     */
    inline const StandbyWorkspace& GetStandbyWorkspaceRequest() const { return m_standbyWorkspaceRequest; }
    inline bool StandbyWorkspaceRequestHasBeenSet() const { return m_standbyWorkspaceRequestHasBeenSet; }
    template<typename StandbyWorkspaceRequestT = StandbyWorkspace>
    void SetStandbyWorkspaceRequest(StandbyWorkspaceRequestT&& value) { m_standbyWorkspaceRequestHasBeenSet = true; m_standbyWorkspaceRequest = std::forward<StandbyWorkspaceRequestT>(value); }
    template<typename StandbyWorkspaceRequestT = StandbyWorkspace>
    FailedCreateStandbyWorkspacesRequest& WithStandbyWorkspaceRequest(StandbyWorkspaceRequestT&& value) { SetStandbyWorkspaceRequest(std::forward<StandbyWorkspaceRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that is returned if the standby WorkSpace could not be
     * created.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    FailedCreateStandbyWorkspacesRequest& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the error message that is returned if the standby WorkSpace could
     * not be created.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    FailedCreateStandbyWorkspacesRequest& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    StandbyWorkspace m_standbyWorkspaceRequest;
    bool m_standbyWorkspaceRequestHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
