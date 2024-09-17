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
    AWS_SSMSAP_API DatabaseConnection();
    AWS_SSMSAP_API DatabaseConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API DatabaseConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method of connection.</p>
     */
    inline const DatabaseConnectionMethod& GetDatabaseConnectionMethod() const{ return m_databaseConnectionMethod; }
    inline bool DatabaseConnectionMethodHasBeenSet() const { return m_databaseConnectionMethodHasBeenSet; }
    inline void SetDatabaseConnectionMethod(const DatabaseConnectionMethod& value) { m_databaseConnectionMethodHasBeenSet = true; m_databaseConnectionMethod = value; }
    inline void SetDatabaseConnectionMethod(DatabaseConnectionMethod&& value) { m_databaseConnectionMethodHasBeenSet = true; m_databaseConnectionMethod = std::move(value); }
    inline DatabaseConnection& WithDatabaseConnectionMethod(const DatabaseConnectionMethod& value) { SetDatabaseConnectionMethod(value); return *this;}
    inline DatabaseConnection& WithDatabaseConnectionMethod(DatabaseConnectionMethod&& value) { SetDatabaseConnectionMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the connected SAP HANA database.</p>
     */
    inline const Aws::String& GetDatabaseArn() const{ return m_databaseArn; }
    inline bool DatabaseArnHasBeenSet() const { return m_databaseArnHasBeenSet; }
    inline void SetDatabaseArn(const Aws::String& value) { m_databaseArnHasBeenSet = true; m_databaseArn = value; }
    inline void SetDatabaseArn(Aws::String&& value) { m_databaseArnHasBeenSet = true; m_databaseArn = std::move(value); }
    inline void SetDatabaseArn(const char* value) { m_databaseArnHasBeenSet = true; m_databaseArn.assign(value); }
    inline DatabaseConnection& WithDatabaseArn(const Aws::String& value) { SetDatabaseArn(value); return *this;}
    inline DatabaseConnection& WithDatabaseArn(Aws::String&& value) { SetDatabaseArn(std::move(value)); return *this;}
    inline DatabaseConnection& WithDatabaseArn(const char* value) { SetDatabaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address for connection.</p>
     */
    inline const Aws::String& GetConnectionIp() const{ return m_connectionIp; }
    inline bool ConnectionIpHasBeenSet() const { return m_connectionIpHasBeenSet; }
    inline void SetConnectionIp(const Aws::String& value) { m_connectionIpHasBeenSet = true; m_connectionIp = value; }
    inline void SetConnectionIp(Aws::String&& value) { m_connectionIpHasBeenSet = true; m_connectionIp = std::move(value); }
    inline void SetConnectionIp(const char* value) { m_connectionIpHasBeenSet = true; m_connectionIp.assign(value); }
    inline DatabaseConnection& WithConnectionIp(const Aws::String& value) { SetConnectionIp(value); return *this;}
    inline DatabaseConnection& WithConnectionIp(Aws::String&& value) { SetConnectionIp(std::move(value)); return *this;}
    inline DatabaseConnection& WithConnectionIp(const char* value) { SetConnectionIp(value); return *this;}
    ///@}
  private:

    DatabaseConnectionMethod m_databaseConnectionMethod;
    bool m_databaseConnectionMethodHasBeenSet = false;

    Aws::String m_databaseArn;
    bool m_databaseArnHasBeenSet = false;

    Aws::String m_connectionIp;
    bool m_connectionIpHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
