/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/S3TablesEncryptionConfiguration.h>

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
 * <p>Configuration for an Amazon S3 Tables catalog that OpenSearch Service creates
 * and manages for the domain.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ServiceManagedS3TablesCatalog">AWS
 * API Reference</a></p>
 */
class ServiceManagedS3TablesCatalog {
 public:
  AWS_OPENSEARCHSERVICE_API ServiceManagedS3TablesCatalog() = default;
  AWS_OPENSEARCHSERVICE_API ServiceManagedS3TablesCatalog(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API ServiceManagedS3TablesCatalog& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Encryption settings for the tables in the catalog.</p>
   */
  inline const S3TablesEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = S3TablesEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = S3TablesEncryptionConfiguration>
  ServiceManagedS3TablesCatalog& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  S3TablesEncryptionConfiguration m_encryptionConfiguration;
  bool m_encryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
