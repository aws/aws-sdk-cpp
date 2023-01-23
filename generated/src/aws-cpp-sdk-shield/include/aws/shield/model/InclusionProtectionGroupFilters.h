/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/ProtectionGroupPattern.h>
#include <aws/shield/model/ProtectedResourceType.h>
#include <aws/shield/model/ProtectionGroupAggregation.h>
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
   * <p>Narrows the set of protection groups that the call retrieves. You can
   * retrieve a single protection group by its name and you can retrieve all
   * protection groups that are configured with a specific pattern, aggregation, or
   * resource type. You can provide up to one criteria per filter type. Shield
   * Advanced returns the protection groups that exactly match all of the search
   * criteria that you provide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/InclusionProtectionGroupFilters">AWS
   * API Reference</a></p>
   */
  class InclusionProtectionGroupFilters
  {
  public:
    AWS_SHIELD_API InclusionProtectionGroupFilters();
    AWS_SHIELD_API InclusionProtectionGroupFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API InclusionProtectionGroupFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the protection group that you want to retrieve. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProtectionGroupIds() const{ return m_protectionGroupIds; }

    /**
     * <p>The ID of the protection group that you want to retrieve. </p>
     */
    inline bool ProtectionGroupIdsHasBeenSet() const { return m_protectionGroupIdsHasBeenSet; }

    /**
     * <p>The ID of the protection group that you want to retrieve. </p>
     */
    inline void SetProtectionGroupIds(const Aws::Vector<Aws::String>& value) { m_protectionGroupIdsHasBeenSet = true; m_protectionGroupIds = value; }

    /**
     * <p>The ID of the protection group that you want to retrieve. </p>
     */
    inline void SetProtectionGroupIds(Aws::Vector<Aws::String>&& value) { m_protectionGroupIdsHasBeenSet = true; m_protectionGroupIds = std::move(value); }

    /**
     * <p>The ID of the protection group that you want to retrieve. </p>
     */
    inline InclusionProtectionGroupFilters& WithProtectionGroupIds(const Aws::Vector<Aws::String>& value) { SetProtectionGroupIds(value); return *this;}

    /**
     * <p>The ID of the protection group that you want to retrieve. </p>
     */
    inline InclusionProtectionGroupFilters& WithProtectionGroupIds(Aws::Vector<Aws::String>&& value) { SetProtectionGroupIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the protection group that you want to retrieve. </p>
     */
    inline InclusionProtectionGroupFilters& AddProtectionGroupIds(const Aws::String& value) { m_protectionGroupIdsHasBeenSet = true; m_protectionGroupIds.push_back(value); return *this; }

    /**
     * <p>The ID of the protection group that you want to retrieve. </p>
     */
    inline InclusionProtectionGroupFilters& AddProtectionGroupIds(Aws::String&& value) { m_protectionGroupIdsHasBeenSet = true; m_protectionGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the protection group that you want to retrieve. </p>
     */
    inline InclusionProtectionGroupFilters& AddProtectionGroupIds(const char* value) { m_protectionGroupIdsHasBeenSet = true; m_protectionGroupIds.push_back(value); return *this; }


    /**
     * <p>The pattern specification of the protection groups that you want to retrieve.
     * </p>
     */
    inline const Aws::Vector<ProtectionGroupPattern>& GetPatterns() const{ return m_patterns; }

    /**
     * <p>The pattern specification of the protection groups that you want to retrieve.
     * </p>
     */
    inline bool PatternsHasBeenSet() const { return m_patternsHasBeenSet; }

    /**
     * <p>The pattern specification of the protection groups that you want to retrieve.
     * </p>
     */
    inline void SetPatterns(const Aws::Vector<ProtectionGroupPattern>& value) { m_patternsHasBeenSet = true; m_patterns = value; }

    /**
     * <p>The pattern specification of the protection groups that you want to retrieve.
     * </p>
     */
    inline void SetPatterns(Aws::Vector<ProtectionGroupPattern>&& value) { m_patternsHasBeenSet = true; m_patterns = std::move(value); }

    /**
     * <p>The pattern specification of the protection groups that you want to retrieve.
     * </p>
     */
    inline InclusionProtectionGroupFilters& WithPatterns(const Aws::Vector<ProtectionGroupPattern>& value) { SetPatterns(value); return *this;}

    /**
     * <p>The pattern specification of the protection groups that you want to retrieve.
     * </p>
     */
    inline InclusionProtectionGroupFilters& WithPatterns(Aws::Vector<ProtectionGroupPattern>&& value) { SetPatterns(std::move(value)); return *this;}

    /**
     * <p>The pattern specification of the protection groups that you want to retrieve.
     * </p>
     */
    inline InclusionProtectionGroupFilters& AddPatterns(const ProtectionGroupPattern& value) { m_patternsHasBeenSet = true; m_patterns.push_back(value); return *this; }

    /**
     * <p>The pattern specification of the protection groups that you want to retrieve.
     * </p>
     */
    inline InclusionProtectionGroupFilters& AddPatterns(ProtectionGroupPattern&& value) { m_patternsHasBeenSet = true; m_patterns.push_back(std::move(value)); return *this; }


    /**
     * <p>The resource type configuration of the protection groups that you want to
     * retrieve. In the protection group configuration, you specify the resource type
     * when you set the group's <code>Pattern</code> to <code>BY_RESOURCE_TYPE</code>.
     * </p>
     */
    inline const Aws::Vector<ProtectedResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The resource type configuration of the protection groups that you want to
     * retrieve. In the protection group configuration, you specify the resource type
     * when you set the group's <code>Pattern</code> to <code>BY_RESOURCE_TYPE</code>.
     * </p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>The resource type configuration of the protection groups that you want to
     * retrieve. In the protection group configuration, you specify the resource type
     * when you set the group's <code>Pattern</code> to <code>BY_RESOURCE_TYPE</code>.
     * </p>
     */
    inline void SetResourceTypes(const Aws::Vector<ProtectedResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The resource type configuration of the protection groups that you want to
     * retrieve. In the protection group configuration, you specify the resource type
     * when you set the group's <code>Pattern</code> to <code>BY_RESOURCE_TYPE</code>.
     * </p>
     */
    inline void SetResourceTypes(Aws::Vector<ProtectedResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>The resource type configuration of the protection groups that you want to
     * retrieve. In the protection group configuration, you specify the resource type
     * when you set the group's <code>Pattern</code> to <code>BY_RESOURCE_TYPE</code>.
     * </p>
     */
    inline InclusionProtectionGroupFilters& WithResourceTypes(const Aws::Vector<ProtectedResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The resource type configuration of the protection groups that you want to
     * retrieve. In the protection group configuration, you specify the resource type
     * when you set the group's <code>Pattern</code> to <code>BY_RESOURCE_TYPE</code>.
     * </p>
     */
    inline InclusionProtectionGroupFilters& WithResourceTypes(Aws::Vector<ProtectedResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The resource type configuration of the protection groups that you want to
     * retrieve. In the protection group configuration, you specify the resource type
     * when you set the group's <code>Pattern</code> to <code>BY_RESOURCE_TYPE</code>.
     * </p>
     */
    inline InclusionProtectionGroupFilters& AddResourceTypes(const ProtectedResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The resource type configuration of the protection groups that you want to
     * retrieve. In the protection group configuration, you specify the resource type
     * when you set the group's <code>Pattern</code> to <code>BY_RESOURCE_TYPE</code>.
     * </p>
     */
    inline InclusionProtectionGroupFilters& AddResourceTypes(ProtectedResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The aggregation setting of the protection groups that you want to retrieve.
     * </p>
     */
    inline const Aws::Vector<ProtectionGroupAggregation>& GetAggregations() const{ return m_aggregations; }

    /**
     * <p>The aggregation setting of the protection groups that you want to retrieve.
     * </p>
     */
    inline bool AggregationsHasBeenSet() const { return m_aggregationsHasBeenSet; }

    /**
     * <p>The aggregation setting of the protection groups that you want to retrieve.
     * </p>
     */
    inline void SetAggregations(const Aws::Vector<ProtectionGroupAggregation>& value) { m_aggregationsHasBeenSet = true; m_aggregations = value; }

    /**
     * <p>The aggregation setting of the protection groups that you want to retrieve.
     * </p>
     */
    inline void SetAggregations(Aws::Vector<ProtectionGroupAggregation>&& value) { m_aggregationsHasBeenSet = true; m_aggregations = std::move(value); }

    /**
     * <p>The aggregation setting of the protection groups that you want to retrieve.
     * </p>
     */
    inline InclusionProtectionGroupFilters& WithAggregations(const Aws::Vector<ProtectionGroupAggregation>& value) { SetAggregations(value); return *this;}

    /**
     * <p>The aggregation setting of the protection groups that you want to retrieve.
     * </p>
     */
    inline InclusionProtectionGroupFilters& WithAggregations(Aws::Vector<ProtectionGroupAggregation>&& value) { SetAggregations(std::move(value)); return *this;}

    /**
     * <p>The aggregation setting of the protection groups that you want to retrieve.
     * </p>
     */
    inline InclusionProtectionGroupFilters& AddAggregations(const ProtectionGroupAggregation& value) { m_aggregationsHasBeenSet = true; m_aggregations.push_back(value); return *this; }

    /**
     * <p>The aggregation setting of the protection groups that you want to retrieve.
     * </p>
     */
    inline InclusionProtectionGroupFilters& AddAggregations(ProtectionGroupAggregation&& value) { m_aggregationsHasBeenSet = true; m_aggregations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_protectionGroupIds;
    bool m_protectionGroupIdsHasBeenSet = false;

    Aws::Vector<ProtectionGroupPattern> m_patterns;
    bool m_patternsHasBeenSet = false;

    Aws::Vector<ProtectedResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::Vector<ProtectionGroupAggregation> m_aggregations;
    bool m_aggregationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
