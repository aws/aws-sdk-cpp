/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEventsEndpointReplicationConfigDetails.h>
#include <aws/securityhub/model/AwsEventsEndpointRoutingConfigDetails.h>
#include <aws/securityhub/model/AwsEventsEndpointEventBusesDetails.h>
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
   * <p> Provides details about an Amazon EventBridge global endpoint. The endpoint
   * can improve your application’s availability by making it Regional-fault
   * tolerant. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEventsEndpointDetails">AWS
   * API Reference</a></p>
   */
  class AwsEventsEndpointDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEventsEndpointDetails();
    AWS_SECURITYHUB_API AwsEventsEndpointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the endpoint. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AwsEventsEndpointDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AwsEventsEndpointDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AwsEventsEndpointDetails& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the endpoint. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AwsEventsEndpointDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AwsEventsEndpointDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AwsEventsEndpointDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL subdomain of the endpoint. For example, if <code>EndpointUrl</code>
     * is <code>https://abcde.veo.endpoints.event.amazonaws.com</code>, then the
     * <code>EndpointId</code> is <code>abcde.veo</code>.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }
    inline AwsEventsEndpointDetails& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline AwsEventsEndpointDetails& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline AwsEventsEndpointDetails& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointUrl() const{ return m_endpointUrl; }
    inline bool EndpointUrlHasBeenSet() const { return m_endpointUrlHasBeenSet; }
    inline void SetEndpointUrl(const Aws::String& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = value; }
    inline void SetEndpointUrl(Aws::String&& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = std::move(value); }
    inline void SetEndpointUrl(const char* value) { m_endpointUrlHasBeenSet = true; m_endpointUrl.assign(value); }
    inline AwsEventsEndpointDetails& WithEndpointUrl(const Aws::String& value) { SetEndpointUrl(value); return *this;}
    inline AwsEventsEndpointDetails& WithEndpointUrl(Aws::String&& value) { SetEndpointUrl(std::move(value)); return *this;}
    inline AwsEventsEndpointDetails& WithEndpointUrl(const char* value) { SetEndpointUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The event buses being used by the endpoint.</p>
     */
    inline const Aws::Vector<AwsEventsEndpointEventBusesDetails>& GetEventBuses() const{ return m_eventBuses; }
    inline bool EventBusesHasBeenSet() const { return m_eventBusesHasBeenSet; }
    inline void SetEventBuses(const Aws::Vector<AwsEventsEndpointEventBusesDetails>& value) { m_eventBusesHasBeenSet = true; m_eventBuses = value; }
    inline void SetEventBuses(Aws::Vector<AwsEventsEndpointEventBusesDetails>&& value) { m_eventBusesHasBeenSet = true; m_eventBuses = std::move(value); }
    inline AwsEventsEndpointDetails& WithEventBuses(const Aws::Vector<AwsEventsEndpointEventBusesDetails>& value) { SetEventBuses(value); return *this;}
    inline AwsEventsEndpointDetails& WithEventBuses(Aws::Vector<AwsEventsEndpointEventBusesDetails>&& value) { SetEventBuses(std::move(value)); return *this;}
    inline AwsEventsEndpointDetails& AddEventBuses(const AwsEventsEndpointEventBusesDetails& value) { m_eventBusesHasBeenSet = true; m_eventBuses.push_back(value); return *this; }
    inline AwsEventsEndpointDetails& AddEventBuses(AwsEventsEndpointEventBusesDetails&& value) { m_eventBusesHasBeenSet = true; m_eventBuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the endpoint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsEventsEndpointDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsEventsEndpointDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsEventsEndpointDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether event replication was enabled or disabled for this endpoint. The
     * default state is <code>ENABLED</code>, which means you must supply a
     * <code>RoleArn</code>. If you don't have a <code>RoleArn</code> or you don't want
     * event replication enabled, set the state to <code>DISABLED</code>.</p>
     */
    inline const AwsEventsEndpointReplicationConfigDetails& GetReplicationConfig() const{ return m_replicationConfig; }
    inline bool ReplicationConfigHasBeenSet() const { return m_replicationConfigHasBeenSet; }
    inline void SetReplicationConfig(const AwsEventsEndpointReplicationConfigDetails& value) { m_replicationConfigHasBeenSet = true; m_replicationConfig = value; }
    inline void SetReplicationConfig(AwsEventsEndpointReplicationConfigDetails&& value) { m_replicationConfigHasBeenSet = true; m_replicationConfig = std::move(value); }
    inline AwsEventsEndpointDetails& WithReplicationConfig(const AwsEventsEndpointReplicationConfigDetails& value) { SetReplicationConfig(value); return *this;}
    inline AwsEventsEndpointDetails& WithReplicationConfig(AwsEventsEndpointReplicationConfigDetails&& value) { SetReplicationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the role used by event replication for the endpoint.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline AwsEventsEndpointDetails& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline AwsEventsEndpointDetails& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline AwsEventsEndpointDetails& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The routing configuration of the endpoint.</p>
     */
    inline const AwsEventsEndpointRoutingConfigDetails& GetRoutingConfig() const{ return m_routingConfig; }
    inline bool RoutingConfigHasBeenSet() const { return m_routingConfigHasBeenSet; }
    inline void SetRoutingConfig(const AwsEventsEndpointRoutingConfigDetails& value) { m_routingConfigHasBeenSet = true; m_routingConfig = value; }
    inline void SetRoutingConfig(AwsEventsEndpointRoutingConfigDetails&& value) { m_routingConfigHasBeenSet = true; m_routingConfig = std::move(value); }
    inline AwsEventsEndpointDetails& WithRoutingConfig(const AwsEventsEndpointRoutingConfigDetails& value) { SetRoutingConfig(value); return *this;}
    inline AwsEventsEndpointDetails& WithRoutingConfig(AwsEventsEndpointRoutingConfigDetails&& value) { SetRoutingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current state of the endpoint.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline AwsEventsEndpointDetails& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline AwsEventsEndpointDetails& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline AwsEventsEndpointDetails& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason the endpoint is in its current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }
    inline AwsEventsEndpointDetails& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline AwsEventsEndpointDetails& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline AwsEventsEndpointDetails& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_endpointUrl;
    bool m_endpointUrlHasBeenSet = false;

    Aws::Vector<AwsEventsEndpointEventBusesDetails> m_eventBuses;
    bool m_eventBusesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AwsEventsEndpointReplicationConfigDetails m_replicationConfig;
    bool m_replicationConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    AwsEventsEndpointRoutingConfigDetails m_routingConfig;
    bool m_routingConfigHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
