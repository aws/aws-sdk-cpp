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
    AWS_WORKSPACES_API FailedCreateStandbyWorkspacesRequest();
    AWS_WORKSPACES_API FailedCreateStandbyWorkspacesRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API FailedCreateStandbyWorkspacesRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the standby WorkSpace that could not be created.</p>
     */
    inline const StandbyWorkspace& GetStandbyWorkspaceRequest() const{ return m_standbyWorkspaceRequest; }
    inline bool StandbyWorkspaceRequestHasBeenSet() const { return m_standbyWorkspaceRequestHasBeenSet; }
    inline void SetStandbyWorkspaceRequest(const StandbyWorkspace& value) { m_standbyWorkspaceRequestHasBeenSet = true; m_standbyWorkspaceRequest = value; }
    inline void SetStandbyWorkspaceRequest(StandbyWorkspace&& value) { m_standbyWorkspaceRequestHasBeenSet = true; m_standbyWorkspaceRequest = std::move(value); }
    inline FailedCreateStandbyWorkspacesRequest& WithStandbyWorkspaceRequest(const StandbyWorkspace& value) { SetStandbyWorkspaceRequest(value); return *this;}
    inline FailedCreateStandbyWorkspacesRequest& WithStandbyWorkspaceRequest(StandbyWorkspace&& value) { SetStandbyWorkspaceRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that is returned if the standby WorkSpace could not be
     * created.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline FailedCreateStandbyWorkspacesRequest& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline FailedCreateStandbyWorkspacesRequest& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline FailedCreateStandbyWorkspacesRequest& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the error message that is returned if the standby WorkSpace could
     * not be created.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline FailedCreateStandbyWorkspacesRequest& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline FailedCreateStandbyWorkspacesRequest& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline FailedCreateStandbyWorkspacesRequest& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
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
