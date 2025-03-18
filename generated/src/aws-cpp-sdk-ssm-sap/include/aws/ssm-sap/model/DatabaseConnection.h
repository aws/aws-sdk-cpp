/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/DatabaseConnectionMethod.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>The connection specifications for the database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/DatabaseConnection">AWS
   * API Reference</a></p>
   */
  class DatabaseConnection
  {
  public:
    AWS_SSMSAP_API DatabaseConnection() = default;
    AWS_SSMSAP_API DatabaseConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API DatabaseConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method of connection.</p>
     */
    inline DatabaseConnectionMethod GetDatabaseConnectionMethod() const { return m_databaseConnectionMethod; }
    inline bool DatabaseConnectionMethodHasBeenSet() const { return m_databaseConnectionMethodHasBeenSet; }
    inline void SetDatabaseConnectionMethod(DatabaseConnectionMethod value) { m_databaseConnectionMethodHasBeenSet = true; m_databaseConnectionMethod = value; }
    inline DatabaseConnection& WithDatabaseConnectionMethod(DatabaseConnectionMethod value) { SetDatabaseConnectionMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the connected SAP HANA database.</p>
     */
    inline const Aws::String& GetDatabaseArn() const { return m_databaseArn; }
    inline bool DatabaseArnHasBeenSet() const { return m_databaseArnHasBeenSet; }
    template<typename DatabaseArnT = Aws::String>
    void SetDatabaseArn(DatabaseArnT&& value) { m_databaseArnHasBeenSet = true; m_databaseArn = std::forward<DatabaseArnT>(value); }
    template<typename DatabaseArnT = Aws::String>
    DatabaseConnection& WithDatabaseArn(DatabaseArnT&& value) { SetDatabaseArn(std::forward<DatabaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address for connection.</p>
     */
    inline const Aws::String& GetConnectionIp() const { return m_connectionIp; }
    inline bool ConnectionIpHasBeenSet() const { return m_connectionIpHasBeenSet; }
    template<typename ConnectionIpT = Aws::String>
    void SetConnectionIp(ConnectionIpT&& value) { m_connectionIpHasBeenSet = true; m_connectionIp = std::forward<ConnectionIpT>(value); }
    template<typename ConnectionIpT = Aws::String>
    DatabaseConnection& WithConnectionIp(ConnectionIpT&& value) { SetConnectionIp(std::forward<ConnectionIpT>(value)); return *this;}
    ///@}
  private:

    DatabaseConnectionMethod m_databaseConnectionMethod{DatabaseConnectionMethod::NOT_SET};
    bool m_databaseConnectionMethodHasBeenSet = false;

    Aws::String m_databaseArn;
    bool m_databaseArnHasBeenSet = false;

    Aws::String m_connectionIp;
    bool m_connectionIpHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
