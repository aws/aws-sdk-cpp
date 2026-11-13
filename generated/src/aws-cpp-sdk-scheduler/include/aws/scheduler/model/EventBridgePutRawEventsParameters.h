/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/scheduler/Scheduler_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Scheduler {
namespace Model {

/**
 * <p>The templated target type for the EventBridge event bus v2 <a
 * href="https://docs.aws.amazon.com/eventbridgev2/latest/APIReference/API_PutRawEvents.html">
 * <code>PutRawEvents</code> </a> API operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/EventBridgePutRawEventsParameters">AWS
 * API Reference</a></p>
 */
class EventBridgePutRawEventsParameters {
 public:
  AWS_SCHEDULER_API EventBridgePutRawEventsParameters() = default;
  AWS_SCHEDULER_API EventBridgePutRawEventsParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_SCHEDULER_API EventBridgePutRawEventsParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Optional metadata key-value pairs you define. Keys must be 1-128 characters
   * and must not contain "/".</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  EventBridgePutRawEventsParameters& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  EventBridgePutRawEventsParameters& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_metadata;
  bool m_metadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace Scheduler
}  // namespace Aws
