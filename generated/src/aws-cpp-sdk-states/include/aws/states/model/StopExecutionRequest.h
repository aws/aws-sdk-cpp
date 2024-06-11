/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class StopExecutionRequest : public SFNRequest
  {
  public:
    AWS_SFN_API StopExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopExecution"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the execution to stop.</p>
     */
    inline const Aws::String& GetExecutionArn() const{ return m_executionArn; }
    inline bool ExecutionArnHasBeenSet() const { return m_executionArnHasBeenSet; }
    inline void SetExecutionArn(const Aws::String& value) { m_executionArnHasBeenSet = true; m_executionArn = value; }
    inline void SetExecutionArn(Aws::String&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::move(value); }
    inline void SetExecutionArn(const char* value) { m_executionArnHasBeenSet = true; m_executionArn.assign(value); }
    inline StopExecutionRequest& WithExecutionArn(const Aws::String& value) { SetExecutionArn(value); return *this;}
    inline StopExecutionRequest& WithExecutionArn(Aws::String&& value) { SetExecutionArn(std::move(value)); return *this;}
    inline StopExecutionRequest& WithExecutionArn(const char* value) { SetExecutionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code of the failure.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline StopExecutionRequest& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline StopExecutionRequest& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline StopExecutionRequest& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
    inline void SetCause(const Aws::String& value) { m_causeHasBeenSet = true; m_cause = value; }
    inline void SetCause(Aws::String&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }
    inline void SetCause(const char* value) { m_causeHasBeenSet = true; m_cause.assign(value); }
    inline StopExecutionRequest& WithCause(const Aws::String& value) { SetCause(value); return *this;}
    inline StopExecutionRequest& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}
    inline StopExecutionRequest& WithCause(const char* value) { SetCause(value); return *this;}
    ///@}
  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
