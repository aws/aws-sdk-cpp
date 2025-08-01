/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/observabilityadmin/model/ResourceType.h>
#include <aws/observabilityadmin/model/TelemetryType.h>
#include <aws/observabilityadmin/model/TelemetryState.h>
#include <utility>

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   */
  class ListResourceTelemetryForOrganizationRequest : public ObservabilityAdminRequest
  {
  public:
    AWS_OBSERVABILITYADMIN_API ListResourceTelemetryForOrganizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceTelemetryForOrganization"; }

    AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A list of Amazon Web Services accounts used to filter the resources to those
     * associated with the specified accounts. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdentifiers() const { return m_accountIdentifiers; }
    inline bool AccountIdentifiersHasBeenSet() const { return m_accountIdentifiersHasBeenSet; }
    template<typename AccountIdentifiersT = Aws::Vector<Aws::String>>
    void SetAccountIdentifiers(AccountIdentifiersT&& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers = std::forward<AccountIdentifiersT>(value); }
    template<typename AccountIdentifiersT = Aws::Vector<Aws::String>>
    ListResourceTelemetryForOrganizationRequest& WithAccountIdentifiers(AccountIdentifiersT&& value) { SetAccountIdentifiers(std::forward<AccountIdentifiersT>(value)); return *this;}
    template<typename AccountIdentifiersT = Aws::String>
    ListResourceTelemetryForOrganizationRequest& AddAccountIdentifiers(AccountIdentifiersT&& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers.emplace_back(std::forward<AccountIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A string used to filter resources in the organization which have a
     * <code>ResourceIdentifier</code> starting with the
     * <code>ResourceIdentifierPrefix</code>. </p>
     */
    inline const Aws::String& GetResourceIdentifierPrefix() const { return m_resourceIdentifierPrefix; }
    inline bool ResourceIdentifierPrefixHasBeenSet() const { return m_resourceIdentifierPrefixHasBeenSet; }
    template<typename ResourceIdentifierPrefixT = Aws::String>
    void SetResourceIdentifierPrefix(ResourceIdentifierPrefixT&& value) { m_resourceIdentifierPrefixHasBeenSet = true; m_resourceIdentifierPrefix = std::forward<ResourceIdentifierPrefixT>(value); }
    template<typename ResourceIdentifierPrefixT = Aws::String>
    ListResourceTelemetryForOrganizationRequest& WithResourceIdentifierPrefix(ResourceIdentifierPrefixT&& value) { SetResourceIdentifierPrefix(std::forward<ResourceIdentifierPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of resource types used to filter resources in the organization. If
     * this parameter is provided, the resources will be returned in the same order
     * used in the request. </p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    ListResourceTelemetryForOrganizationRequest& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    inline ListResourceTelemetryForOrganizationRequest& AddResourceTypes(ResourceType value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A key-value pair to filter resources in the organization based on the
     * telemetry type and the state of the telemetry configuration. The key is the
     * telemetry type and the value is the state. </p>
     */
    inline const Aws::Map<TelemetryType, TelemetryState>& GetTelemetryConfigurationState() const { return m_telemetryConfigurationState; }
    inline bool TelemetryConfigurationStateHasBeenSet() const { return m_telemetryConfigurationStateHasBeenSet; }
    template<typename TelemetryConfigurationStateT = Aws::Map<TelemetryType, TelemetryState>>
    void SetTelemetryConfigurationState(TelemetryConfigurationStateT&& value) { m_telemetryConfigurationStateHasBeenSet = true; m_telemetryConfigurationState = std::forward<TelemetryConfigurationStateT>(value); }
    template<typename TelemetryConfigurationStateT = Aws::Map<TelemetryType, TelemetryState>>
    ListResourceTelemetryForOrganizationRequest& WithTelemetryConfigurationState(TelemetryConfigurationStateT&& value) { SetTelemetryConfigurationState(std::forward<TelemetryConfigurationStateT>(value)); return *this;}
    inline ListResourceTelemetryForOrganizationRequest& AddTelemetryConfigurationState(TelemetryType key, TelemetryState value) {
      m_telemetryConfigurationStateHasBeenSet = true; m_telemetryConfigurationState.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> A key-value pair to filter resources in the organization based on tags
     * associated with the resource. Fore more information about tags, see <a
     * href="https://docs.aws.amazon.com/whitepapers/latest/tagging-best-practices/what-are-tags.html">What
     * are tags?</a> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Map<Aws::String, Aws::String>>
    ListResourceTelemetryForOrganizationRequest& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsKeyT = Aws::String, typename ResourceTagsValueT = Aws::String>
    ListResourceTelemetryForOrganizationRequest& AddResourceTags(ResourceTagsKeyT&& key, ResourceTagsValueT&& value) {
      m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::forward<ResourceTagsKeyT>(key), std::forward<ResourceTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> A number field used to limit the number of results within the returned list.
     * </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourceTelemetryForOrganizationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token for the next set of items to return. A previous call provides this
     * token. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceTelemetryForOrganizationRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIdentifiers;
    bool m_accountIdentifiersHasBeenSet = false;

    Aws::String m_resourceIdentifierPrefix;
    bool m_resourceIdentifierPrefixHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::Map<TelemetryType, TelemetryState> m_telemetryConfigurationState;
    bool m_telemetryConfigurationStateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
