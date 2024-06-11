/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
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
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p>A structure that defines one error caused by a <a
   * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_BatchDeleteRumMetricsDefinitions.html">BatchCreateRumMetricsDefinitions</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/BatchDeleteRumMetricDefinitionsError">AWS
   * API Reference</a></p>
   */
  class BatchDeleteRumMetricDefinitionsError
  {
  public:
    AWS_CLOUDWATCHRUM_API BatchDeleteRumMetricDefinitionsError();
    AWS_CLOUDWATCHRUM_API BatchDeleteRumMetricDefinitionsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API BatchDeleteRumMetricDefinitionsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline BatchDeleteRumMetricDefinitionsError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline BatchDeleteRumMetricDefinitionsError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline BatchDeleteRumMetricDefinitionsError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message for this metric definition.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline BatchDeleteRumMetricDefinitionsError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline BatchDeleteRumMetricDefinitionsError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline BatchDeleteRumMetricDefinitionsError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the metric definition that caused this error.</p>
     */
    inline const Aws::String& GetMetricDefinitionId() const{ return m_metricDefinitionId; }
    inline bool MetricDefinitionIdHasBeenSet() const { return m_metricDefinitionIdHasBeenSet; }
    inline void SetMetricDefinitionId(const Aws::String& value) { m_metricDefinitionIdHasBeenSet = true; m_metricDefinitionId = value; }
    inline void SetMetricDefinitionId(Aws::String&& value) { m_metricDefinitionIdHasBeenSet = true; m_metricDefinitionId = std::move(value); }
    inline void SetMetricDefinitionId(const char* value) { m_metricDefinitionIdHasBeenSet = true; m_metricDefinitionId.assign(value); }
    inline BatchDeleteRumMetricDefinitionsError& WithMetricDefinitionId(const Aws::String& value) { SetMetricDefinitionId(value); return *this;}
    inline BatchDeleteRumMetricDefinitionsError& WithMetricDefinitionId(Aws::String&& value) { SetMetricDefinitionId(std::move(value)); return *this;}
    inline BatchDeleteRumMetricDefinitionsError& WithMetricDefinitionId(const char* value) { SetMetricDefinitionId(value); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_metricDefinitionId;
    bool m_metricDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
