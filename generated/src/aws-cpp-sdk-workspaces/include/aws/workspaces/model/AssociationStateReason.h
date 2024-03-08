/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/AssociationErrorCode.h>
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
   * <p>Indicates the reason that the association deployment failed, including the
   * error code and error message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AssociationStateReason">AWS
   * API Reference</a></p>
   */
  class AssociationStateReason
  {
  public:
    AWS_WORKSPACES_API AssociationStateReason();
    AWS_WORKSPACES_API AssociationStateReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API AssociationStateReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code of the association deployment failure.</p>
     */
    inline const AssociationErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code of the association deployment failure.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code of the association deployment failure.</p>
     */
    inline void SetErrorCode(const AssociationErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code of the association deployment failure.</p>
     */
    inline void SetErrorCode(AssociationErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code of the association deployment failure.</p>
     */
    inline AssociationStateReason& WithErrorCode(const AssociationErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code of the association deployment failure.</p>
     */
    inline AssociationStateReason& WithErrorCode(AssociationErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The error message of the association deployment failure.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message of the association deployment failure.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message of the association deployment failure.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message of the association deployment failure.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message of the association deployment failure.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message of the association deployment failure.</p>
     */
    inline AssociationStateReason& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message of the association deployment failure.</p>
     */
    inline AssociationStateReason& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message of the association deployment failure.</p>
     */
    inline AssociationStateReason& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    AssociationErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
