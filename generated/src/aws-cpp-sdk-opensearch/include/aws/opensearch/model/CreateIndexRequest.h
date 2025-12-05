/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace OpenSearchService {
namespace Model {

/**
 */
class CreateIndexRequest : public OpenSearchServiceRequest {
 public:
  AWS_OPENSEARCHSERVICE_API CreateIndexRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateIndex"; }

  AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  CreateIndexRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the index to create. Must be between 1 and 255 characters and
   * follow OpenSearch naming conventions.</p>
   */
  inline const Aws::String& GetIndexName() const { return m_indexName; }
  inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
  template <typename IndexNameT = Aws::String>
  void SetIndexName(IndexNameT&& value) {
    m_indexNameHasBeenSet = true;
    m_indexName = std::forward<IndexNameT>(value);
  }
  template <typename IndexNameT = Aws::String>
  CreateIndexRequest& WithIndexName(IndexNameT&& value) {
    SetIndexName(std::forward<IndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON schema defining index mappings, settings, and semantic enrichment
   * configuration. The schema specifies which text fields should be automatically
   * enriched for semantic search capabilities and includes OpenSearch index
   * configuration parameters.</p>
   */
  inline Aws::Utils::DocumentView GetIndexSchema() const { return m_indexSchema; }
  inline bool IndexSchemaHasBeenSet() const { return m_indexSchemaHasBeenSet; }
  template <typename IndexSchemaT = Aws::Utils::Document>
  void SetIndexSchema(IndexSchemaT&& value) {
    m_indexSchemaHasBeenSet = true;
    m_indexSchema = std::forward<IndexSchemaT>(value);
  }
  template <typename IndexSchemaT = Aws::Utils::Document>
  CreateIndexRequest& WithIndexSchema(IndexSchemaT&& value) {
    SetIndexSchema(std::forward<IndexSchemaT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_indexName;

  Aws::Utils::Document m_indexSchema;
  bool m_domainNameHasBeenSet = false;
  bool m_indexNameHasBeenSet = false;
  bool m_indexSchemaHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
