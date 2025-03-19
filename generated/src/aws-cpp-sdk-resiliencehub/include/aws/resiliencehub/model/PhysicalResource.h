/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/LogicalResourceId.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/PhysicalResourceId.h>
#include <aws/resiliencehub/model/ResourceSourceType.h>
#include <aws/resiliencehub/model/AppComponent.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a physical resource. A physical resource is a resource that exists in
   * your account. It can be identified using an Amazon Resource Name (ARN) or an
   * Resilience Hub-native identifier. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/PhysicalResource">AWS
   * API Reference</a></p>
   */
  class PhysicalResource
  {
  public:
    AWS_RESILIENCEHUB_API PhysicalResource() = default;
    AWS_RESILIENCEHUB_API PhysicalResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API PhysicalResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAdditionalInfo() const { return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    template<typename AdditionalInfoT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetAdditionalInfo(AdditionalInfoT&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::forward<AdditionalInfoT>(value); }
    template<typename AdditionalInfoT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    PhysicalResource& WithAdditionalInfo(AdditionalInfoT&& value) { SetAdditionalInfo(std::forward<AdditionalInfoT>(value)); return *this;}
    template<typename AdditionalInfoKeyT = Aws::String, typename AdditionalInfoValueT = Aws::Vector<Aws::String>>
    PhysicalResource& AddAdditionalInfo(AdditionalInfoKeyT&& key, AdditionalInfoValueT&& value) {
      m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(std::forward<AdditionalInfoKeyT>(key), std::forward<AdditionalInfoValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The application components that belong to this resource.</p>
     */
    inline const Aws::Vector<AppComponent>& GetAppComponents() const { return m_appComponents; }
    inline bool AppComponentsHasBeenSet() const { return m_appComponentsHasBeenSet; }
    template<typename AppComponentsT = Aws::Vector<AppComponent>>
    void SetAppComponents(AppComponentsT&& value) { m_appComponentsHasBeenSet = true; m_appComponents = std::forward<AppComponentsT>(value); }
    template<typename AppComponentsT = Aws::Vector<AppComponent>>
    PhysicalResource& WithAppComponents(AppComponentsT&& value) { SetAppComponents(std::forward<AppComponentsT>(value)); return *this;}
    template<typename AppComponentsT = AppComponent>
    PhysicalResource& AddAppComponents(AppComponentsT&& value) { m_appComponentsHasBeenSet = true; m_appComponents.emplace_back(std::forward<AppComponentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if a resource is included or excluded from the assessment.</p>
     */
    inline bool GetExcluded() const { return m_excluded; }
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }
    inline PhysicalResource& WithExcluded(bool value) { SetExcluded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logical identifier of the resource.</p>
     */
    inline const LogicalResourceId& GetLogicalResourceId() const { return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    template<typename LogicalResourceIdT = LogicalResourceId>
    void SetLogicalResourceId(LogicalResourceIdT&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::forward<LogicalResourceIdT>(value); }
    template<typename LogicalResourceIdT = LogicalResourceId>
    PhysicalResource& WithLogicalResourceId(LogicalResourceIdT&& value) { SetLogicalResourceId(std::forward<LogicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the parent resource.</p>
     */
    inline const Aws::String& GetParentResourceName() const { return m_parentResourceName; }
    inline bool ParentResourceNameHasBeenSet() const { return m_parentResourceNameHasBeenSet; }
    template<typename ParentResourceNameT = Aws::String>
    void SetParentResourceName(ParentResourceNameT&& value) { m_parentResourceNameHasBeenSet = true; m_parentResourceName = std::forward<ParentResourceNameT>(value); }
    template<typename ParentResourceNameT = Aws::String>
    PhysicalResource& WithParentResourceName(ParentResourceNameT&& value) { SetParentResourceName(std::forward<ParentResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the physical resource.</p>
     */
    inline const PhysicalResourceId& GetPhysicalResourceId() const { return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    template<typename PhysicalResourceIdT = PhysicalResourceId>
    void SetPhysicalResourceId(PhysicalResourceIdT&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::forward<PhysicalResourceIdT>(value); }
    template<typename PhysicalResourceIdT = PhysicalResourceId>
    PhysicalResource& WithPhysicalResourceId(PhysicalResourceIdT&& value) { SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    PhysicalResource& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of resource.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    PhysicalResource& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of input source.</p>
     */
    inline ResourceSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(ResourceSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline PhysicalResource& WithSourceType(ResourceSourceType value) { SetSourceType(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    Aws::Vector<AppComponent> m_appComponents;
    bool m_appComponentsHasBeenSet = false;

    bool m_excluded{false};
    bool m_excludedHasBeenSet = false;

    LogicalResourceId m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_parentResourceName;
    bool m_parentResourceNameHasBeenSet = false;

    PhysicalResourceId m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    ResourceSourceType m_sourceType{ResourceSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
