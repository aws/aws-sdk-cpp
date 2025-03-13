/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about the Amazon EventBridge event buses that the endpoint
   * is associated with.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEventsEndpointEventBusesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEventsEndpointEventBusesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEventsEndpointEventBusesDetails() = default;
    AWS_SECURITYHUB_API AwsEventsEndpointEventBusesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEndpointEventBusesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the event bus that the endpoint is
     * associated with.</p>
     */
    inline const Aws::String& GetEventBusArn() const { return m_eventBusArn; }
    inline bool EventBusArnHasBeenSet() const { return m_eventBusArnHasBeenSet; }
    template<typename EventBusArnT = Aws::String>
    void SetEventBusArn(EventBusArnT&& value) { m_eventBusArnHasBeenSet = true; m_eventBusArn = std::forward<EventBusArnT>(value); }
    template<typename EventBusArnT = Aws::String>
    AwsEventsEndpointEventBusesDetails& WithEventBusArn(EventBusArnT&& value) { SetEventBusArn(std::forward<EventBusArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventBusArn;
    bool m_eventBusArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
