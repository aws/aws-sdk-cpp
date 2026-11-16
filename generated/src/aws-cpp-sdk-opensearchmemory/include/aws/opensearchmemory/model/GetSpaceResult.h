/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/EncryptionConfiguration.h>
#include <aws/opensearchmemory/model/MemoryStrategy.h>
#include <aws/opensearchmemory/model/SpaceStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {
class GetSpaceResult {
 public:
  AWS_OPENSEARCHMEMORY_API GetSpaceResult() = default;
  AWS_OPENSEARCHMEMORY_API GetSpaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHMEMORY_API GetSpaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the space.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  GetSpaceResult& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the space.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetSpaceResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the space.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetSpaceResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the space.</p>
   */
  inline SpaceStatus GetStatus() const { return m_status; }
  inline void SetStatus(SpaceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetSpaceResult& WithStatus(SpaceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about why the space is <code>FAILED</code>. Read it only when
   * <code>status</code> is <code>FAILED</code>: it can still hold the reason for an
   * earlier failure.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  GetSpaceResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the space was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetSpaceResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The space's memory strategies, including the names the service generated for
   * strategies created without one. Empty for a space that has no memory
   * strategies.</p>
   */
  inline const Aws::Vector<MemoryStrategy>& GetMemoryStrategies() const { return m_memoryStrategies; }
  template <typename MemoryStrategiesT = Aws::Vector<MemoryStrategy>>
  void SetMemoryStrategies(MemoryStrategiesT&& value) {
    m_memoryStrategiesHasBeenSet = true;
    m_memoryStrategies = std::forward<MemoryStrategiesT>(value);
  }
  template <typename MemoryStrategiesT = Aws::Vector<MemoryStrategy>>
  GetSpaceResult& WithMemoryStrategies(MemoryStrategiesT&& value) {
    SetMemoryStrategies(std::forward<MemoryStrategiesT>(value));
    return *this;
  }
  template <typename MemoryStrategiesT = MemoryStrategy>
  GetSpaceResult& AddMemoryStrategies(MemoryStrategiesT&& value) {
    m_memoryStrategiesHasBeenSet = true;
    m_memoryStrategies.emplace_back(std::forward<MemoryStrategiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How many days the space keeps each event. Absent when it was never set, in
   * which case the default of 90 days applies.</p>
   */
  inline int GetEventExpiryDays() const { return m_eventExpiryDays; }
  inline void SetEventExpiryDays(int value) {
    m_eventExpiryDaysHasBeenSet = true;
    m_eventExpiryDays = value;
  }
  inline GetSpaceResult& WithEventExpiryDays(int value) {
    SetEventExpiryDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How many days the space keeps each memory. 0 means memories never expire.
   * Absent when it was never set, in which case memories never expire.</p>
   */
  inline int GetMemoryExpiryDays() const { return m_memoryExpiryDays; }
  inline void SetMemoryExpiryDays(int value) {
    m_memoryExpiryDaysHasBeenSet = true;
    m_memoryExpiryDays = value;
  }
  inline GetSpaceResult& WithMemoryExpiryDays(int value) {
    SetMemoryExpiryDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model that extracts and consolidates memories for the space. Absent when
   * it was never set, in which case the service default applies.</p>
   */
  inline const Aws::String& GetExtractionModelId() const { return m_extractionModelId; }
  template <typename ExtractionModelIdT = Aws::String>
  void SetExtractionModelId(ExtractionModelIdT&& value) {
    m_extractionModelIdHasBeenSet = true;
    m_extractionModelId = std::forward<ExtractionModelIdT>(value);
  }
  template <typename ExtractionModelIdT = Aws::String>
  GetSpaceResult& WithExtractionModelId(ExtractionModelIdT&& value) {
    SetExtractionModelId(std::forward<ExtractionModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS KMS key the space was created with. Absent when the space uses an AWS
   * owned key.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  GetSpaceResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetSpaceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_spaceId;

  Aws::String m_arn;

  Aws::String m_name;

  SpaceStatus m_status{SpaceStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Vector<MemoryStrategy> m_memoryStrategies;

  int m_eventExpiryDays{0};

  int m_memoryExpiryDays{0};

  Aws::String m_extractionModelId;

  EncryptionConfiguration m_encryptionConfiguration;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_spaceIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_memoryStrategiesHasBeenSet = false;
  bool m_eventExpiryDaysHasBeenSet = false;
  bool m_memoryExpiryDaysHasBeenSet = false;
  bool m_extractionModelIdHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
