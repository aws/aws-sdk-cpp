﻿/**
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


    ///@{
    /**
     * <p>The JSON data input to the execution. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline ExecutionStartedEventDetails& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline ExecutionStartedEventDetails& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline ExecutionStartedEventDetails& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the input for an execution history event.</p>
     */
    inline const HistoryEventExecutionDataDetails& GetInputDetails() const{ return m_inputDetails; }
    inline bool InputDetailsHasBeenSet() const { return m_inputDetailsHasBeenSet; }
    inline void SetInputDetails(const HistoryEventExecutionDataDetails& value) { m_inputDetailsHasBeenSet = true; m_inputDetails = value; }
    inline void SetInputDetails(HistoryEventExecutionDataDetails&& value) { m_inputDetailsHasBeenSet = true; m_inputDetails = std::move(value); }
    inline ExecutionStartedEventDetails& WithInputDetails(const HistoryEventExecutionDataDetails& value) { SetInputDetails(value); return *this;}
    inline ExecutionStartedEventDetails& WithInputDetails(HistoryEventExecutionDataDetails&& value) { SetInputDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used for executing Lambda
     * tasks.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ExecutionStartedEventDetails& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ExecutionStartedEventDetails& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ExecutionStartedEventDetails& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine alias used for
     * starting the state machine execution.</p>
     */
    inline const Aws::String& GetStateMachineAliasArn() const{ return m_stateMachineAliasArn; }
    inline bool StateMachineAliasArnHasBeenSet() const { return m_stateMachineAliasArnHasBeenSet; }
    inline void SetStateMachineAliasArn(const Aws::String& value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn = value; }
    inline void SetStateMachineAliasArn(Aws::String&& value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn = std::move(value); }
    inline void SetStateMachineAliasArn(const char* value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn.assign(value); }
    inline ExecutionStartedEventDetails& WithStateMachineAliasArn(const Aws::String& value) { SetStateMachineAliasArn(value); return *this;}
    inline ExecutionStartedEventDetails& WithStateMachineAliasArn(Aws::String&& value) { SetStateMachineAliasArn(std::move(value)); return *this;}
    inline ExecutionStartedEventDetails& WithStateMachineAliasArn(const char* value) { SetStateMachineAliasArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine version used
     * for starting the state machine execution.</p>
     */
    inline const Aws::String& GetStateMachineVersionArn() const{ return m_stateMachineVersionArn; }
    inline bool StateMachineVersionArnHasBeenSet() const { return m_stateMachineVersionArnHasBeenSet; }
    inline void SetStateMachineVersionArn(const Aws::String& value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn = value; }
    inline void SetStateMachineVersionArn(Aws::String&& value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn = std::move(value); }
    inline void SetStateMachineVersionArn(const char* value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn.assign(value); }
    inline ExecutionStartedEventDetails& WithStateMachineVersionArn(const Aws::String& value) { SetStateMachineVersionArn(value); return *this;}
    inline ExecutionStartedEventDetails& WithStateMachineVersionArn(Aws::String&& value) { SetStateMachineVersionArn(std::move(value)); return *this;}
    inline ExecutionStartedEventDetails& WithStateMachineVersionArn(const char* value) { SetStateMachineVersionArn(value); return *this;}
    ///@}
  private:

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    HistoryEventExecutionDataDetails m_inputDetails;
    bool m_inputDetailsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_stateMachineAliasArn;
    bool m_stateMachineAliasArnHasBeenSet = false;

    Aws::String m_stateMachineVersionArn;
    bool m_stateMachineVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
