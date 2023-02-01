/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/HistoryEventExecutionDataDetails.h>
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
   * <p>Contains details about the start of the execution.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ExecutionStartedEventDetails">AWS
   * API Reference</a></p>
   */
  class ExecutionStartedEventDetails
  {
  public:
    AWS_SFN_API ExecutionStartedEventDetails();
    AWS_SFN_API ExecutionStartedEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API ExecutionStartedEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The JSON data input to the execution. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The JSON data input to the execution. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The JSON data input to the execution. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The JSON data input to the execution. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The JSON data input to the execution. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The JSON data input to the execution. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline ExecutionStartedEventDetails& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The JSON data input to the execution. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline ExecutionStartedEventDetails& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The JSON data input to the execution. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline ExecutionStartedEventDetails& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>Contains details about the input for an execution history event.</p>
     */
    inline const HistoryEventExecutionDataDetails& GetInputDetails() const{ return m_inputDetails; }

    /**
     * <p>Contains details about the input for an execution history event.</p>
     */
    inline bool InputDetailsHasBeenSet() const { return m_inputDetailsHasBeenSet; }

    /**
     * <p>Contains details about the input for an execution history event.</p>
     */
    inline void SetInputDetails(const HistoryEventExecutionDataDetails& value) { m_inputDetailsHasBeenSet = true; m_inputDetails = value; }

    /**
     * <p>Contains details about the input for an execution history event.</p>
     */
    inline void SetInputDetails(HistoryEventExecutionDataDetails&& value) { m_inputDetailsHasBeenSet = true; m_inputDetails = std::move(value); }

    /**
     * <p>Contains details about the input for an execution history event.</p>
     */
    inline ExecutionStartedEventDetails& WithInputDetails(const HistoryEventExecutionDataDetails& value) { SetInputDetails(value); return *this;}

    /**
     * <p>Contains details about the input for an execution history event.</p>
     */
    inline ExecutionStartedEventDetails& WithInputDetails(HistoryEventExecutionDataDetails&& value) { SetInputDetails(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for executing Lambda
     * tasks.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for executing Lambda
     * tasks.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for executing Lambda
     * tasks.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for executing Lambda
     * tasks.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for executing Lambda
     * tasks.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for executing Lambda
     * tasks.</p>
     */
    inline ExecutionStartedEventDetails& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for executing Lambda
     * tasks.</p>
     */
    inline ExecutionStartedEventDetails& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for executing Lambda
     * tasks.</p>
     */
    inline ExecutionStartedEventDetails& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    HistoryEventExecutionDataDetails m_inputDetails;
    bool m_inputDetailsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
