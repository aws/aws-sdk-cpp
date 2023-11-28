/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/DataSourceStatus.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A data source in an Amazon Q application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DataSource">AWS
   * API Reference</a></p>
   */
  class DataSource
  {
  public:
    AWS_QBUSINESS_API DataSource();
    AWS_QBUSINESS_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Unix timestamp when the Amazon Q data source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp when the Amazon Q data source was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix timestamp when the Amazon Q data source was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp when the Amazon Q data source was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the Amazon Q data source was created.</p>
     */
    inline DataSource& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the Amazon Q data source was created.</p>
     */
    inline DataSource& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Amazon Q data source.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The identifier of the Amazon Q data source.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q data source.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The identifier of the Amazon Q data source.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q data source.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q data source.</p>
     */
    inline DataSource& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q data source.</p>
     */
    inline DataSource& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q data source.</p>
     */
    inline DataSource& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The name of the Amazon Q data source.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the Amazon Q data source.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Q data source.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the Amazon Q data source.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the Amazon Q data source.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the Amazon Q data source.</p>
     */
    inline DataSource& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the Amazon Q data source.</p>
     */
    inline DataSource& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Q data source.</p>
     */
    inline DataSource& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The status of the Amazon Q data source.</p>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Amazon Q data source.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Amazon Q data source.</p>
     */
    inline void SetStatus(const DataSourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Amazon Q data source.</p>
     */
    inline void SetStatus(DataSourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Amazon Q data source.</p>
     */
    inline DataSource& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Amazon Q data source.</p>
     */
    inline DataSource& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the Amazon Q data source.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the Amazon Q data source.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the Amazon Q data source.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the Amazon Q data source.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the Amazon Q data source.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the Amazon Q data source.</p>
     */
    inline DataSource& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the Amazon Q data source.</p>
     */
    inline DataSource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the Amazon Q data source.</p>
     */
    inline DataSource& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The Unix timestamp when the Amazon Q data source was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix timestamp when the Amazon Q data source was last updated. </p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp when the Amazon Q data source was last updated. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The Unix timestamp when the Amazon Q data source was last updated. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the Amazon Q data source was last updated. </p>
     */
    inline DataSource& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the Amazon Q data source was last updated. </p>
     */
    inline DataSource& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    DataSourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
