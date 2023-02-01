/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
   * <p>Describes a WorkSpace that could not be rebooted. (<a>RebootWorkspaces</a>),
   * rebuilt (<a>RebuildWorkspaces</a>), restored (<a>RestoreWorkspace</a>),
   * terminated (<a>TerminateWorkspaces</a>), started (<a>StartWorkspaces</a>), or
   * stopped (<a>StopWorkspaces</a>).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/FailedWorkspaceChangeRequest">AWS
   * API Reference</a></p>
   */
  class FailedWorkspaceChangeRequest
  {
  public:
    AWS_WORKSPACES_API FailedWorkspaceChangeRequest();
    AWS_WORKSPACES_API FailedWorkspaceChangeRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API FailedWorkspaceChangeRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline FailedWorkspaceChangeRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline FailedWorkspaceChangeRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline FailedWorkspaceChangeRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The error code that is returned if the WorkSpace cannot be rebooted.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be rebooted.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be rebooted.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be rebooted.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be rebooted.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be rebooted.</p>
     */
    inline FailedWorkspaceChangeRequest& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code that is returned if the WorkSpace cannot be rebooted.</p>
     */
    inline FailedWorkspaceChangeRequest& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code that is returned if the WorkSpace cannot be rebooted.</p>
     */
    inline FailedWorkspaceChangeRequest& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * rebooted.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * rebooted.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * rebooted.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * rebooted.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * rebooted.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * rebooted.</p>
     */
    inline FailedWorkspaceChangeRequest& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * rebooted.</p>
     */
    inline FailedWorkspaceChangeRequest& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * rebooted.</p>
     */
    inline FailedWorkspaceChangeRequest& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
