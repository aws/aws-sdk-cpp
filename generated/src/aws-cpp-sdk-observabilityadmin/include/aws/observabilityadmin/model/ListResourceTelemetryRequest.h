﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListResourceTelemetryRequest : public ObservabilityAdminRequest
  {
  public:
    AWS_OBSERVABILITYADMIN_API ListResourceTelemetryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceTelemetry"; }

    AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A string used to filter resources which have a
     * <code>ResourceIdentifier</code> starting with the
     * <code>ResourceIdentifierPrefix</code>. </p>
     */
    inline const Aws::String& GetResourceIdentifierPrefix() const{ return m_resourceIdentifierPrefix; }
    inline bool ResourceIdentifierPrefixHasBeenSet() const { return m_resourceIdentifierPrefixHasBeenSet; }
    inline void SetResourceIdentifierPrefix(const Aws::String& value) { m_resourceIdentifierPrefixHasBeenSet = true; m_resourceIdentifierPrefix = value; }
    inline void SetResourceIdentifierPrefix(Aws::String&& value) { m_resourceIdentifierPrefixHasBeenSet = true; m_resourceIdentifierPrefix = std::move(value); }
    inline void SetResourceIdentifierPrefix(const char* value) { m_resourceIdentifierPrefixHasBeenSet = true; m_resourceIdentifierPrefix.assign(value); }
    inline ListResourceTelemetryRequest& WithResourceIdentifierPrefix(const Aws::String& value) { SetResourceIdentifierPrefix(value); return *this;}
    inline ListResourceTelemetryRequest& WithResourceIdentifierPrefix(Aws::String&& value) { SetResourceIdentifierPrefix(std::move(value)); return *this;}
    inline ListResourceTelemetryRequest& WithResourceIdentifierPrefix(const char* value) { SetResourceIdentifierPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of resource types used to filter resources supported by telemetry
     * config. If this parameter is provided, the resources will be returned in the
     * same order used in the request. </p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const{ return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    inline void SetResourceTypes(const Aws::Vector<ResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }
    inline void SetResourceTypes(Aws::Vector<ResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }
    inline ListResourceTelemetryRequest& WithResourceTypes(const Aws::Vector<ResourceType>& value) { SetResourceTypes(value); return *this;}
    inline ListResourceTelemetryRequest& WithResourceTypes(Aws::Vector<ResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}
    inline ListResourceTelemetryRequest& AddResourceTypes(const ResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    inline ListResourceTelemetryRequest& AddResourceTypes(ResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A key-value pair to filter resources based on the telemetry type and the
     * state of the telemetry configuration. The key is the telemetry type and the
     * value is the state. </p>
     */
    inline const Aws::Map<TelemetryType, TelemetryState>& GetTelemetryConfigurationState() const{ return m_telemetryConfigurationState; }
    inline bool TelemetryConfigurationStateHasBeenSet() const { return m_telemetryConfigurationStateHasBeenSet; }
    inline void SetTelemetryConfigurationState(const Aws::Map<TelemetryType, TelemetryState>& value) { m_telemetryConfigurationStateHasBeenSet = true; m_telemetryConfigurationState = value; }
    inline void SetTelemetryConfigurationState(Aws::Map<TelemetryType, TelemetryState>&& value) { m_telemetryConfigurationStateHasBeenSet = true; m_telemetryConfigurationState = std::move(value); }
    inline ListResourceTelemetryRequest& WithTelemetryConfigurationState(const Aws::Map<TelemetryType, TelemetryState>& value) { SetTelemetryConfigurationState(value); return *this;}
    inline ListResourceTelemetryRequest& WithTelemetryConfigurationState(Aws::Map<TelemetryType, TelemetryState>&& value) { SetTelemetryConfigurationState(std::move(value)); return *this;}
    inline ListResourceTelemetryRequest& AddTelemetryConfigurationState(const TelemetryType& key, const TelemetryState& value) { m_telemetryConfigurationStateHasBeenSet = true; m_telemetryConfigurationState.emplace(key, value); return *this; }
    inline ListResourceTelemetryRequest& AddTelemetryConfigurationState(TelemetryType&& key, const TelemetryState& value) { m_telemetryConfigurationStateHasBeenSet = true; m_telemetryConfigurationState.emplace(std::move(key), value); return *this; }
    inline ListResourceTelemetryRequest& AddTelemetryConfigurationState(const TelemetryType& key, TelemetryState&& value) { m_telemetryConfigurationStateHasBeenSet = true; m_telemetryConfigurationState.emplace(key, std::move(value)); return *this; }
    inline ListResourceTelemetryRequest& AddTelemetryConfigurationState(TelemetryType&& key, TelemetryState&& value) { m_telemetryConfigurationStateHasBeenSet = true; m_telemetryConfigurationState.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A key-value pair to filter resources based on tags associated with the
     * resource. For more information about tags, see <a
     * href="https://docs.aws.amazon.com/whitepapers/latest/tagging-best-practices/what-are-tags.html">What
     * are tags?</a> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceTags() const{ return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    inline void SetResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }
    inline void SetResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }
    inline ListResourceTelemetryRequest& WithResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceTags(value); return *this;}
    inline ListResourceTelemetryRequest& WithResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline ListResourceTelemetryRequest& AddResourceTags(const Aws::String& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }
    inline ListResourceTelemetryRequest& AddResourceTags(Aws::String&& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }
    inline ListResourceTelemetryRequest& AddResourceTags(const Aws::String& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }
    inline ListResourceTelemetryRequest& AddResourceTags(Aws::String&& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), std::move(value)); return *this; }
    inline ListResourceTelemetryRequest& AddResourceTags(const char* key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }
    inline ListResourceTelemetryRequest& AddResourceTags(Aws::String&& key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }
    inline ListResourceTelemetryRequest& AddResourceTags(const char* key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A number field used to limit the number of results within the returned list.
     * </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourceTelemetryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token for the next set of items to return. A previous call generates
     * this token. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListResourceTelemetryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceTelemetryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceTelemetryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceIdentifierPrefix;
    bool m_resourceIdentifierPrefixHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::Map<TelemetryType, TelemetryState> m_telemetryConfigurationState;
    bool m_telemetryConfigurationStateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
