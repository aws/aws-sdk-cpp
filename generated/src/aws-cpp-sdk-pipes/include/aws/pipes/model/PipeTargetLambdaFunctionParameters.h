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
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) - Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * response includes the function response and additional data.</p> </li> <li> <p>
     * <code>Event</code> - Invoke the function asynchronously. Send events that fail
     * multiple times to the function's dead-letter queue (if it's configured). The API
     * response only includes a status code.</p> </li> <li> <p> <code>DryRun</code> -
     * Validate parameter values and verify that the user or role has permission to
     * invoke the function.</p> </li> </ul>
     */
    inline const PipeTargetInvocationType& GetInvocationType() const{ return m_invocationType; }

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) - Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * response includes the function response and additional data.</p> </li> <li> <p>
     * <code>Event</code> - Invoke the function asynchronously. Send events that fail
     * multiple times to the function's dead-letter queue (if it's configured). The API
     * response only includes a status code.</p> </li> <li> <p> <code>DryRun</code> -
     * Validate parameter values and verify that the user or role has permission to
     * invoke the function.</p> </li> </ul>
     */
    inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) - Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * response includes the function response and additional data.</p> </li> <li> <p>
     * <code>Event</code> - Invoke the function asynchronously. Send events that fail
     * multiple times to the function's dead-letter queue (if it's configured). The API
     * response only includes a status code.</p> </li> <li> <p> <code>DryRun</code> -
     * Validate parameter values and verify that the user or role has permission to
     * invoke the function.</p> </li> </ul>
     */
    inline void SetInvocationType(const PipeTargetInvocationType& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) - Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * response includes the function response and additional data.</p> </li> <li> <p>
     * <code>Event</code> - Invoke the function asynchronously. Send events that fail
     * multiple times to the function's dead-letter queue (if it's configured). The API
     * response only includes a status code.</p> </li> <li> <p> <code>DryRun</code> -
     * Validate parameter values and verify that the user or role has permission to
     * invoke the function.</p> </li> </ul>
     */
    inline void SetInvocationType(PipeTargetInvocationType&& value) { m_invocationTypeHasBeenSet = true; m_invocationType = std::move(value); }

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) - Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * response includes the function response and additional data.</p> </li> <li> <p>
     * <code>Event</code> - Invoke the function asynchronously. Send events that fail
     * multiple times to the function's dead-letter queue (if it's configured). The API
     * response only includes a status code.</p> </li> <li> <p> <code>DryRun</code> -
     * Validate parameter values and verify that the user or role has permission to
     * invoke the function.</p> </li> </ul>
     */
    inline PipeTargetLambdaFunctionParameters& WithInvocationType(const PipeTargetInvocationType& value) { SetInvocationType(value); return *this;}

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) - Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * response includes the function response and additional data.</p> </li> <li> <p>
     * <code>Event</code> - Invoke the function asynchronously. Send events that fail
     * multiple times to the function's dead-letter queue (if it's configured). The API
     * response only includes a status code.</p> </li> <li> <p> <code>DryRun</code> -
     * Validate parameter values and verify that the user or role has permission to
     * invoke the function.</p> </li> </ul>
     */
    inline PipeTargetLambdaFunctionParameters& WithInvocationType(PipeTargetInvocationType&& value) { SetInvocationType(std::move(value)); return *this;}

  private:

    PipeTargetInvocationType m_invocationType;
    bool m_invocationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
