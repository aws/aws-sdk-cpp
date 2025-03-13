/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DataSourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DataSourceStatus.h>
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
    AWS_OPENSEARCHSERVICE_API DataSourceDetails() = default;
    AWS_OPENSEARCHSERVICE_API DataSourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DataSourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of data source.</p>
     */
    inline const DataSourceType& GetDataSourceType() const { return m_dataSourceType; }
    inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }
    template<typename DataSourceTypeT = DataSourceType>
    void SetDataSourceType(DataSourceTypeT&& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = std::forward<DataSourceTypeT>(value); }
    template<typename DataSourceTypeT = DataSourceType>
    DataSourceDetails& WithDataSourceType(DataSourceTypeT&& value) { SetDataSourceType(std::forward<DataSourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataSourceDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the data source.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DataSourceDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data source.</p>
     */
    inline DataSourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataSourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataSourceDetails& WithStatus(DataSourceStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    DataSourceType m_dataSourceType;
    bool m_dataSourceTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DataSourceStatus m_status{DataSourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
