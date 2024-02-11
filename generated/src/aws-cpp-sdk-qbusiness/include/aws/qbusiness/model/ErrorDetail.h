/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ErrorCode.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides information about a data source sync error.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ErrorDetail">AWS
   * API Reference</a></p>
   */
  class ErrorDetail
  {
  public:
    AWS_QBUSINESS_API ErrorDetail();
    AWS_QBUSINESS_API ErrorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The code associated with the data source sync error.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The code associated with the data source sync error.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The code associated with the data source sync error.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The code associated with the data source sync error.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The code associated with the data source sync error.</p>
     */
    inline ErrorDetail& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The code associated with the data source sync error.</p>
     */
    inline ErrorDetail& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The message explaining the data source sync error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The message explaining the data source sync error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The message explaining the data source sync error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The message explaining the data source sync error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The message explaining the data source sync error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The message explaining the data source sync error.</p>
     */
    inline ErrorDetail& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The message explaining the data source sync error.</p>
     */
    inline ErrorDetail& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The message explaining the data source sync error.</p>
     */
    inline ErrorDetail& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
