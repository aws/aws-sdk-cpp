/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/PipeTargetInvocationType.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using a Lambda function as a target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetLambdaFunctionParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetLambdaFunctionParameters
  {
  public:
    AWS_PIPES_API PipeTargetLambdaFunctionParameters();
    AWS_PIPES_API PipeTargetLambdaFunctionParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetLambdaFunctionParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify whether to invoke the function synchronously or asynchronously.</p>
     * <ul> <li> <p> <code>REQUEST_RESPONSE</code> (default) - Invoke synchronously.
     * This corresponds to the <code>RequestResponse</code> option in the
     * <code>InvocationType</code> parameter for the Lambda <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html#API_Invoke_RequestSyntax">Invoke</a>
     * API.</p> </li> <li> <p> <code>FIRE_AND_FORGET</code> - Invoke asynchronously.
     * This corresponds to the <code>Event</code> option in the
     * <code>InvocationType</code> parameter for the Lambda <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html#API_Invoke_RequestSyntax">Invoke</a>
     * API.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html#pipes-invocation">Invocation
     * types</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const PipeTargetInvocationType& GetInvocationType() const{ return m_invocationType; }

    /**
     * <p>Specify whether to invoke the function synchronously or asynchronously.</p>
     * <ul> <li> <p> <code>REQUEST_RESPONSE</code> (default) - Invoke synchronously.
     * This corresponds to the <code>RequestResponse</code> option in the
     * <code>InvocationType</code> parameter for the Lambda <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html#API_Invoke_RequestSyntax">Invoke</a>
     * API.</p> </li> <li> <p> <code>FIRE_AND_FORGET</code> - Invoke asynchronously.
     * This corresponds to the <code>Event</code> option in the
     * <code>InvocationType</code> parameter for the Lambda <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html#API_Invoke_RequestSyntax">Invoke</a>
     * API.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html#pipes-invocation">Invocation
     * types</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }

    /**
     * <p>Specify whether to invoke the function synchronously or asynchronously.</p>
     * <ul> <li> <p> <code>REQUEST_RESPONSE</code> (default) - Invoke synchronously.
     * This corresponds to the <code>RequestResponse</code> option in the
     * <code>InvocationType</code> parameter for the Lambda <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html#API_Invoke_RequestSyntax">Invoke</a>
     * API.</p> </li> <li> <p> <code>FIRE_AND_FORGET</code> - Invoke asynchronously.
     * This corresponds to the <code>Event</code> option in the
     * <code>InvocationType</code> parameter for the Lambda <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html#API_Invoke_RequestSyntax">Invoke</a>
     * API.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html#pipes-invocation">Invocation
     * types</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetInvocationType(const PipeTargetInvocationType& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    /**
     * <p>Specify whether to invoke the function synchronously or asynchronously.</p>
     * <ul> <li> <p> <code>REQUEST_RESPONSE</code> (default) - Invoke synchronously.
     * This corresponds to the <code>RequestResponse</code> option in the
     * <code>InvocationType</code> parameter for the Lambda <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html#API_Invoke_RequestSyntax">Invoke</a>
     * API.</p> </li> <li> <p> <code>FIRE_AND_FORGET</code> - Invoke asynchronously.
     * This corresponds to the <code>Event</code> option in the
     * <code>InvocationType</code> parameter for the Lambda <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html#API_Invoke_RequestSyntax">Invoke</a>
     * API.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html#pipes-invocation">Invocation
     * types</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline void SetInvocationType(PipeTargetInvocationType&& value) { m_invocationTypeHasBeenSet = true; m_invocationType = std::move(value); }

    /**
     * <p>Specify whether to invoke the function synchronously or asynchronously.</p>
     * <ul> <li> <p> <code>REQUEST_RESPONSE</code> (default) - Invoke synchronously.
     * This corresponds to the <code>RequestResponse</code> option in the
     * <code>InvocationType</code> parameter for the Lambda <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html#API_Invoke_RequestSyntax">Invoke</a>
     * API.</p> </li> <li> <p> <code>FIRE_AND_FORGET</code> - Invoke asynchronously.
     * This corresponds to the <code>Event</code> option in the
     * <code>InvocationType</code> parameter for the Lambda <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html#API_Invoke_RequestSyntax">Invoke</a>
     * API.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html#pipes-invocation">Invocation
     * types</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline PipeTargetLambdaFunctionParameters& WithInvocationType(const PipeTargetInvocationType& value) { SetInvocationType(value); return *this;}

    /**
     * <p>Specify whether to invoke the function synchronously or asynchronously.</p>
     * <ul> <li> <p> <code>REQUEST_RESPONSE</code> (default) - Invoke synchronously.
     * This corresponds to the <code>RequestResponse</code> option in the
     * <code>InvocationType</code> parameter for the Lambda <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html#API_Invoke_RequestSyntax">Invoke</a>
     * API.</p> </li> <li> <p> <code>FIRE_AND_FORGET</code> - Invoke asynchronously.
     * This corresponds to the <code>Event</code> option in the
     * <code>InvocationType</code> parameter for the Lambda <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html#API_Invoke_RequestSyntax">Invoke</a>
     * API.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html#pipes-invocation">Invocation
     * types</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline PipeTargetLambdaFunctionParameters& WithInvocationType(PipeTargetInvocationType&& value) { SetInvocationType(std::move(value)); return *this;}

  private:

    PipeTargetInvocationType m_invocationType;
    bool m_invocationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
