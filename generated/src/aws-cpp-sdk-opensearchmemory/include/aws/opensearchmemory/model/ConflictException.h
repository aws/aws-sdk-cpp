/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

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
 * <p>The request conflicts with the current state of the resource. For example,
 * the space is being created, updated, or deleted, a space with the same name
 * already exists, or you reused a client token with different parameters. Wait for
 * the space to finish being created, updated, or deleted, or use a different name
 * or client token, and then retry.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/ConflictException">AWS
 * API Reference</a></p>
 */
class ConflictException {
 public:
  AWS_OPENSEARCHMEMORY_API ConflictException() = default;
  AWS_OPENSEARCHMEMORY_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A message that describes the conflict.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ConflictException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the resource that caused the conflict.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  ConflictException& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the resource that caused the conflict.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  ConflictException& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_resourceId;

  Aws::String m_resourceType;
  bool m_messageHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
