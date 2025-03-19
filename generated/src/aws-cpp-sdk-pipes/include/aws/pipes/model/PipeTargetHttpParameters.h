/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>These are custom parameter to be used when the target is an API Gateway REST
   * APIs or EventBridge ApiDestinations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetHttpParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetHttpParameters
  {
  public:
    AWS_PIPES_API PipeTargetHttpParameters() = default;
    AWS_PIPES_API PipeTargetHttpParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetHttpParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path parameter values to be used to populate API Gateway REST API or
     * EventBridge ApiDestination path wildcards ("*").</p>
     */
    inline const Aws::Vector<Aws::String>& GetPathParameterValues() const { return m_pathParameterValues; }
    inline bool PathParameterValuesHasBeenSet() const { return m_pathParameterValuesHasBeenSet; }
    template<typename PathParameterValuesT = Aws::Vector<Aws::String>>
    void SetPathParameterValues(PathParameterValuesT&& value) { m_pathParameterValuesHasBeenSet = true; m_pathParameterValues = std::forward<PathParameterValuesT>(value); }
    template<typename PathParameterValuesT = Aws::Vector<Aws::String>>
    PipeTargetHttpParameters& WithPathParameterValues(PathParameterValuesT&& value) { SetPathParameterValues(std::forward<PathParameterValuesT>(value)); return *this;}
    template<typename PathParameterValuesT = Aws::String>
    PipeTargetHttpParameters& AddPathParameterValues(PathParameterValuesT&& value) { m_pathParameterValuesHasBeenSet = true; m_pathParameterValues.emplace_back(std::forward<PathParameterValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeaderParameters() const { return m_headerParameters; }
    inline bool HeaderParametersHasBeenSet() const { return m_headerParametersHasBeenSet; }
    template<typename HeaderParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHeaderParameters(HeaderParametersT&& value) { m_headerParametersHasBeenSet = true; m_headerParameters = std::forward<HeaderParametersT>(value); }
    template<typename HeaderParametersT = Aws::Map<Aws::String, Aws::String>>
    PipeTargetHttpParameters& WithHeaderParameters(HeaderParametersT&& value) { SetHeaderParameters(std::forward<HeaderParametersT>(value)); return *this;}
    template<typename HeaderParametersKeyT = Aws::String, typename HeaderParametersValueT = Aws::String>
    PipeTargetHttpParameters& AddHeaderParameters(HeaderParametersKeyT&& key, HeaderParametersValueT&& value) {
      m_headerParametersHasBeenSet = true; m_headerParameters.emplace(std::forward<HeaderParametersKeyT>(key), std::forward<HeaderParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryStringParameters() const { return m_queryStringParameters; }
    inline bool QueryStringParametersHasBeenSet() const { return m_queryStringParametersHasBeenSet; }
    template<typename QueryStringParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetQueryStringParameters(QueryStringParametersT&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = std::forward<QueryStringParametersT>(value); }
    template<typename QueryStringParametersT = Aws::Map<Aws::String, Aws::String>>
    PipeTargetHttpParameters& WithQueryStringParameters(QueryStringParametersT&& value) { SetQueryStringParameters(std::forward<QueryStringParametersT>(value)); return *this;}
    template<typename QueryStringParametersKeyT = Aws::String, typename QueryStringParametersValueT = Aws::String>
    PipeTargetHttpParameters& AddQueryStringParameters(QueryStringParametersKeyT&& key, QueryStringParametersValueT&& value) {
      m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::forward<QueryStringParametersKeyT>(key), std::forward<QueryStringParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Aws::String> m_pathParameterValues;
    bool m_pathParameterValuesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_headerParameters;
    bool m_headerParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_queryStringParameters;
    bool m_queryStringParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
