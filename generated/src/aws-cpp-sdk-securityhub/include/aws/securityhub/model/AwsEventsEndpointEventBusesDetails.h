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
    AWS_SECURITYHUB_API AwsEventsEndpointEventBusesDetails();
    AWS_SECURITYHUB_API AwsEventsEndpointEventBusesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEndpointEventBusesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the event bus that the endpoint is
     * associated with.</p>
     */
    inline const Aws::String& GetEventBusArn() const{ return m_eventBusArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the event bus that the endpoint is
     * associated with.</p>
     */
    inline bool EventBusArnHasBeenSet() const { return m_eventBusArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the event bus that the endpoint is
     * associated with.</p>
     */
    inline void SetEventBusArn(const Aws::String& value) { m_eventBusArnHasBeenSet = true; m_eventBusArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the event bus that the endpoint is
     * associated with.</p>
     */
    inline void SetEventBusArn(Aws::String&& value) { m_eventBusArnHasBeenSet = true; m_eventBusArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the event bus that the endpoint is
     * associated with.</p>
     */
    inline void SetEventBusArn(const char* value) { m_eventBusArnHasBeenSet = true; m_eventBusArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the event bus that the endpoint is
     * associated with.</p>
     */
    inline AwsEventsEndpointEventBusesDetails& WithEventBusArn(const Aws::String& value) { SetEventBusArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the event bus that the endpoint is
     * associated with.</p>
     */
    inline AwsEventsEndpointEventBusesDetails& WithEventBusArn(Aws::String&& value) { SetEventBusArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the event bus that the endpoint is
     * associated with.</p>
     */
    inline AwsEventsEndpointEventBusesDetails& WithEventBusArn(const char* value) { SetEventBusArn(value); return *this;}

  private:

    Aws::String m_eventBusArn;
    bool m_eventBusArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
