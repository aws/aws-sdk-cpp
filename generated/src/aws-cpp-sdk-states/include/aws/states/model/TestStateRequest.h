/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/InspectionLevel.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class TestStateRequest : public SFNRequest
  {
  public:
    AWS_SFN_API TestStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestState"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL) definition of the state.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL) definition of the state.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL) definition of the state.</p>
     */
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL) definition of the state.</p>
     */
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL) definition of the state.</p>
     */
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL) definition of the state.</p>
     */
    inline TestStateRequest& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL) definition of the state.</p>
     */
    inline TestStateRequest& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL) definition of the state.</p>
     */
    inline TestStateRequest& WithDefinition(const char* value) { SetDefinition(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the execution role with the required IAM
     * permissions for the state.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role with the required IAM
     * permissions for the state.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role with the required IAM
     * permissions for the state.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role with the required IAM
     * permissions for the state.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role with the required IAM
     * permissions for the state.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role with the required IAM
     * permissions for the state.</p>
     */
    inline TestStateRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role with the required IAM
     * permissions for the state.</p>
     */
    inline TestStateRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role with the required IAM
     * permissions for the state.</p>
     */
    inline TestStateRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A string that contains the JSON input data for the state.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>A string that contains the JSON input data for the state.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>A string that contains the JSON input data for the state.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>A string that contains the JSON input data for the state.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>A string that contains the JSON input data for the state.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>A string that contains the JSON input data for the state.</p>
     */
    inline TestStateRequest& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>A string that contains the JSON input data for the state.</p>
     */
    inline TestStateRequest& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>A string that contains the JSON input data for the state.</p>
     */
    inline TestStateRequest& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>Determines the values to return when a state is tested. You can specify one
     * of the following types:</p> <ul> <li> <p> <code>INFO</code>: Shows the final
     * state output. By default, Step Functions sets <code>inspectionLevel</code> to
     * <code>INFO</code> if you don't specify a level.</p> </li> <li> <p>
     * <code>DEBUG</code>: Shows the final state output along with the input and output
     * data processing result.</p> </li> <li> <p> <code>TRACE</code>: Shows the HTTP
     * request and response for an HTTP Task. This level also shows the final state
     * output along with the input and output data processing result.</p> </li> </ul>
     * <p>Each of these levels also provide information about the status of the state
     * execution and the next state to transition to.</p>
     */
    inline const InspectionLevel& GetInspectionLevel() const{ return m_inspectionLevel; }

    /**
     * <p>Determines the values to return when a state is tested. You can specify one
     * of the following types:</p> <ul> <li> <p> <code>INFO</code>: Shows the final
     * state output. By default, Step Functions sets <code>inspectionLevel</code> to
     * <code>INFO</code> if you don't specify a level.</p> </li> <li> <p>
     * <code>DEBUG</code>: Shows the final state output along with the input and output
     * data processing result.</p> </li> <li> <p> <code>TRACE</code>: Shows the HTTP
     * request and response for an HTTP Task. This level also shows the final state
     * output along with the input and output data processing result.</p> </li> </ul>
     * <p>Each of these levels also provide information about the status of the state
     * execution and the next state to transition to.</p>
     */
    inline bool InspectionLevelHasBeenSet() const { return m_inspectionLevelHasBeenSet; }

    /**
     * <p>Determines the values to return when a state is tested. You can specify one
     * of the following types:</p> <ul> <li> <p> <code>INFO</code>: Shows the final
     * state output. By default, Step Functions sets <code>inspectionLevel</code> to
     * <code>INFO</code> if you don't specify a level.</p> </li> <li> <p>
     * <code>DEBUG</code>: Shows the final state output along with the input and output
     * data processing result.</p> </li> <li> <p> <code>TRACE</code>: Shows the HTTP
     * request and response for an HTTP Task. This level also shows the final state
     * output along with the input and output data processing result.</p> </li> </ul>
     * <p>Each of these levels also provide information about the status of the state
     * execution and the next state to transition to.</p>
     */
    inline void SetInspectionLevel(const InspectionLevel& value) { m_inspectionLevelHasBeenSet = true; m_inspectionLevel = value; }

    /**
     * <p>Determines the values to return when a state is tested. You can specify one
     * of the following types:</p> <ul> <li> <p> <code>INFO</code>: Shows the final
     * state output. By default, Step Functions sets <code>inspectionLevel</code> to
     * <code>INFO</code> if you don't specify a level.</p> </li> <li> <p>
     * <code>DEBUG</code>: Shows the final state output along with the input and output
     * data processing result.</p> </li> <li> <p> <code>TRACE</code>: Shows the HTTP
     * request and response for an HTTP Task. This level also shows the final state
     * output along with the input and output data processing result.</p> </li> </ul>
     * <p>Each of these levels also provide information about the status of the state
     * execution and the next state to transition to.</p>
     */
    inline void SetInspectionLevel(InspectionLevel&& value) { m_inspectionLevelHasBeenSet = true; m_inspectionLevel = std::move(value); }

    /**
     * <p>Determines the values to return when a state is tested. You can specify one
     * of the following types:</p> <ul> <li> <p> <code>INFO</code>: Shows the final
     * state output. By default, Step Functions sets <code>inspectionLevel</code> to
     * <code>INFO</code> if you don't specify a level.</p> </li> <li> <p>
     * <code>DEBUG</code>: Shows the final state output along with the input and output
     * data processing result.</p> </li> <li> <p> <code>TRACE</code>: Shows the HTTP
     * request and response for an HTTP Task. This level also shows the final state
     * output along with the input and output data processing result.</p> </li> </ul>
     * <p>Each of these levels also provide information about the status of the state
     * execution and the next state to transition to.</p>
     */
    inline TestStateRequest& WithInspectionLevel(const InspectionLevel& value) { SetInspectionLevel(value); return *this;}

    /**
     * <p>Determines the values to return when a state is tested. You can specify one
     * of the following types:</p> <ul> <li> <p> <code>INFO</code>: Shows the final
     * state output. By default, Step Functions sets <code>inspectionLevel</code> to
     * <code>INFO</code> if you don't specify a level.</p> </li> <li> <p>
     * <code>DEBUG</code>: Shows the final state output along with the input and output
     * data processing result.</p> </li> <li> <p> <code>TRACE</code>: Shows the HTTP
     * request and response for an HTTP Task. This level also shows the final state
     * output along with the input and output data processing result.</p> </li> </ul>
     * <p>Each of these levels also provide information about the status of the state
     * execution and the next state to transition to.</p>
     */
    inline TestStateRequest& WithInspectionLevel(InspectionLevel&& value) { SetInspectionLevel(std::move(value)); return *this;}


    /**
     * <p>Specifies whether or not to include secret information in the test result.
     * For HTTP Tasks, a secret includes the data that an EventBridge connection adds
     * to modify the HTTP request headers, query parameters, and body. Step Functions
     * doesn't omit any information included in the state definition or the HTTP
     * response.</p> <p>If you set <code>revealSecrets</code> to <code>true</code>, you
     * must make sure that the IAM user that calls the <code>TestState</code> API has
     * permission for the <code>states:RevealSecrets</code> action. For an example of
     * IAM policy that sets the <code>states:RevealSecrets</code> permission, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/test-state-isolation.html#test-state-permissions">IAM
     * permissions to test a state</a>. Without this permission, Step Functions throws
     * an access denied error.</p> <p>By default, <code>revealSecrets</code> is set to
     * <code>false</code>.</p>
     */
    inline bool GetRevealSecrets() const{ return m_revealSecrets; }

    /**
     * <p>Specifies whether or not to include secret information in the test result.
     * For HTTP Tasks, a secret includes the data that an EventBridge connection adds
     * to modify the HTTP request headers, query parameters, and body. Step Functions
     * doesn't omit any information included in the state definition or the HTTP
     * response.</p> <p>If you set <code>revealSecrets</code> to <code>true</code>, you
     * must make sure that the IAM user that calls the <code>TestState</code> API has
     * permission for the <code>states:RevealSecrets</code> action. For an example of
     * IAM policy that sets the <code>states:RevealSecrets</code> permission, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/test-state-isolation.html#test-state-permissions">IAM
     * permissions to test a state</a>. Without this permission, Step Functions throws
     * an access denied error.</p> <p>By default, <code>revealSecrets</code> is set to
     * <code>false</code>.</p>
     */
    inline bool RevealSecretsHasBeenSet() const { return m_revealSecretsHasBeenSet; }

    /**
     * <p>Specifies whether or not to include secret information in the test result.
     * For HTTP Tasks, a secret includes the data that an EventBridge connection adds
     * to modify the HTTP request headers, query parameters, and body. Step Functions
     * doesn't omit any information included in the state definition or the HTTP
     * response.</p> <p>If you set <code>revealSecrets</code> to <code>true</code>, you
     * must make sure that the IAM user that calls the <code>TestState</code> API has
     * permission for the <code>states:RevealSecrets</code> action. For an example of
     * IAM policy that sets the <code>states:RevealSecrets</code> permission, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/test-state-isolation.html#test-state-permissions">IAM
     * permissions to test a state</a>. Without this permission, Step Functions throws
     * an access denied error.</p> <p>By default, <code>revealSecrets</code> is set to
     * <code>false</code>.</p>
     */
    inline void SetRevealSecrets(bool value) { m_revealSecretsHasBeenSet = true; m_revealSecrets = value; }

    /**
     * <p>Specifies whether or not to include secret information in the test result.
     * For HTTP Tasks, a secret includes the data that an EventBridge connection adds
     * to modify the HTTP request headers, query parameters, and body. Step Functions
     * doesn't omit any information included in the state definition or the HTTP
     * response.</p> <p>If you set <code>revealSecrets</code> to <code>true</code>, you
     * must make sure that the IAM user that calls the <code>TestState</code> API has
     * permission for the <code>states:RevealSecrets</code> action. For an example of
     * IAM policy that sets the <code>states:RevealSecrets</code> permission, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/test-state-isolation.html#test-state-permissions">IAM
     * permissions to test a state</a>. Without this permission, Step Functions throws
     * an access denied error.</p> <p>By default, <code>revealSecrets</code> is set to
     * <code>false</code>.</p>
     */
    inline TestStateRequest& WithRevealSecrets(bool value) { SetRevealSecrets(value); return *this;}

  private:

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    InspectionLevel m_inspectionLevel;
    bool m_inspectionLevelHasBeenSet = false;

    bool m_revealSecrets;
    bool m_revealSecretsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
