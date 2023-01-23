/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The function's X-Ray tracing configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsLambdaFunctionTracingConfig">AWS
   * API Reference</a></p>
   */
  class AwsLambdaFunctionTracingConfig
  {
  public:
    AWS_SECURITYHUB_API AwsLambdaFunctionTracingConfig();
    AWS_SECURITYHUB_API AwsLambdaFunctionTracingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsLambdaFunctionTracingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tracing mode.</p>
     */
    inline const Aws::String& GetMode() const{ return m_mode; }

    /**
     * <p>The tracing mode.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The tracing mode.</p>
     */
    inline void SetMode(const Aws::String& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The tracing mode.</p>
     */
    inline void SetMode(Aws::String&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The tracing mode.</p>
     */
    inline void SetMode(const char* value) { m_modeHasBeenSet = true; m_mode.assign(value); }

    /**
     * <p>The tracing mode.</p>
     */
    inline AwsLambdaFunctionTracingConfig& WithMode(const Aws::String& value) { SetMode(value); return *this;}

    /**
     * <p>The tracing mode.</p>
     */
    inline AwsLambdaFunctionTracingConfig& WithMode(Aws::String&& value) { SetMode(std::move(value)); return *this;}

    /**
     * <p>The tracing mode.</p>
     */
    inline AwsLambdaFunctionTracingConfig& WithMode(const char* value) { SetMode(value); return *this;}

  private:

    Aws::String m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
