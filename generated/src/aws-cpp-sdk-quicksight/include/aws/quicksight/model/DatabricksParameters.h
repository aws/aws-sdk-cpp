/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The required parameters that are needed to connect to a Databricks data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DatabricksParameters">AWS
   * API Reference</a></p>
   */
  class DatabricksParameters
  {
  public:
    AWS_QUICKSIGHT_API DatabricksParameters();
    AWS_QUICKSIGHT_API DatabricksParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DatabricksParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The host name of the Databricks data source.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>The host name of the Databricks data source.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>The host name of the Databricks data source.</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>The host name of the Databricks data source.</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>The host name of the Databricks data source.</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>The host name of the Databricks data source.</p>
     */
    inline DatabricksParameters& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>The host name of the Databricks data source.</p>
     */
    inline DatabricksParameters& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>The host name of the Databricks data source.</p>
     */
    inline DatabricksParameters& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>The port for the Databricks data source.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port for the Databricks data source.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port for the Databricks data source.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port for the Databricks data source.</p>
     */
    inline DatabricksParameters& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The HTTP path of the Databricks data source.</p>
     */
    inline const Aws::String& GetSqlEndpointPath() const{ return m_sqlEndpointPath; }

    /**
     * <p>The HTTP path of the Databricks data source.</p>
     */
    inline bool SqlEndpointPathHasBeenSet() const { return m_sqlEndpointPathHasBeenSet; }

    /**
     * <p>The HTTP path of the Databricks data source.</p>
     */
    inline void SetSqlEndpointPath(const Aws::String& value) { m_sqlEndpointPathHasBeenSet = true; m_sqlEndpointPath = value; }

    /**
     * <p>The HTTP path of the Databricks data source.</p>
     */
    inline void SetSqlEndpointPath(Aws::String&& value) { m_sqlEndpointPathHasBeenSet = true; m_sqlEndpointPath = std::move(value); }

    /**
     * <p>The HTTP path of the Databricks data source.</p>
     */
    inline void SetSqlEndpointPath(const char* value) { m_sqlEndpointPathHasBeenSet = true; m_sqlEndpointPath.assign(value); }

    /**
     * <p>The HTTP path of the Databricks data source.</p>
     */
    inline DatabricksParameters& WithSqlEndpointPath(const Aws::String& value) { SetSqlEndpointPath(value); return *this;}

    /**
     * <p>The HTTP path of the Databricks data source.</p>
     */
    inline DatabricksParameters& WithSqlEndpointPath(Aws::String&& value) { SetSqlEndpointPath(std::move(value)); return *this;}

    /**
     * <p>The HTTP path of the Databricks data source.</p>
     */
    inline DatabricksParameters& WithSqlEndpointPath(const char* value) { SetSqlEndpointPath(value); return *this;}

  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_sqlEndpointPath;
    bool m_sqlEndpointPathHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
