/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p>Describes the error(s) encountered with the last update of the
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/UpdateError">AWS
   * API Reference</a></p>
   */
  class UpdateError
  {
  public:
    AWS_MWAA_API UpdateError();
    AWS_MWAA_API UpdateError(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API UpdateError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code that corresponds to the error with the last update.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code that corresponds to the error with the last update.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code that corresponds to the error with the last update.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code that corresponds to the error with the last update.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code that corresponds to the error with the last update.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code that corresponds to the error with the last update.</p>
     */
    inline UpdateError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code that corresponds to the error with the last update.</p>
     */
    inline UpdateError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code that corresponds to the error with the last update.</p>
     */
    inline UpdateError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The error message that corresponds to the error code.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message that corresponds to the error code.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message that corresponds to the error code.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message that corresponds to the error code.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message that corresponds to the error code.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message that corresponds to the error code.</p>
     */
    inline UpdateError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message that corresponds to the error code.</p>
     */
    inline UpdateError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message that corresponds to the error code.</p>
     */
    inline UpdateError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
