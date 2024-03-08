/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DataSourceType.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Details about a direct-query data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DataSourceDetails">AWS
   * API Reference</a></p>
   */
  class DataSourceDetails
  {
  public:
    AWS_OPENSEARCHSERVICE_API DataSourceDetails();
    AWS_OPENSEARCHSERVICE_API DataSourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DataSourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of data source.</p>
     */
    inline const DataSourceType& GetDataSourceType() const{ return m_dataSourceType; }

    /**
     * <p>The type of data source.</p>
     */
    inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }

    /**
     * <p>The type of data source.</p>
     */
    inline void SetDataSourceType(const DataSourceType& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = value; }

    /**
     * <p>The type of data source.</p>
     */
    inline void SetDataSourceType(DataSourceType&& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = std::move(value); }

    /**
     * <p>The type of data source.</p>
     */
    inline DataSourceDetails& WithDataSourceType(const DataSourceType& value) { SetDataSourceType(value); return *this;}

    /**
     * <p>The type of data source.</p>
     */
    inline DataSourceDetails& WithDataSourceType(DataSourceType&& value) { SetDataSourceType(std::move(value)); return *this;}


    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSourceDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSourceDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSourceDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the data source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the data source.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the data source.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the data source.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the data source.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the data source.</p>
     */
    inline DataSourceDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the data source.</p>
     */
    inline DataSourceDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the data source.</p>
     */
    inline DataSourceDetails& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    DataSourceType m_dataSourceType;
    bool m_dataSourceTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
