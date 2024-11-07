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
    AWS_RESOURCEEXPLORER2_API ManagedView();
    AWS_RESOURCEEXPLORER2_API ManagedView(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API ManagedView& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SearchFilter& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const SearchFilter& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(SearchFilter&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ManagedView& WithFilters(const SearchFilter& value) { SetFilters(value); return *this;}
    inline ManagedView& WithFilters(SearchFilter&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains additional information about the managed view.</p>
     */
    inline const Aws::Vector<IncludedProperty>& GetIncludedProperties() const{ return m_includedProperties; }
    inline bool IncludedPropertiesHasBeenSet() const { return m_includedPropertiesHasBeenSet; }
    inline void SetIncludedProperties(const Aws::Vector<IncludedProperty>& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties = value; }
    inline void SetIncludedProperties(Aws::Vector<IncludedProperty>&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties = std::move(value); }
    inline ManagedView& WithIncludedProperties(const Aws::Vector<IncludedProperty>& value) { SetIncludedProperties(value); return *this;}
    inline ManagedView& WithIncludedProperties(Aws::Vector<IncludedProperty>&& value) { SetIncludedProperties(std::move(value)); return *this;}
    inline ManagedView& AddIncludedProperties(const IncludedProperty& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties.push_back(value); return *this; }
    inline ManagedView& AddIncludedProperties(IncludedProperty&& value) { m_includedPropertiesHasBeenSet = true; m_includedProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when this managed view was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline ManagedView& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline ManagedView& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the managed view.</p>
     */
    inline const Aws::String& GetManagedViewArn() const{ return m_managedViewArn; }
    inline bool ManagedViewArnHasBeenSet() const { return m_managedViewArnHasBeenSet; }
    inline void SetManagedViewArn(const Aws::String& value) { m_managedViewArnHasBeenSet = true; m_managedViewArn = value; }
    inline void SetManagedViewArn(Aws::String&& value) { m_managedViewArnHasBeenSet = true; m_managedViewArn = std::move(value); }
    inline void SetManagedViewArn(const char* value) { m_managedViewArnHasBeenSet = true; m_managedViewArn.assign(value); }
    inline ManagedView& WithManagedViewArn(const Aws::String& value) { SetManagedViewArn(value); return *this;}
    inline ManagedView& WithManagedViewArn(Aws::String&& value) { SetManagedViewArn(std::move(value)); return *this;}
    inline ManagedView& WithManagedViewArn(const char* value) { SetManagedViewArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed view. </p>
     */
    inline const Aws::String& GetManagedViewName() const{ return m_managedViewName; }
    inline bool ManagedViewNameHasBeenSet() const { return m_managedViewNameHasBeenSet; }
    inline void SetManagedViewName(const Aws::String& value) { m_managedViewNameHasBeenSet = true; m_managedViewName = value; }
    inline void SetManagedViewName(Aws::String&& value) { m_managedViewNameHasBeenSet = true; m_managedViewName = std::move(value); }
    inline void SetManagedViewName(const char* value) { m_managedViewNameHasBeenSet = true; m_managedViewName.assign(value); }
    inline ManagedView& WithManagedViewName(const Aws::String& value) { SetManagedViewName(value); return *this;}
    inline ManagedView& WithManagedViewName(Aws::String&& value) { SetManagedViewName(std::move(value)); return *this;}
    inline ManagedView& WithManagedViewName(const char* value) { SetManagedViewName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that owns this managed view.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline ManagedView& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline ManagedView& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline ManagedView& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource policy that defines access to the managed view. To learn more
     * about this policy, review <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/aws-managed-views.html">Managed
     * views</a>.</p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }
    inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = value; }
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::move(value); }
    inline void SetResourcePolicy(const char* value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy.assign(value); }
    inline ManagedView& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}
    inline ManagedView& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}
    inline ManagedView& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of an Amazon Web Services account or organization that
     * specifies whether this managed view includes resources from only the specified
     * Amazon Web Services account or all accounts in the specified organization. </p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }
    inline ManagedView& WithScope(const Aws::String& value) { SetScope(value); return *this;}
    inline ManagedView& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}
    inline ManagedView& WithScope(const char* value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service principal of the Amazon Web Services service that created and
     * manages the managed view. </p>
     */
    inline const Aws::String& GetTrustedService() const{ return m_trustedService; }
    inline bool TrustedServiceHasBeenSet() const { return m_trustedServiceHasBeenSet; }
    inline void SetTrustedService(const Aws::String& value) { m_trustedServiceHasBeenSet = true; m_trustedService = value; }
    inline void SetTrustedService(Aws::String&& value) { m_trustedServiceHasBeenSet = true; m_trustedService = std::move(value); }
    inline void SetTrustedService(const char* value) { m_trustedServiceHasBeenSet = true; m_trustedService.assign(value); }
    inline ManagedView& WithTrustedService(const Aws::String& value) { SetTrustedService(value); return *this;}
    inline ManagedView& WithTrustedService(Aws::String&& value) { SetTrustedService(std::move(value)); return *this;}
    inline ManagedView& WithTrustedService(const char* value) { SetTrustedService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the managed view. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline ManagedView& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline ManagedView& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline ManagedView& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    SearchFilter m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<IncludedProperty> m_includedProperties;
    bool m_includedPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
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
