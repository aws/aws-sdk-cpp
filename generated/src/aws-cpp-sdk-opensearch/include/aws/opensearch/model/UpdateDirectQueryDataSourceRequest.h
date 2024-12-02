/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DirectQueryDataSourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class UpdateDirectQueryDataSourceRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdateDirectQueryDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDirectQueryDataSource"; }

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
    inline UpdateDirectQueryDataSourceRequest& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}
    inline UpdateDirectQueryDataSourceRequest& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}
    inline UpdateDirectQueryDataSourceRequest& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The supported Amazon Web Services service that you want to use as the source
     * for direct queries in OpenSearch Service. </p>
     */
    inline const DirectQueryDataSourceType& GetDataSourceType() const{ return m_dataSourceType; }
    inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }
    inline void SetDataSourceType(const DirectQueryDataSourceType& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = value; }
    inline void SetDataSourceType(DirectQueryDataSourceType&& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = std::move(value); }
    inline UpdateDirectQueryDataSourceRequest& WithDataSourceType(const DirectQueryDataSourceType& value) { SetDataSourceType(value); return *this;}
    inline UpdateDirectQueryDataSourceRequest& WithDataSourceType(DirectQueryDataSourceType&& value) { SetDataSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional text field for providing additional context and details about
     * the data source. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateDirectQueryDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateDirectQueryDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateDirectQueryDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of Amazon Resource Names (ARNs) for the OpenSearch collections that
     * are associated with the direct query data source. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOpenSearchArns() const{ return m_openSearchArns; }
    inline bool OpenSearchArnsHasBeenSet() const { return m_openSearchArnsHasBeenSet; }
    inline void SetOpenSearchArns(const Aws::Vector<Aws::String>& value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns = value; }
    inline void SetOpenSearchArns(Aws::Vector<Aws::String>&& value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns = std::move(value); }
    inline UpdateDirectQueryDataSourceRequest& WithOpenSearchArns(const Aws::Vector<Aws::String>& value) { SetOpenSearchArns(value); return *this;}
    inline UpdateDirectQueryDataSourceRequest& WithOpenSearchArns(Aws::Vector<Aws::String>&& value) { SetOpenSearchArns(std::move(value)); return *this;}
    inline UpdateDirectQueryDataSourceRequest& AddOpenSearchArns(const Aws::String& value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns.push_back(value); return *this; }
    inline UpdateDirectQueryDataSourceRequest& AddOpenSearchArns(Aws::String&& value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns.push_back(std::move(value)); return *this; }
    inline UpdateDirectQueryDataSourceRequest& AddOpenSearchArns(const char* value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns.push_back(value); return *this; }
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
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
