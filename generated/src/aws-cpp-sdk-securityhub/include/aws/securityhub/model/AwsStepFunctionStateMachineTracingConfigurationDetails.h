/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Specifies whether X-Ray tracing is enabled. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsStepFunctionStateMachineTracingConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsStepFunctionStateMachineTracingConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineTracingConfigurationDetails();
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineTracingConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineTracingConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> When set to true, X-Ray tracing is enabled. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p> When set to true, X-Ray tracing is enabled. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p> When set to true, X-Ray tracing is enabled. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p> When set to true, X-Ray tracing is enabled. </p>
     */
    inline AwsStepFunctionStateMachineTracingConfigurationDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
