/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchmemory/OpenSearchMemoryRequest.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/EncryptionConfiguration.h>
#include <aws/opensearchmemory/model/MemoryStrategy.h>
#include <aws/opensearchmemory/model/Tag.h>

#include <utility>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

/**
 */
class CreateSpaceRequest : public OpenSearchMemoryRequest {
 public:
  AWS_OPENSEARCHMEMORY_API CreateSpaceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSpace"; }

  AWS_OPENSEARCHMEMORY_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHMEMORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A name for the space, unique within your account in the Region. If another
   * space already has the name, the request fails with
   * <code>ConflictException</code>.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateSpaceRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The memory strategies that extract memories from the space's events: up to 10
   * strategies, each with a name that is unique within the space.</p> <p>Optional.
   * Omit it, or send an empty list, to create a space with no memory strategies.
   * Such a space stores the conversation events you send it and returns them through
   * <code>SearchEvents</code> and <code>ListEvents</code>, but extracts no memories
   * and has none to search. You can add strategies later with
   * <code>UpdateSpace</code>.</p> <p>The serialized list can be at most 384 KiB.</p>
   */
  inline const Aws::Vector<MemoryStrategy>& GetMemoryStrategies() const { return m_memoryStrategies; }
  inline bool MemoryStrategiesHasBeenSet() const { return m_memoryStrategiesHasBeenSet; }
  template <typename MemoryStrategiesT = Aws::Vector<MemoryStrategy>>
  void SetMemoryStrategies(MemoryStrategiesT&& value) {
    m_memoryStrategiesHasBeenSet = true;
    m_memoryStrategies = std::forward<MemoryStrategiesT>(value);
  }
  template <typename MemoryStrategiesT = Aws::Vector<MemoryStrategy>>
  CreateSpaceRequest& WithMemoryStrategies(MemoryStrategiesT&& value) {
    SetMemoryStrategies(std::forward<MemoryStrategiesT>(value));
    return *this;
  }
  template <typename MemoryStrategiesT = MemoryStrategy>
  CreateSpaceRequest& AddMemoryStrategies(MemoryStrategiesT&& value) {
    m_memoryStrategiesHasBeenSet = true;
    m_memoryStrategies.emplace_back(std::forward<MemoryStrategiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How many days the space keeps each event, from 1 to 365. The default is
   * 90.</p>
   */
  inline int GetEventExpiryDays() const { return m_eventExpiryDays; }
  inline bool EventExpiryDaysHasBeenSet() const { return m_eventExpiryDaysHasBeenSet; }
  inline void SetEventExpiryDays(int value) {
    m_eventExpiryDaysHasBeenSet = true;
    m_eventExpiryDays = value;
  }
  inline CreateSpaceRequest& WithEventExpiryDays(int value) {
    SetEventExpiryDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How many days the space keeps each memory, from 0 to 3650, counted from when
   * the service writes the memory. Updating a memory with <code>UpdateMemory</code>
   * doesn't restart the count. 0 means memories never expire. If you omit it,
   * memories never expire.</p> <p>Searches and lists leave out a memory past its
   * expiry, and reading, updating, or deleting it returns
   * <code>ResourceNotFoundException</code>.</p>
   */
  inline int GetMemoryExpiryDays() const { return m_memoryExpiryDays; }
  inline bool MemoryExpiryDaysHasBeenSet() const { return m_memoryExpiryDaysHasBeenSet; }
  inline void SetMemoryExpiryDays(int value) {
    m_memoryExpiryDaysHasBeenSet = true;
    m_memoryExpiryDays = value;
  }
  inline CreateSpaceRequest& WithMemoryExpiryDays(int value) {
    SetMemoryExpiryDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model that extracts and consolidates memories for every strategy in the
   * space, as an Amazon Bedrock model ID without an inference-profile prefix:
   * <code>anthropic.claude-opus-5-5</code> or
   * <code>anthropic.claude-haiku-5-5</code>. Another value fails with
   * <code>ValidationException</code>, and the message lists the supported IDs. Omit
   * it to use the service default, which can change over time and isn't returned by
   * <code>GetSpace</code>. Setting a value pins the model.</p>
   */
  inline const Aws::String& GetExtractionModelId() const { return m_extractionModelId; }
  inline bool ExtractionModelIdHasBeenSet() const { return m_extractionModelIdHasBeenSet; }
  template <typename ExtractionModelIdT = Aws::String>
  void SetExtractionModelId(ExtractionModelIdT&& value) {
    m_extractionModelIdHasBeenSet = true;
    m_extractionModelId = std::forward<ExtractionModelIdT>(value);
  }
  template <typename ExtractionModelIdT = Aws::String>
  CreateSpaceRequest& WithExtractionModelId(ExtractionModelIdT&& value) {
    SetExtractionModelId(std::forward<ExtractionModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS KMS key that encrypts the space's data. Omit it, or omit its
   * <code>kmsKeyArn</code>, to use an AWS owned key. You can't change the key after
   * you create the space.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  CreateSpaceRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to add to the space.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateSpaceRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateSpaceRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that makes the request idempotent. A
   * retry with the same token and the same parameters within 2 hours returns the
   * space that the first request created, instead of creating another. Reusing the
   * token with different parameters, or while the first request is still in
   * progress, fails with <code>ConflictException</code>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateSpaceRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<MemoryStrategy> m_memoryStrategies;

  int m_eventExpiryDays{0};

  int m_memoryExpiryDays{0};

  Aws::String m_extractionModelId;

  EncryptionConfiguration m_encryptionConfiguration;

  Aws::Vector<Tag> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_memoryStrategiesHasBeenSet = false;
  bool m_eventExpiryDaysHasBeenSet = false;
  bool m_memoryExpiryDaysHasBeenSet = false;
  bool m_extractionModelIdHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
