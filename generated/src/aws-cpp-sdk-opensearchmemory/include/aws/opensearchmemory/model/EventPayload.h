/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/BlobPayload.h>
#include <aws/opensearchmemory/model/ConversationalPayload.h>
#include <aws/opensearchmemory/model/StructuredDataPayload.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {

/**
 * <p>The event content. Exactly one member must be set.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/EventPayload">AWS
 * API Reference</a></p>
 */
class EventPayload {
 public:
  AWS_OPENSEARCHMEMORY_API EventPayload() = default;
  AWS_OPENSEARCHMEMORY_API EventPayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API EventPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Conversation turns.</p>
   */
  inline const ConversationalPayload& GetConversational() const { return m_conversational; }
  inline bool ConversationalHasBeenSet() const { return m_conversationalHasBeenSet; }
  template <typename ConversationalT = ConversationalPayload>
  void SetConversational(ConversationalT&& value) {
    m_conversationalHasBeenSet = true;
    m_conversational = std::forward<ConversationalT>(value);
  }
  template <typename ConversationalT = ConversationalPayload>
  EventPayload& WithConversational(ConversationalT&& value) {
    SetConversational(std::forward<ConversationalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Structured (non-conversational) content, for example a deployment result that
   * an agent should remember.</p>
   */
  inline const StructuredDataPayload& GetStructuredData() const { return m_structuredData; }
  inline bool StructuredDataHasBeenSet() const { return m_structuredDataHasBeenSet; }
  template <typename StructuredDataT = StructuredDataPayload>
  void SetStructuredData(StructuredDataT&& value) {
    m_structuredDataHasBeenSet = true;
    m_structuredData = std::forward<StructuredDataT>(value);
  }
  template <typename StructuredDataT = StructuredDataPayload>
  EventPayload& WithStructuredData(StructuredDataT&& value) {
    SetStructuredData(std::forward<StructuredDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A document stored in Amazon S3, such as a PDF.</p>
   */
  inline const BlobPayload& GetBlob() const { return m_blob; }
  inline bool BlobHasBeenSet() const { return m_blobHasBeenSet; }
  template <typename BlobT = BlobPayload>
  void SetBlob(BlobT&& value) {
    m_blobHasBeenSet = true;
    m_blob = std::forward<BlobT>(value);
  }
  template <typename BlobT = BlobPayload>
  EventPayload& WithBlob(BlobT&& value) {
    SetBlob(std::forward<BlobT>(value));
    return *this;
  }
  ///@}
 private:
  ConversationalPayload m_conversational;

  StructuredDataPayload m_structuredData;

  BlobPayload m_blob;
  bool m_conversationalHasBeenSet = false;
  bool m_structuredDataHasBeenSet = false;
  bool m_blobHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
