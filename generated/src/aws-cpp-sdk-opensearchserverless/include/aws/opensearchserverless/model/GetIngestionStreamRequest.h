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
class GetIngestionStreamRequest : public OpenSearchServerlessRequest {
 public:
  AWS_OPENSEARCHSERVERLESS_API GetIngestionStreamRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetIngestionStream"; }

  AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the collection that the ingestion stream belongs
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
  GetIngestionStreamRequest& WithCollectionId(CollectionIdT&& value) {
    SetCollectionId(std::forward<CollectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the ingestion stream to retrieve.</p>
   */
  inline const Aws::String& GetIngestionStreamId() const { return m_ingestionStreamId; }
  inline bool IngestionStreamIdHasBeenSet() const { return m_ingestionStreamIdHasBeenSet; }
  template <typename IngestionStreamIdT = Aws::String>
  void SetIngestionStreamId(IngestionStreamIdT&& value) {
    m_ingestionStreamIdHasBeenSet = true;
    m_ingestionStreamId = std::forward<IngestionStreamIdT>(value);
  }
  template <typename IngestionStreamIdT = Aws::String>
  GetIngestionStreamRequest& WithIngestionStreamId(IngestionStreamIdT&& value) {
    SetIngestionStreamId(std::forward<IngestionStreamIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_collectionId;

  Aws::String m_ingestionStreamId;
  bool m_collectionIdHasBeenSet = false;
  bool m_ingestionStreamIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
