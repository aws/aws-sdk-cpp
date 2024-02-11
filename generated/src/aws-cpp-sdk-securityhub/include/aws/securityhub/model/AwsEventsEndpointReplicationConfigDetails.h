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
   * <p> Indicates whether replication is enabled or disabled for the endpoint. If
   * enabled, the endpoint can replicate all events to a secondary Amazon Web
   * Services Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEventsEndpointReplicationConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsEventsEndpointReplicationConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEventsEndpointReplicationConfigDetails();
    AWS_SECURITYHUB_API AwsEventsEndpointReplicationConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEndpointReplicationConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The state of event replication.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p> The state of event replication.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p> The state of event replication.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p> The state of event replication.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p> The state of event replication.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p> The state of event replication.</p>
     */
    inline AwsEventsEndpointReplicationConfigDetails& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p> The state of event replication.</p>
     */
    inline AwsEventsEndpointReplicationConfigDetails& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p> The state of event replication.</p>
     */
    inline AwsEventsEndpointReplicationConfigDetails& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
