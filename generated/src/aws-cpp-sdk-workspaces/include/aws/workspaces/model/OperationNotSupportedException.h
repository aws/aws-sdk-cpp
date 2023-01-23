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
   * <p>This operation is not supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/OperationNotSupportedException">AWS
   * API Reference</a></p>
   */
  class OperationNotSupportedException
  {
  public:
    AWS_WORKSPACES_API OperationNotSupportedException();
    AWS_WORKSPACES_API OperationNotSupportedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API OperationNotSupportedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The exception error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The exception error message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The exception error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The exception error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The exception error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The exception error message.</p>
     */
    inline OperationNotSupportedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The exception error message.</p>
     */
    inline OperationNotSupportedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The exception error message.</p>
     */
    inline OperationNotSupportedException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The exception error reason.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The exception error reason.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The exception error reason.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The exception error reason.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The exception error reason.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The exception error reason.</p>
     */
    inline OperationNotSupportedException& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The exception error reason.</p>
     */
    inline OperationNotSupportedException& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The exception error reason.</p>
     */
    inline OperationNotSupportedException& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
