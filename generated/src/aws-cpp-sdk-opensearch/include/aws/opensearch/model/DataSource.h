/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>Data sources that are associated with an OpenSearch application.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DataSource">AWS
 * API Reference</a></p>
 */
class DataSource {
 public:
  AWS_OPENSEARCHSERVICE_API DataSource() = default;
  AWS_OPENSEARCHSERVICE_API DataSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
  inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
  template <typename DataSourceArnT = Aws::String>
  void SetDataSourceArn(DataSourceArnT&& value) {
    m_dataSourceArnHasBeenSet = true;
    m_dataSourceArn = std::forward<DataSourceArnT>(value);
  }
  template <typename DataSourceArnT = Aws::String>
  DataSource& WithDataSourceArn(DataSourceArnT&& value) {
    SetDataSourceArn(std::forward<DataSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed description of a data source.</p>
   */
  inline const Aws::String& GetDataSourceDescription() const { return m_dataSourceDescription; }
  inline bool DataSourceDescriptionHasBeenSet() const { return m_dataSourceDescriptionHasBeenSet; }
  template <typename DataSourceDescriptionT = Aws::String>
  void SetDataSourceDescription(DataSourceDescriptionT&& value) {
    m_dataSourceDescriptionHasBeenSet = true;
    m_dataSourceDescription = std::forward<DataSourceDescriptionT>(value);
  }
  template <typename DataSourceDescriptionT = Aws::String>
  DataSource& WithDataSourceDescription(DataSourceDescriptionT&& value) {
    SetDataSourceDescription(std::forward<DataSourceDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role to be used for cross account/region data source
   * association.</p>
   */
  inline const Aws::String& GetIamRoleForDataSourceArn() const { return m_iamRoleForDataSourceArn; }
  inline bool IamRoleForDataSourceArnHasBeenSet() const { return m_iamRoleForDataSourceArnHasBeenSet; }
  template <typename IamRoleForDataSourceArnT = Aws::String>
  void SetIamRoleForDataSourceArn(IamRoleForDataSourceArnT&& value) {
    m_iamRoleForDataSourceArnHasBeenSet = true;
    m_iamRoleForDataSourceArn = std::forward<IamRoleForDataSourceArnT>(value);
  }
  template <typename IamRoleForDataSourceArnT = Aws::String>
  DataSource& WithIamRoleForDataSourceArn(IamRoleForDataSourceArnT&& value) {
    SetIamRoleForDataSourceArn(std::forward<IamRoleForDataSourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataSourceArn;

  Aws::String m_dataSourceDescription;

  Aws::String m_iamRoleForDataSourceArn;
  bool m_dataSourceArnHasBeenSet = false;
  bool m_dataSourceDescriptionHasBeenSet = false;
  bool m_iamRoleForDataSourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
