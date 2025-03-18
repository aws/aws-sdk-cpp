/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/ApplicationLayerAutomaticResponseConfiguration.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>An object that represents a resource that is under DDoS
   * protection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/Protection">AWS
   * API Reference</a></p>
   */
  class Protection
  {
  public:
    AWS_SHIELD_API Protection() = default;
    AWS_SHIELD_API Protection(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Protection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of the protection.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Protection& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the protection. For example, <code>My CloudFront
     * distributions</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Protection& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the Amazon Web Services resource that is
     * protected.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    Protection& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier (ID) for the Route 53 health check that's associated
     * with the protection. </p>
     */
    inline const Aws::Vector<Aws::String>& GetHealthCheckIds() const { return m_healthCheckIds; }
    inline bool HealthCheckIdsHasBeenSet() const { return m_healthCheckIdsHasBeenSet; }
    template<typename HealthCheckIdsT = Aws::Vector<Aws::String>>
    void SetHealthCheckIds(HealthCheckIdsT&& value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds = std::forward<HealthCheckIdsT>(value); }
    template<typename HealthCheckIdsT = Aws::Vector<Aws::String>>
    Protection& WithHealthCheckIds(HealthCheckIdsT&& value) { SetHealthCheckIds(std::forward<HealthCheckIdsT>(value)); return *this;}
    template<typename HealthCheckIdsT = Aws::String>
    Protection& AddHealthCheckIds(HealthCheckIdsT&& value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds.emplace_back(std::forward<HealthCheckIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the protection.</p>
     */
    inline const Aws::String& GetProtectionArn() const { return m_protectionArn; }
    inline bool ProtectionArnHasBeenSet() const { return m_protectionArnHasBeenSet; }
    template<typename ProtectionArnT = Aws::String>
    void SetProtectionArn(ProtectionArnT&& value) { m_protectionArnHasBeenSet = true; m_protectionArn = std::forward<ProtectionArnT>(value); }
    template<typename ProtectionArnT = Aws::String>
    Protection& WithProtectionArn(ProtectionArnT&& value) { SetProtectionArn(std::forward<ProtectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automatic application layer DDoS mitigation settings for the protection.
     * This configuration determines whether Shield Advanced automatically manages
     * rules in the web ACL in order to respond to application layer events that Shield
     * Advanced determines to be DDoS attacks. </p>
     */
    inline const ApplicationLayerAutomaticResponseConfiguration& GetApplicationLayerAutomaticResponseConfiguration() const { return m_applicationLayerAutomaticResponseConfiguration; }
    inline bool ApplicationLayerAutomaticResponseConfigurationHasBeenSet() const { return m_applicationLayerAutomaticResponseConfigurationHasBeenSet; }
    template<typename ApplicationLayerAutomaticResponseConfigurationT = ApplicationLayerAutomaticResponseConfiguration>
    void SetApplicationLayerAutomaticResponseConfiguration(ApplicationLayerAutomaticResponseConfigurationT&& value) { m_applicationLayerAutomaticResponseConfigurationHasBeenSet = true; m_applicationLayerAutomaticResponseConfiguration = std::forward<ApplicationLayerAutomaticResponseConfigurationT>(value); }
    template<typename ApplicationLayerAutomaticResponseConfigurationT = ApplicationLayerAutomaticResponseConfiguration>
    Protection& WithApplicationLayerAutomaticResponseConfiguration(ApplicationLayerAutomaticResponseConfigurationT&& value) { SetApplicationLayerAutomaticResponseConfiguration(std::forward<ApplicationLayerAutomaticResponseConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_healthCheckIds;
    bool m_healthCheckIdsHasBeenSet = false;

    Aws::String m_protectionArn;
    bool m_protectionArnHasBeenSet = false;

    ApplicationLayerAutomaticResponseConfiguration m_applicationLayerAutomaticResponseConfiguration;
    bool m_applicationLayerAutomaticResponseConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
