/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DirectQueryDataSourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/Tag.h>
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
   * <p> The configuration details for a data source that can be directly queried.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DirectQueryDataSource">AWS
   * API Reference</a></p>
   */
  class DirectQueryDataSource
  {
  public:
    AWS_OPENSEARCHSERVICE_API DirectQueryDataSource() = default;
    AWS_OPENSEARCHSERVICE_API DirectQueryDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DirectQueryDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique, user-defined label to identify the data source within your
     * OpenSearch Service environment. </p>
     */
    inline const Aws::String& GetDataSourceName() const { return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    template<typename DataSourceNameT = Aws::String>
    void SetDataSourceName(DataSourceNameT&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::forward<DataSourceNameT>(value); }
    template<typename DataSourceNameT = Aws::String>
    DirectQueryDataSource& WithDataSourceName(DataSourceNameT&& value) { SetDataSourceName(std::forward<DataSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The supported Amazon Web Services service that is used as the source for
     * direct queries in OpenSearch Service. </p>
     */
    inline const DirectQueryDataSourceType& GetDataSourceType() const { return m_dataSourceType; }
    inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }
    template<typename DataSourceTypeT = DirectQueryDataSourceType>
    void SetDataSourceType(DataSourceTypeT&& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = std::forward<DataSourceTypeT>(value); }
    template<typename DataSourceTypeT = DirectQueryDataSourceType>
    DirectQueryDataSource& WithDataSourceType(DataSourceTypeT&& value) { SetDataSourceType(std::forward<DataSourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description that provides additional context and details about the data
     * source.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DirectQueryDataSource& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of Amazon Resource Names (ARNs) for the OpenSearch collections that
     * are associated with the direct query data source. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOpenSearchArns() const { return m_openSearchArns; }
    inline bool OpenSearchArnsHasBeenSet() const { return m_openSearchArnsHasBeenSet; }
    template<typename OpenSearchArnsT = Aws::Vector<Aws::String>>
    void SetOpenSearchArns(OpenSearchArnsT&& value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns = std::forward<OpenSearchArnsT>(value); }
    template<typename OpenSearchArnsT = Aws::Vector<Aws::String>>
    DirectQueryDataSource& WithOpenSearchArns(OpenSearchArnsT&& value) { SetOpenSearchArns(std::forward<OpenSearchArnsT>(value)); return *this;}
    template<typename OpenSearchArnsT = Aws::String>
    DirectQueryDataSource& AddOpenSearchArns(OpenSearchArnsT&& value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns.emplace_back(std::forward<OpenSearchArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The unique, system-generated identifier that represents the data source.</p>
     */
    inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
    inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
    template<typename DataSourceArnT = Aws::String>
    void SetDataSourceArn(DataSourceArnT&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::forward<DataSourceArnT>(value); }
    template<typename DataSourceArnT = Aws::String>
    DirectQueryDataSource& WithDataSourceArn(DataSourceArnT&& value) { SetDataSourceArn(std::forward<DataSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of tags attached to a direct query data source.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    DirectQueryDataSource& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    DirectQueryDataSource& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet = false;

    DirectQueryDataSourceType m_dataSourceType;
    bool m_dataSourceTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_openSearchArns;
    bool m_openSearchArnsHasBeenSet = false;

    Aws::String m_dataSourceArn;
    bool m_dataSourceArnHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
