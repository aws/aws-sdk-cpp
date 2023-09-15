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
    AWS_NEPTUNEDATA_API ExecuteOpenCypherQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteOpenCypherQuery"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The openCypher query string to be executed.</p>
     */
    inline const Aws::String& GetOpenCypherQuery() const{ return m_openCypherQuery; }

    /**
     * <p>The openCypher query string to be executed.</p>
     */
    inline bool OpenCypherQueryHasBeenSet() const { return m_openCypherQueryHasBeenSet; }

    /**
     * <p>The openCypher query string to be executed.</p>
     */
    inline void SetOpenCypherQuery(const Aws::String& value) { m_openCypherQueryHasBeenSet = true; m_openCypherQuery = value; }

    /**
     * <p>The openCypher query string to be executed.</p>
     */
    inline void SetOpenCypherQuery(Aws::String&& value) { m_openCypherQueryHasBeenSet = true; m_openCypherQuery = std::move(value); }

    /**
     * <p>The openCypher query string to be executed.</p>
     */
    inline void SetOpenCypherQuery(const char* value) { m_openCypherQueryHasBeenSet = true; m_openCypherQuery.assign(value); }

    /**
     * <p>The openCypher query string to be executed.</p>
     */
    inline ExecuteOpenCypherQueryRequest& WithOpenCypherQuery(const Aws::String& value) { SetOpenCypherQuery(value); return *this;}

    /**
     * <p>The openCypher query string to be executed.</p>
     */
    inline ExecuteOpenCypherQueryRequest& WithOpenCypherQuery(Aws::String&& value) { SetOpenCypherQuery(std::move(value)); return *this;}

    /**
     * <p>The openCypher query string to be executed.</p>
     */
    inline ExecuteOpenCypherQueryRequest& WithOpenCypherQuery(const char* value) { SetOpenCypherQuery(value); return *this;}


    /**
     * <p>The openCypher query parameters for query execution. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/opencypher-parameterized-queries.html">Examples
     * of openCypher parameterized queries</a> for more information.</p>
     */
    inline const Aws::String& GetParameters() const{ return m_parameters; }

    /**
     * <p>The openCypher query parameters for query execution. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/opencypher-parameterized-queries.html">Examples
     * of openCypher parameterized queries</a> for more information.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The openCypher query parameters for query execution. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/opencypher-parameterized-queries.html">Examples
     * of openCypher parameterized queries</a> for more information.</p>
     */
    inline void SetParameters(const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The openCypher query parameters for query execution. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/opencypher-parameterized-queries.html">Examples
     * of openCypher parameterized queries</a> for more information.</p>
     */
    inline void SetParameters(Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The openCypher query parameters for query execution. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/opencypher-parameterized-queries.html">Examples
     * of openCypher parameterized queries</a> for more information.</p>
     */
    inline void SetParameters(const char* value) { m_parametersHasBeenSet = true; m_parameters.assign(value); }

    /**
     * <p>The openCypher query parameters for query execution. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/opencypher-parameterized-queries.html">Examples
     * of openCypher parameterized queries</a> for more information.</p>
     */
    inline ExecuteOpenCypherQueryRequest& WithParameters(const Aws::String& value) { SetParameters(value); return *this;}

    /**
     * <p>The openCypher query parameters for query execution. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/opencypher-parameterized-queries.html">Examples
     * of openCypher parameterized queries</a> for more information.</p>
     */
    inline ExecuteOpenCypherQueryRequest& WithParameters(Aws::String&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The openCypher query parameters for query execution. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/opencypher-parameterized-queries.html">Examples
     * of openCypher parameterized queries</a> for more information.</p>
     */
    inline ExecuteOpenCypherQueryRequest& WithParameters(const char* value) { SetParameters(value); return *this;}

  private:

    Aws::String m_openCypherQuery;
    bool m_openCypherQueryHasBeenSet = false;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
