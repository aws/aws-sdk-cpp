/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An object that contains information on the error that caused the snapshot job
   * to fail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotJobErrorInfo">AWS
   * API Reference</a></p>
   */
  class SnapshotJobErrorInfo
  {
  public:
    AWS_QUICKSIGHT_API SnapshotJobErrorInfo();
    AWS_QUICKSIGHT_API SnapshotJobErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotJobErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message.</p>
     */
    inline SnapshotJobErrorInfo& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline SnapshotJobErrorInfo& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline SnapshotJobErrorInfo& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The error type.</p>
     */
    inline const Aws::String& GetErrorType() const{ return m_errorType; }

    /**
     * <p>The error type.</p>
     */
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }

    /**
     * <p>The error type.</p>
     */
    inline void SetErrorType(const Aws::String& value) { m_errorTypeHasBeenSet = true; m_errorType = value; }

    /**
     * <p>The error type.</p>
     */
    inline void SetErrorType(Aws::String&& value) { m_errorTypeHasBeenSet = true; m_errorType = std::move(value); }

    /**
     * <p>The error type.</p>
     */
    inline void SetErrorType(const char* value) { m_errorTypeHasBeenSet = true; m_errorType.assign(value); }

    /**
     * <p>The error type.</p>
     */
    inline SnapshotJobErrorInfo& WithErrorType(const Aws::String& value) { SetErrorType(value); return *this;}

    /**
     * <p>The error type.</p>
     */
    inline SnapshotJobErrorInfo& WithErrorType(Aws::String&& value) { SetErrorType(std::move(value)); return *this;}

    /**
     * <p>The error type.</p>
     */
    inline SnapshotJobErrorInfo& WithErrorType(const char* value) { SetErrorType(value); return *this;}

  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_errorType;
    bool m_errorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
