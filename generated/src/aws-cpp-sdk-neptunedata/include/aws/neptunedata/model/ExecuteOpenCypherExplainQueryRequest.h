/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/OpenCypherExplainMode.h>
#include <utility>

namespace Aws
{
namespace neptunedata
{
namespace Model
{

  /**
   */
  class ExecuteOpenCypherExplainQueryRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API ExecuteOpenCypherExplainQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteOpenCypherExplainQuery"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The openCypher query string.</p>
     */
    inline const Aws::String& GetOpenCypherQuery() const { return m_openCypherQuery; }
    inline bool OpenCypherQueryHasBeenSet() const { return m_openCypherQueryHasBeenSet; }
    template<typename OpenCypherQueryT = Aws::String>
    void SetOpenCypherQuery(OpenCypherQueryT&& value) { m_openCypherQueryHasBeenSet = true; m_openCypherQuery = std::forward<OpenCypherQueryT>(value); }
    template<typename OpenCypherQueryT = Aws::String>
    ExecuteOpenCypherExplainQueryRequest& WithOpenCypherQuery(OpenCypherQueryT&& value) { SetOpenCypherQuery(std::forward<OpenCypherQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The openCypher query parameters.</p>
     */
    inline const Aws::String& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::String>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::String>
    ExecuteOpenCypherExplainQueryRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The openCypher <code>explain</code> mode. Can be one of: <code>static</code>,
     * <code>dynamic</code>, or <code>details</code>.</p>
     */
    inline OpenCypherExplainMode GetExplainMode() const { return m_explainMode; }
    inline bool ExplainModeHasBeenSet() const { return m_explainModeHasBeenSet; }
    inline void SetExplainMode(OpenCypherExplainMode value) { m_explainModeHasBeenSet = true; m_explainMode = value; }
    inline ExecuteOpenCypherExplainQueryRequest& WithExplainMode(OpenCypherExplainMode value) { SetExplainMode(value); return *this;}
    ///@}
  private:

    Aws::String m_openCypherQuery;
    bool m_openCypherQueryHasBeenSet = false;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet = false;

    OpenCypherExplainMode m_explainMode{OpenCypherExplainMode::NOT_SET};
    bool m_explainModeHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
