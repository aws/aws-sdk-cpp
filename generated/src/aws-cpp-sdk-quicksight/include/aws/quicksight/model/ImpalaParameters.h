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
   * <p>The parameters that are required to connect to a Impala data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ImpalaParameters">AWS
   * API Reference</a></p>
   */
  class ImpalaParameters
  {
  public:
    AWS_QUICKSIGHT_API ImpalaParameters() = default;
    AWS_QUICKSIGHT_API ImpalaParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ImpalaParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The host name of the Impala data source.</p>
     */
    inline const Aws::String& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = Aws::String>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = Aws::String>
    ImpalaParameters& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port of the Impala data source.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ImpalaParameters& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database of the Impala data source.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    ImpalaParameters& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP path of the Impala data source.</p>
     */
    inline const Aws::String& GetSqlEndpointPath() const { return m_sqlEndpointPath; }
    inline bool SqlEndpointPathHasBeenSet() const { return m_sqlEndpointPathHasBeenSet; }
    template<typename SqlEndpointPathT = Aws::String>
    void SetSqlEndpointPath(SqlEndpointPathT&& value) { m_sqlEndpointPathHasBeenSet = true; m_sqlEndpointPath = std::forward<SqlEndpointPathT>(value); }
    template<typename SqlEndpointPathT = Aws::String>
    ImpalaParameters& WithSqlEndpointPath(SqlEndpointPathT&& value) { SetSqlEndpointPath(std::forward<SqlEndpointPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_sqlEndpointPath;
    bool m_sqlEndpointPathHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
