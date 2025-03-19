/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DirectQueryDataSourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{
  class GetDirectQueryDataSourceResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetDirectQueryDataSourceResult() = default;
    AWS_OPENSEARCHSERVICE_API GetDirectQueryDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API GetDirectQueryDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A unique, user-defined label to identify the data source within your
     * OpenSearch Service environment. </p>
     */
    inline const Aws::String& GetDataSourceName() const { return m_dataSourceName; }
    template<typename DataSourceNameT = Aws::String>
    void SetDataSourceName(DataSourceNameT&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::forward<DataSourceNameT>(value); }
    template<typename DataSourceNameT = Aws::String>
    GetDirectQueryDataSourceResult& WithDataSourceName(DataSourceNameT&& value) { SetDataSourceName(std::forward<DataSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The supported Amazon Web Services service that is used as the source for
     * direct queries in OpenSearch Service. </p>
     */
    inline const DirectQueryDataSourceType& GetDataSourceType() const { return m_dataSourceType; }
    template<typename DataSourceTypeT = DirectQueryDataSourceType>
    void SetDataSourceType(DataSourceTypeT&& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = std::forward<DataSourceTypeT>(value); }
    template<typename DataSourceTypeT = DirectQueryDataSourceType>
    GetDirectQueryDataSourceResult& WithDataSourceType(DataSourceTypeT&& value) { SetDataSourceType(std::forward<DataSourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description that provides additional context and details about the data
     * source. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetDirectQueryDataSourceResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of Amazon Resource Names (ARNs) for the OpenSearch collections that
     * are associated with the direct query data source. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOpenSearchArns() const { return m_openSearchArns; }
    template<typename OpenSearchArnsT = Aws::Vector<Aws::String>>
    void SetOpenSearchArns(OpenSearchArnsT&& value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns = std::forward<OpenSearchArnsT>(value); }
    template<typename OpenSearchArnsT = Aws::Vector<Aws::String>>
    GetDirectQueryDataSourceResult& WithOpenSearchArns(OpenSearchArnsT&& value) { SetOpenSearchArns(std::forward<OpenSearchArnsT>(value)); return *this;}
    template<typename OpenSearchArnsT = Aws::String>
    GetDirectQueryDataSourceResult& AddOpenSearchArns(OpenSearchArnsT&& value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns.emplace_back(std::forward<OpenSearchArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The unique, system-generated identifier that represents the data source.
     * </p>
     */
    inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
    template<typename DataSourceArnT = Aws::String>
    void SetDataSourceArn(DataSourceArnT&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::forward<DataSourceArnT>(value); }
    template<typename DataSourceArnT = Aws::String>
    GetDirectQueryDataSourceResult& WithDataSourceArn(DataSourceArnT&& value) { SetDataSourceArn(std::forward<DataSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDirectQueryDataSourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
