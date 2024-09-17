/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that defines an Amazon EventBridge destination for email events.
   * You can use Amazon EventBridge to send notifications when certain email events
   * occur.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/EventBridgeDestination">AWS
   * API Reference</a></p>
   */
  class EventBridgeDestination
  {
  public:
    AWS_SESV2_API EventBridgeDestination();
    AWS_SESV2_API EventBridgeDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API EventBridgeDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EventBridge bus to publish email
     * events to. Only the default bus is supported. </p>
     */
    inline const Aws::String& GetEventBusArn() const{ return m_eventBusArn; }
    inline bool EventBusArnHasBeenSet() const { return m_eventBusArnHasBeenSet; }
    inline void SetEventBusArn(const Aws::String& value) { m_eventBusArnHasBeenSet = true; m_eventBusArn = value; }
    inline void SetEventBusArn(Aws::String&& value) { m_eventBusArnHasBeenSet = true; m_eventBusArn = std::move(value); }
    inline void SetEventBusArn(const char* value) { m_eventBusArnHasBeenSet = true; m_eventBusArn.assign(value); }
    inline EventBridgeDestination& WithEventBusArn(const Aws::String& value) { SetEventBusArn(value); return *this;}
    inline EventBridgeDestination& WithEventBusArn(Aws::String&& value) { SetEventBusArn(std::move(value)); return *this;}
    inline EventBridgeDestination& WithEventBusArn(const char* value) { SetEventBusArn(value); return *this;}
    ///@}
  private:

    Aws::String m_eventBusArn;
    bool m_eventBusArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
