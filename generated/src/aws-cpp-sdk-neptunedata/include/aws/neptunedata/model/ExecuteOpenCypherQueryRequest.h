/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace neptunedata
{
namespace Model
{

  /**
   */
  class ExecuteOpenCypherQueryRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API ExecuteOpenCypherQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteOpenCypherQuery"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The openCypher query string to be executed.</p>
     */
    inline const Aws::String& GetOpenCypherQuery() const { return m_openCypherQuery; }
    inline bool OpenCypherQueryHasBeenSet() const { return m_openCypherQueryHasBeenSet; }
    template<typename OpenCypherQueryT = Aws::String>
    void SetOpenCypherQuery(OpenCypherQueryT&& value) { m_openCypherQueryHasBeenSet = true; m_openCypherQuery = std::forward<OpenCypherQueryT>(value); }
    template<typename OpenCypherQueryT = Aws::String>
    ExecuteOpenCypherQueryRequest& WithOpenCypherQuery(OpenCypherQueryT&& value) { SetOpenCypherQuery(std::forward<OpenCypherQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The openCypher query parameters for query execution. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/opencypher-parameterized-queries.html">Examples
     * of openCypher parameterized queries</a> for more information.</p>
     */
    inline const Aws::String& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::String>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::String>
    ExecuteOpenCypherQueryRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_openCypherQuery;
    bool m_openCypherQueryHasBeenSet = false;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
