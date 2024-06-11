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
    AWS_WORKSPACES_API FailedCreateWorkspaceRequest();
    AWS_WORKSPACES_API FailedCreateWorkspaceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API FailedCreateWorkspaceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the WorkSpace.</p>
     */
    inline const WorkspaceRequest& GetWorkspaceRequest() const{ return m_workspaceRequest; }
    inline bool WorkspaceRequestHasBeenSet() const { return m_workspaceRequestHasBeenSet; }
    inline void SetWorkspaceRequest(const WorkspaceRequest& value) { m_workspaceRequestHasBeenSet = true; m_workspaceRequest = value; }
    inline void SetWorkspaceRequest(WorkspaceRequest&& value) { m_workspaceRequestHasBeenSet = true; m_workspaceRequest = std::move(value); }
    inline FailedCreateWorkspaceRequest& WithWorkspaceRequest(const WorkspaceRequest& value) { SetWorkspaceRequest(value); return *this;}
    inline FailedCreateWorkspaceRequest& WithWorkspaceRequest(WorkspaceRequest&& value) { SetWorkspaceRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline FailedCreateWorkspaceRequest& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline FailedCreateWorkspaceRequest& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline FailedCreateWorkspaceRequest& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline FailedCreateWorkspaceRequest& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline FailedCreateWorkspaceRequest& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline FailedCreateWorkspaceRequest& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
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
