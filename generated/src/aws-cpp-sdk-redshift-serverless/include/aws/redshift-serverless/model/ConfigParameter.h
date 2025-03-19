/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>An array of key-value pairs to set for advanced control over Amazon Redshift
   * Serverless.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ConfigParameter">AWS
   * API Reference</a></p>
   */
  class ConfigParameter
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ConfigParameter() = default;
    AWS_REDSHIFTSERVERLESS_API ConfigParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API ConfigParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the parameter. The options are <code>auto_mv</code>,
     * <code>datestyle</code>, <code>enable_case_sensitive_identifier</code>,
     * <code>enable_user_activity_logging</code>, <code>query_group</code>,
     * <code>search_path</code>, <code>require_ssl</code>, <code>use_fips_ssl</code>,
     * and query monitoring metrics that let you define performance boundaries. For
     * more information about query monitoring rules and available metrics, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/cm-c-wlm-query-monitoring-rules.html#cm-c-wlm-query-monitoring-metrics-serverless">Query
     * monitoring metrics for Amazon Redshift Serverless</a>.</p>
     */
    inline const Aws::String& GetParameterKey() const { return m_parameterKey; }
    inline bool ParameterKeyHasBeenSet() const { return m_parameterKeyHasBeenSet; }
    template<typename ParameterKeyT = Aws::String>
    void SetParameterKey(ParameterKeyT&& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = std::forward<ParameterKeyT>(value); }
    template<typename ParameterKeyT = Aws::String>
    ConfigParameter& WithParameterKey(ParameterKeyT&& value) { SetParameterKey(std::forward<ParameterKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the parameter to set.</p>
     */
    inline const Aws::String& GetParameterValue() const { return m_parameterValue; }
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }
    template<typename ParameterValueT = Aws::String>
    void SetParameterValue(ParameterValueT&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::forward<ParameterValueT>(value); }
    template<typename ParameterValueT = Aws::String>
    ConfigParameter& WithParameterValue(ParameterValueT&& value) { SetParameterValue(std::forward<ParameterValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterKey;
    bool m_parameterKeyHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
