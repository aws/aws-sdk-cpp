/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/observabilityadmin/model/ResourceType.h>
#include <aws/observabilityadmin/model/TelemetryType.h>
#include <aws/observabilityadmin/model/TelemetryState.h>
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
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   * <p> A model representing the state of a resource within an account according to
   * telemetry config. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TelemetryConfiguration">AWS
   * API Reference</a></p>
   */
  class TelemetryConfiguration
  {
  public:
    AWS_OBSERVABILITYADMIN_API TelemetryConfiguration() = default;
    AWS_OBSERVABILITYADMIN_API TelemetryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API TelemetryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The account ID which contains the resource managed in telemetry
     * configuration. An example of a valid account ID is <code>012345678901</code>.
     * </p>
     */
    inline const Aws::String& GetAccountIdentifier() const { return m_accountIdentifier; }
    inline bool AccountIdentifierHasBeenSet() const { return m_accountIdentifierHasBeenSet; }
    template<typename AccountIdentifierT = Aws::String>
    void SetAccountIdentifier(AccountIdentifierT&& value) { m_accountIdentifierHasBeenSet = true; m_accountIdentifier = std::forward<AccountIdentifierT>(value); }
    template<typename AccountIdentifierT = Aws::String>
    TelemetryConfiguration& WithAccountIdentifier(AccountIdentifierT&& value) { SetAccountIdentifier(std::forward<AccountIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration state for the resource, for example <code>{ Logs:
     * NotApplicable; Metrics: Enabled; Traces: NotApplicable; }</code>. </p>
     */
    inline const Aws::Map<TelemetryType, TelemetryState>& GetTelemetryConfigurationState() const { return m_telemetryConfigurationState; }
    inline bool TelemetryConfigurationStateHasBeenSet() const { return m_telemetryConfigurationStateHasBeenSet; }
    template<typename TelemetryConfigurationStateT = Aws::Map<TelemetryType, TelemetryState>>
    void SetTelemetryConfigurationState(TelemetryConfigurationStateT&& value) { m_telemetryConfigurationStateHasBeenSet = true; m_telemetryConfigurationState = std::forward<TelemetryConfigurationStateT>(value); }
    template<typename TelemetryConfigurationStateT = Aws::Map<TelemetryType, TelemetryState>>
    TelemetryConfiguration& WithTelemetryConfigurationState(TelemetryConfigurationStateT&& value) { SetTelemetryConfigurationState(std::forward<TelemetryConfigurationStateT>(value)); return *this;}
    inline TelemetryConfiguration& AddTelemetryConfigurationState(TelemetryType key, TelemetryState value) {
      m_telemetryConfigurationStateHasBeenSet = true; m_telemetryConfigurationState.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The type of resource, for example <code>Amazon Web
     * Services::EC2::Instance</code>. </p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline TelemetryConfiguration& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the resource, for example
     * <code>i-0b22a22eec53b9321</code>. </p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    TelemetryConfiguration& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Tags associated with the resource, for example <code>{ Name:
     * "ExampleInstance", Environment: "Development" }</code>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Map<Aws::String, Aws::String>>
    TelemetryConfiguration& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsKeyT = Aws::String, typename ResourceTagsValueT = Aws::String>
    TelemetryConfiguration& AddResourceTags(ResourceTagsKeyT&& key, ResourceTagsValueT&& value) {
      m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::forward<ResourceTagsKeyT>(key), std::forward<ResourceTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The timestamp of the last change to the telemetry configuration for the
     * resource. For example, <code>1728679196318</code>. </p>
     */
    inline long long GetLastUpdateTimeStamp() const { return m_lastUpdateTimeStamp; }
    inline bool LastUpdateTimeStampHasBeenSet() const { return m_lastUpdateTimeStampHasBeenSet; }
    inline void SetLastUpdateTimeStamp(long long value) { m_lastUpdateTimeStampHasBeenSet = true; m_lastUpdateTimeStamp = value; }
    inline TelemetryConfiguration& WithLastUpdateTimeStamp(long long value) { SetLastUpdateTimeStamp(value); return *this;}
    ///@}
  private:

    Aws::String m_accountIdentifier;
    bool m_accountIdentifierHasBeenSet = false;

    Aws::Map<TelemetryType, TelemetryState> m_telemetryConfigurationState;
    bool m_telemetryConfigurationStateHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    long long m_lastUpdateTimeStamp{0};
    bool m_lastUpdateTimeStampHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
