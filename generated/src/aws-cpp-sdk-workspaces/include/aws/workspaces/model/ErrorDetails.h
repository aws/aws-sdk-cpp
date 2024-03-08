/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/WorkspaceImageErrorDetailCode.h>
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
   * <p>Describes in-depth details about the error. These details include the
   * possible causes of the error and troubleshooting information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ErrorDetails">AWS
   * API Reference</a></p>
   */
  class ErrorDetails
  {
  public:
    AWS_WORKSPACES_API ErrorDetails();
    AWS_WORKSPACES_API ErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates the error code returned.</p>
     */
    inline const WorkspaceImageErrorDetailCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Indicates the error code returned.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>Indicates the error code returned.</p>
     */
    inline void SetErrorCode(const WorkspaceImageErrorDetailCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>Indicates the error code returned.</p>
     */
    inline void SetErrorCode(WorkspaceImageErrorDetailCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>Indicates the error code returned.</p>
     */
    inline ErrorDetails& WithErrorCode(const WorkspaceImageErrorDetailCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Indicates the error code returned.</p>
     */
    inline ErrorDetails& WithErrorCode(WorkspaceImageErrorDetailCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The text of the error message related the error code.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The text of the error message related the error code.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The text of the error message related the error code.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The text of the error message related the error code.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The text of the error message related the error code.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The text of the error message related the error code.</p>
     */
    inline ErrorDetails& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The text of the error message related the error code.</p>
     */
    inline ErrorDetails& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The text of the error message related the error code.</p>
     */
    inline ErrorDetails& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    WorkspaceImageErrorDetailCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
