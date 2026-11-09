/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

/**
 */
class GetIngestionJobRequest : public OpenSearchServerlessRequest {
 public:
  AWS_OPENSEARCHSERVERLESS_API GetIngestionJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetIngestionJob"; }

  AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the collection that the ingestion job belongs
   * to.</p>
   */
  inline const Aws::String& GetCollectionId() const { return m_collectionId; }
  inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }
  template <typename CollectionIdT = Aws::String>
  void SetCollectionId(CollectionIdT&& value) {
    m_collectionIdHasBeenSet = true;
    m_collectionId = std::forward<CollectionIdT>(value);
  }
  template <typename CollectionIdT = Aws::String>
  GetIngestionJobRequest& WithCollectionId(CollectionIdT&& value) {
    SetCollectionId(std::forward<CollectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the ingestion job to retrieve.</p>
   */
  inline const Aws::String& GetIngestionJobId() const { return m_ingestionJobId; }
  inline bool IngestionJobIdHasBeenSet() const { return m_ingestionJobIdHasBeenSet; }
  template <typename IngestionJobIdT = Aws::String>
  void SetIngestionJobId(IngestionJobIdT&& value) {
    m_ingestionJobIdHasBeenSet = true;
    m_ingestionJobId = std::forward<IngestionJobIdT>(value);
  }
  template <typename IngestionJobIdT = Aws::String>
  GetIngestionJobRequest& WithIngestionJobId(IngestionJobIdT&& value) {
    SetIngestionJobId(std::forward<IngestionJobIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_collectionId;

  Aws::String m_ingestionJobId;
  bool m_collectionIdHasBeenSet = false;
  bool m_ingestionJobIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
