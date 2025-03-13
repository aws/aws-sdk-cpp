/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/SearchFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/model/IncludedProperty.h>
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
   * <p>An Amazon Web Services-managed view is how other Amazon Web Services services
   * can access resource information indexed by Resource Explorer for your Amazon Web
   * Services account or organization with your consent. For more information, see <a
   * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/aws-managed-views.html">Managed
   * views</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ManagedView">AWS
   * API Reference</a></p>
   */
  class ManagedView
  {
  public:
    AWS_RESOURCEEXPLORER2_API ManagedView() = default;
    AWS_RESOURCEEXPLORER2_API ManagedView(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API ManagedView& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SearchFilter& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = SearchFilter>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = SearchFilter>
    ManagedView& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains additional information about the managed view.</p>
     */
    inline const Aws::Vector<IncludedProperty>& GetIncludedProperties() const { return m_includedProperties; }
    inline bool IncludedPropertiesHasBeenSet() const { return m_includedPropertiesHasBeenSet; }
    template<typename IncludedPropertiesT = Aws::Vector<IncludedProperty>>
    void SetIncludedProperties(IncludedPropertiesT&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties = std::forward<IncludedPropertiesT>(value); }
    template<typename IncludedPropertiesT = Aws::Vector<IncludedProperty>>
    ManagedView& WithIncludedProperties(IncludedPropertiesT&& value) { SetIncludedProperties(std::forward<IncludedPropertiesT>(value)); return *this;}
    template<typename IncludedPropertiesT = IncludedProperty>
    ManagedView& AddIncludedProperties(IncludedPropertiesT&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties.emplace_back(std::forward<IncludedPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when this managed view was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ManagedView& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the managed view.</p>
     */
    inline const Aws::String& GetManagedViewArn() const { return m_managedViewArn; }
    inline bool ManagedViewArnHasBeenSet() const { return m_managedViewArnHasBeenSet; }
    template<typename ManagedViewArnT = Aws::String>
    void SetManagedViewArn(ManagedViewArnT&& value) { m_managedViewArnHasBeenSet = true; m_managedViewArn = std::forward<ManagedViewArnT>(value); }
    template<typename ManagedViewArnT = Aws::String>
    ManagedView& WithManagedViewArn(ManagedViewArnT&& value) { SetManagedViewArn(std::forward<ManagedViewArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed view. </p>
     */
    inline const Aws::String& GetManagedViewName() const { return m_managedViewName; }
    inline bool ManagedViewNameHasBeenSet() const { return m_managedViewNameHasBeenSet; }
    template<typename ManagedViewNameT = Aws::String>
    void SetManagedViewName(ManagedViewNameT&& value) { m_managedViewNameHasBeenSet = true; m_managedViewName = std::forward<ManagedViewNameT>(value); }
    template<typename ManagedViewNameT = Aws::String>
    ManagedView& WithManagedViewName(ManagedViewNameT&& value) { SetManagedViewName(std::forward<ManagedViewNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that owns this managed view.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    ManagedView& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource policy that defines access to the managed view. To learn more
     * about this policy, review <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/aws-managed-views.html">Managed
     * views</a>.</p>
     */
    inline const Aws::String& GetResourcePolicy() const { return m_resourcePolicy; }
    inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }
    template<typename ResourcePolicyT = Aws::String>
    void SetResourcePolicy(ResourcePolicyT&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::forward<ResourcePolicyT>(value); }
    template<typename ResourcePolicyT = Aws::String>
    ManagedView& WithResourcePolicy(ResourcePolicyT&& value) { SetResourcePolicy(std::forward<ResourcePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of an Amazon Web Services account or organization that
     * specifies whether this managed view includes resources from only the specified
     * Amazon Web Services account or all accounts in the specified organization. </p>
     */
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    ManagedView& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service principal of the Amazon Web Services service that created and
     * manages the managed view. </p>
     */
    inline const Aws::String& GetTrustedService() const { return m_trustedService; }
    inline bool TrustedServiceHasBeenSet() const { return m_trustedServiceHasBeenSet; }
    template<typename TrustedServiceT = Aws::String>
    void SetTrustedService(TrustedServiceT&& value) { m_trustedServiceHasBeenSet = true; m_trustedService = std::forward<TrustedServiceT>(value); }
    template<typename TrustedServiceT = Aws::String>
    ManagedView& WithTrustedService(TrustedServiceT&& value) { SetTrustedService(std::forward<TrustedServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the managed view. </p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    ManagedView& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    SearchFilter m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<IncludedProperty> m_includedProperties;
    bool m_includedPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_managedViewArn;
    bool m_managedViewArnHasBeenSet = false;

    Aws::String m_managedViewName;
    bool m_managedViewNameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_resourcePolicy;
    bool m_resourcePolicyHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_trustedService;
    bool m_trustedServiceHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
