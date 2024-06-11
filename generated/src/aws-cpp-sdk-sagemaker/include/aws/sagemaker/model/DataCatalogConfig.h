/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The meta data of the Glue table which serves as data catalog for the
   * <code>OfflineStore</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DataCatalogConfig">AWS
   * API Reference</a></p>
   */
  class DataCatalogConfig
  {
  public:
    AWS_SAGEMAKER_API DataCatalogConfig();
    AWS_SAGEMAKER_API DataCatalogConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DataCatalogConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Glue table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline DataCatalogConfig& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline DataCatalogConfig& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline DataCatalogConfig& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Glue table catalog.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline DataCatalogConfig& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline DataCatalogConfig& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline DataCatalogConfig& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Glue table database.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline DataCatalogConfig& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline DataCatalogConfig& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline DataCatalogConfig& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
