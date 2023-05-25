/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/InferenceExecutionMode.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies details about how containers in a multi-container endpoint are
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceExecutionConfig">AWS
   * API Reference</a></p>
   */
  class InferenceExecutionConfig
  {
  public:
    AWS_SAGEMAKER_API InferenceExecutionConfig();
    AWS_SAGEMAKER_API InferenceExecutionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceExecutionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How containers in a multi-container are run. The following values are
     * valid.</p> <ul> <li> <p> <code>SERIAL</code> - Containers run as a serial
     * pipeline.</p> </li> <li> <p> <code>DIRECT</code> - Only the individual container
     * that you specify is run.</p> </li> </ul>
     */
    inline const InferenceExecutionMode& GetMode() const{ return m_mode; }

    /**
     * <p>How containers in a multi-container are run. The following values are
     * valid.</p> <ul> <li> <p> <code>SERIAL</code> - Containers run as a serial
     * pipeline.</p> </li> <li> <p> <code>DIRECT</code> - Only the individual container
     * that you specify is run.</p> </li> </ul>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>How containers in a multi-container are run. The following values are
     * valid.</p> <ul> <li> <p> <code>SERIAL</code> - Containers run as a serial
     * pipeline.</p> </li> <li> <p> <code>DIRECT</code> - Only the individual container
     * that you specify is run.</p> </li> </ul>
     */
    inline void SetMode(const InferenceExecutionMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>How containers in a multi-container are run. The following values are
     * valid.</p> <ul> <li> <p> <code>SERIAL</code> - Containers run as a serial
     * pipeline.</p> </li> <li> <p> <code>DIRECT</code> - Only the individual container
     * that you specify is run.</p> </li> </ul>
     */
    inline void SetMode(InferenceExecutionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>How containers in a multi-container are run. The following values are
     * valid.</p> <ul> <li> <p> <code>SERIAL</code> - Containers run as a serial
     * pipeline.</p> </li> <li> <p> <code>DIRECT</code> - Only the individual container
     * that you specify is run.</p> </li> </ul>
     */
    inline InferenceExecutionConfig& WithMode(const InferenceExecutionMode& value) { SetMode(value); return *this;}

    /**
     * <p>How containers in a multi-container are run. The following values are
     * valid.</p> <ul> <li> <p> <code>SERIAL</code> - Containers run as a serial
     * pipeline.</p> </li> <li> <p> <code>DIRECT</code> - Only the individual container
     * that you specify is run.</p> </li> </ul>
     */
    inline InferenceExecutionConfig& WithMode(InferenceExecutionMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    InferenceExecutionMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
