/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about a Lambda function timeout that occurred during an
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/LambdaFunctionTimedOutEventDetails">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionTimedOutEventDetails
  {
  public:
    AWS_SFN_API LambdaFunctionTimedOutEventDetails();
    AWS_SFN_API LambdaFunctionTimedOutEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API LambdaFunctionTimedOutEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code of the failure.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>The error code of the failure.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The error code of the failure.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The error code of the failure.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The error code of the failure.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>The error code of the failure.</p>
     */
    inline LambdaFunctionTimedOutEventDetails& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>The error code of the failure.</p>
     */
    inline LambdaFunctionTimedOutEventDetails& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>The error code of the failure.</p>
     */
    inline LambdaFunctionTimedOutEventDetails& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>A more detailed explanation of the cause of the timeout.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }

    /**
     * <p>A more detailed explanation of the cause of the timeout.</p>
     */
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }

    /**
     * <p>A more detailed explanation of the cause of the timeout.</p>
     */
    inline void SetCause(const Aws::String& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>A more detailed explanation of the cause of the timeout.</p>
     */
    inline void SetCause(Aws::String&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }

    /**
     * <p>A more detailed explanation of the cause of the timeout.</p>
     */
    inline void SetCause(const char* value) { m_causeHasBeenSet = true; m_cause.assign(value); }

    /**
     * <p>A more detailed explanation of the cause of the timeout.</p>
     */
    inline LambdaFunctionTimedOutEventDetails& WithCause(const Aws::String& value) { SetCause(value); return *this;}

    /**
     * <p>A more detailed explanation of the cause of the timeout.</p>
     */
    inline LambdaFunctionTimedOutEventDetails& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}

    /**
     * <p>A more detailed explanation of the cause of the timeout.</p>
     */
    inline LambdaFunctionTimedOutEventDetails& WithCause(const char* value) { SetCause(value); return *this;}

  private:

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
