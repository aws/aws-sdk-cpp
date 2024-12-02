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
  class DeleteDirectQueryDataSourceRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API DeleteDirectQueryDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDirectQueryDataSource"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A unique, user-defined label to identify the data source within your
     * OpenSearch Service environment. </p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }
    inline DeleteDirectQueryDataSourceRequest& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}
    inline DeleteDirectQueryDataSourceRequest& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}
    inline DeleteDirectQueryDataSourceRequest& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
