/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class GetDirectQueryDataSourceRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetDirectQueryDataSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDirectQueryDataSource"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A unique, user-defined label that identifies the data source within your
     * OpenSearch Service environment. </p>
     */
    inline const Aws::String& GetDataSourceName() const { return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    template<typename DataSourceNameT = Aws::String>
    void SetDataSourceName(DataSourceNameT&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::forward<DataSourceNameT>(value); }
    template<typename DataSourceNameT = Aws::String>
    GetDirectQueryDataSourceRequest& WithDataSourceName(DataSourceNameT&& value) { SetDataSourceName(std::forward<DataSourceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
