/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ServiceManagedS3TablesCatalog.h>

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
 * <p>The catalog that a domain publishes to. Specify exactly one catalog
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CatalogConfiguration">AWS
 * API Reference</a></p>
 */
class CatalogConfiguration {
 public:
  AWS_OPENSEARCHSERVICE_API CatalogConfiguration() = default;
  AWS_OPENSEARCHSERVICE_API CatalogConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API CatalogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An Amazon S3 Tables catalog that OpenSearch Service creates and manages for
   * the domain.</p>
   */
  inline const ServiceManagedS3TablesCatalog& GetServiceManagedS3Tables() const { return m_serviceManagedS3Tables; }
  inline bool ServiceManagedS3TablesHasBeenSet() const { return m_serviceManagedS3TablesHasBeenSet; }
  template <typename ServiceManagedS3TablesT = ServiceManagedS3TablesCatalog>
  void SetServiceManagedS3Tables(ServiceManagedS3TablesT&& value) {
    m_serviceManagedS3TablesHasBeenSet = true;
    m_serviceManagedS3Tables = std::forward<ServiceManagedS3TablesT>(value);
  }
  template <typename ServiceManagedS3TablesT = ServiceManagedS3TablesCatalog>
  CatalogConfiguration& WithServiceManagedS3Tables(ServiceManagedS3TablesT&& value) {
    SetServiceManagedS3Tables(std::forward<ServiceManagedS3TablesT>(value));
    return *this;
  }
  ///@}
 private:
  ServiceManagedS3TablesCatalog m_serviceManagedS3Tables;
  bool m_serviceManagedS3TablesHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
