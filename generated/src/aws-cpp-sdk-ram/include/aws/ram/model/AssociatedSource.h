/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/RAM_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RAM {
namespace Model {

/**
 * <p>Information about a source association in a resource share. Source
 * associations control which sources can be used with service
 * principals.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AssociatedSource">AWS
 * API Reference</a></p>
 */
class AssociatedSource {
 public:
  AWS_RAM_API AssociatedSource() = default;
  AWS_RAM_API AssociatedSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_RAM_API AssociatedSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource share that contains the source
   * association.</p>
   */
  inline const Aws::String& GetResourceShareArn() const { return m_resourceShareArn; }
  inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
  template <typename ResourceShareArnT = Aws::String>
  void SetResourceShareArn(ResourceShareArnT&& value) {
    m_resourceShareArnHasBeenSet = true;
    m_resourceShareArn = std::forward<ResourceShareArnT>(value);
  }
  template <typename ResourceShareArnT = Aws::String>
  AssociatedSource& WithResourceShareArn(ResourceShareArnT&& value) {
    SetResourceShareArn(std::forward<ResourceShareArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the source. This can be an account ID, Amazon Resource Name
   * (ARN), organization ID, or organization path.</p>
   */
  inline const Aws::String& GetSourceId() const { return m_sourceId; }
  inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
  template <typename SourceIdT = Aws::String>
  void SetSourceId(SourceIdT&& value) {
    m_sourceIdHasBeenSet = true;
    m_sourceId = std::forward<SourceIdT>(value);
  }
  template <typename SourceIdT = Aws::String>
  AssociatedSource& WithSourceId(SourceIdT&& value) {
    SetSourceId(std::forward<SourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of source.</p>
   */
  inline const Aws::String& GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  template <typename SourceTypeT = Aws::String>
  void SetSourceType(SourceTypeT&& value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = std::forward<SourceTypeT>(value);
  }
  template <typename SourceTypeT = Aws::String>
  AssociatedSource& WithSourceType(SourceTypeT&& value) {
    SetSourceType(std::forward<SourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the source association.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  AssociatedSource& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the source association was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  AssociatedSource& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the source association was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  AssociatedSource& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message about the status of the source association.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  AssociatedSource& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceShareArn;

  Aws::String m_sourceId;

  Aws::String m_sourceType;

  Aws::String m_status;

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::Utils::DateTime m_creationTime{};

  Aws::String m_statusMessage;
  bool m_resourceShareArnHasBeenSet = false;
  bool m_sourceIdHasBeenSet = false;
  bool m_sourceTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace RAM
}  // namespace Aws
