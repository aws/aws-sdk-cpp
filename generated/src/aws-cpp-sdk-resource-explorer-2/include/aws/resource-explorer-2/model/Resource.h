/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/model/ResourceProperty.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>A resource in Amazon Web Services that Amazon Web Services Resource Explorer
   * has discovered, and for which it has stored information in the index of the
   * Amazon Web Services Region that contains the resource.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_RESOURCEEXPLORER2_API Resource() = default;
    AWS_RESOURCEEXPLORER2_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Resource& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that Resource Explorer last queried this resource and
     * updated the index with the latest information about the resource.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReportedAt() const { return m_lastReportedAt; }
    inline bool LastReportedAtHasBeenSet() const { return m_lastReportedAtHasBeenSet; }
    template<typename LastReportedAtT = Aws::Utils::DateTime>
    void SetLastReportedAt(LastReportedAtT&& value) { m_lastReportedAtHasBeenSet = true; m_lastReportedAt = std::forward<LastReportedAtT>(value); }
    template<typename LastReportedAtT = Aws::Utils::DateTime>
    Resource& WithLastReportedAt(LastReportedAtT&& value) { SetLastReportedAt(std::forward<LastReportedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that owns the resource.</p>
     */
    inline const Aws::String& GetOwningAccountId() const { return m_owningAccountId; }
    inline bool OwningAccountIdHasBeenSet() const { return m_owningAccountIdHasBeenSet; }
    template<typename OwningAccountIdT = Aws::String>
    void SetOwningAccountId(OwningAccountIdT&& value) { m_owningAccountIdHasBeenSet = true; m_owningAccountId = std::forward<OwningAccountIdT>(value); }
    template<typename OwningAccountIdT = Aws::String>
    Resource& WithOwningAccountId(OwningAccountIdT&& value) { SetOwningAccountId(std::forward<OwningAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure with additional type-specific details about the resource. These
     * properties can be added by turning on integration between Resource Explorer and
     * other Amazon Web Services services.</p>
     */
    inline const Aws::Vector<ResourceProperty>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Vector<ResourceProperty>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Vector<ResourceProperty>>
    Resource& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesT = ResourceProperty>
    Resource& AddProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties.emplace_back(std::forward<PropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the resource was created and
     * exists.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Resource& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    Resource& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service that owns the resource and is responsible for
     * creating and updating it.</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    Resource& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_lastReportedAt{};
    bool m_lastReportedAtHasBeenSet = false;

    Aws::String m_owningAccountId;
    bool m_owningAccountIdHasBeenSet = false;

    Aws::Vector<ResourceProperty> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
