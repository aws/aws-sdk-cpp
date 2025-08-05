/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EventMetadata.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Detailed information about a specific event, including event
   * metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EventDetails">AWS
   * API Reference</a></p>
   */
  class EventDetails
  {
  public:
    AWS_SAGEMAKER_API EventDetails() = default;
    AWS_SAGEMAKER_API EventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Metadata specific to the event, which may include information about the
     * cluster, instance group, or instance involved.</p>
     */
    inline const EventMetadata& GetEventMetadata() const { return m_eventMetadata; }
    inline bool EventMetadataHasBeenSet() const { return m_eventMetadataHasBeenSet; }
    template<typename EventMetadataT = EventMetadata>
    void SetEventMetadata(EventMetadataT&& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata = std::forward<EventMetadataT>(value); }
    template<typename EventMetadataT = EventMetadata>
    EventDetails& WithEventMetadata(EventMetadataT&& value) { SetEventMetadata(std::forward<EventMetadataT>(value)); return *this;}
    ///@}
  private:

    EventMetadata m_eventMetadata;
    bool m_eventMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
