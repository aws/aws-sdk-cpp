/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
   * <p>Data sources that are associated with an OpenSearch Application.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DataSource">AWS
   * API Reference</a></p>
   */
  class DataSource
  {
  public:
    AWS_OPENSEARCHSERVICE_API DataSource();
    AWS_OPENSEARCHSERVICE_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }
    inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = value; }
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::move(value); }
    inline void SetDataSourceArn(const char* value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn.assign(value); }
    inline DataSource& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}
    inline DataSource& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}
    inline DataSource& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed description of a data source.</p>
     */
    inline const Aws::String& GetDataSourceDescription() const{ return m_dataSourceDescription; }
    inline bool DataSourceDescriptionHasBeenSet() const { return m_dataSourceDescriptionHasBeenSet; }
    inline void SetDataSourceDescription(const Aws::String& value) { m_dataSourceDescriptionHasBeenSet = true; m_dataSourceDescription = value; }
    inline void SetDataSourceDescription(Aws::String&& value) { m_dataSourceDescriptionHasBeenSet = true; m_dataSourceDescription = std::move(value); }
    inline void SetDataSourceDescription(const char* value) { m_dataSourceDescriptionHasBeenSet = true; m_dataSourceDescription.assign(value); }
    inline DataSource& WithDataSourceDescription(const Aws::String& value) { SetDataSourceDescription(value); return *this;}
    inline DataSource& WithDataSourceDescription(Aws::String&& value) { SetDataSourceDescription(std::move(value)); return *this;}
    inline DataSource& WithDataSourceDescription(const char* value) { SetDataSourceDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceArn;
    bool m_dataSourceArnHasBeenSet = false;

    Aws::String m_dataSourceDescription;
    bool m_dataSourceDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
