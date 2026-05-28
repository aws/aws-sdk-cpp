/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/InputSource.h>
#include <aws/resiliencehubv2/model/Resource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Represents a resource associated with a service.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceResource">AWS
 * API Reference</a></p>
 */
class ServiceResource {
 public:
  AWS_RESILIENCEHUBV2_API ServiceResource() = default;
  AWS_RESILIENCEHUBV2_API ServiceResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the resource.</p>
   */
  inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
  inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
  template <typename ResourceIdentifierT = Aws::String>
  void SetResourceIdentifier(ResourceIdentifierT&& value) {
    m_resourceIdentifierHasBeenSet = true;
    m_resourceIdentifier = std::forward<ResourceIdentifierT>(value);
  }
  template <typename ResourceIdentifierT = Aws::String>
  ServiceResource& WithResourceIdentifier(ResourceIdentifierT&& value) {
    SetResourceIdentifier(std::forward<ResourceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The input source that discovered the resource.</p>
   */
  inline const InputSource& GetInputSource() const { return m_inputSource; }
  inline bool InputSourceHasBeenSet() const { return m_inputSourceHasBeenSet; }
  template <typename InputSourceT = InputSource>
  void SetInputSource(InputSourceT&& value) {
    m_inputSourceHasBeenSet = true;
    m_inputSource = std::forward<InputSourceT>(value);
  }
  template <typename InputSourceT = InputSource>
  ServiceResource& WithInputSource(InputSourceT&& value) {
    SetInputSource(std::forward<InputSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource details.</p>
   */
  inline const Resource& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Resource>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Resource>
  ServiceResource& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceIdentifier;

  InputSource m_inputSource;

  Resource m_resource;
  bool m_resourceIdentifierHasBeenSet = false;
  bool m_inputSourceHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
