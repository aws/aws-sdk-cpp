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
 * <p>The source configuration for a migration, specifying the data source from
 * which to export saved objects.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/MigrationSource">AWS
 * API Reference</a></p>
 */
class MigrationSource {
 public:
  AWS_OPENSEARCHSERVICE_API MigrationSource() = default;
  AWS_OPENSEARCHSERVICE_API MigrationSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API MigrationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the data source to migrate saved objects
   * from.</p>
   */
  inline const Aws::String& GetDatasourceArn() const { return m_datasourceArn; }
  inline bool DatasourceArnHasBeenSet() const { return m_datasourceArnHasBeenSet; }
  template <typename DatasourceArnT = Aws::String>
  void SetDatasourceArn(DatasourceArnT&& value) {
    m_datasourceArnHasBeenSet = true;
    m_datasourceArn = std::forward<DatasourceArnT>(value);
  }
  template <typename DatasourceArnT = Aws::String>
  MigrationSource& WithDatasourceArn(DatasourceArnT&& value) {
    SetDatasourceArn(std::forward<DatasourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasourceArn;
  bool m_datasourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
