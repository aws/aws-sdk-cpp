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
    AWS_SHIELD_API InclusionProtectionGroupFilters() = default;
    AWS_SHIELD_API InclusionProtectionGroupFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API InclusionProtectionGroupFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the protection group that you want to retrieve. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProtectionGroupIds() const { return m_protectionGroupIds; }
    inline bool ProtectionGroupIdsHasBeenSet() const { return m_protectionGroupIdsHasBeenSet; }
    template<typename ProtectionGroupIdsT = Aws::Vector<Aws::String>>
    void SetProtectionGroupIds(ProtectionGroupIdsT&& value) { m_protectionGroupIdsHasBeenSet = true; m_protectionGroupIds = std::forward<ProtectionGroupIdsT>(value); }
    template<typename ProtectionGroupIdsT = Aws::Vector<Aws::String>>
    InclusionProtectionGroupFilters& WithProtectionGroupIds(ProtectionGroupIdsT&& value) { SetProtectionGroupIds(std::forward<ProtectionGroupIdsT>(value)); return *this;}
    template<typename ProtectionGroupIdsT = Aws::String>
    InclusionProtectionGroupFilters& AddProtectionGroupIds(ProtectionGroupIdsT&& value) { m_protectionGroupIdsHasBeenSet = true; m_protectionGroupIds.emplace_back(std::forward<ProtectionGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pattern specification of the protection groups that you want to retrieve.
     * </p>
     */
    inline const Aws::Vector<ProtectionGroupPattern>& GetPatterns() const { return m_patterns; }
    inline bool PatternsHasBeenSet() const { return m_patternsHasBeenSet; }
    template<typename PatternsT = Aws::Vector<ProtectionGroupPattern>>
    void SetPatterns(PatternsT&& value) { m_patternsHasBeenSet = true; m_patterns = std::forward<PatternsT>(value); }
    template<typename PatternsT = Aws::Vector<ProtectionGroupPattern>>
    InclusionProtectionGroupFilters& WithPatterns(PatternsT&& value) { SetPatterns(std::forward<PatternsT>(value)); return *this;}
    inline InclusionProtectionGroupFilters& AddPatterns(ProtectionGroupPattern value) { m_patternsHasBeenSet = true; m_patterns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource type configuration of the protection groups that you want to
     * retrieve. In the protection group configuration, you specify the resource type
     * when you set the group's <code>Pattern</code> to <code>BY_RESOURCE_TYPE</code>.
     * </p>
     */
    inline const Aws::Vector<ProtectedResourceType>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<ProtectedResourceType>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<ProtectedResourceType>>
    InclusionProtectionGroupFilters& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    inline InclusionProtectionGroupFilters& AddResourceTypes(ProtectedResourceType value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aggregation setting of the protection groups that you want to retrieve.
     * </p>
     */
    inline const Aws::Vector<ProtectionGroupAggregation>& GetAggregations() const { return m_aggregations; }
    inline bool AggregationsHasBeenSet() const { return m_aggregationsHasBeenSet; }
    template<typename AggregationsT = Aws::Vector<ProtectionGroupAggregation>>
    void SetAggregations(AggregationsT&& value) { m_aggregationsHasBeenSet = true; m_aggregations = std::forward<AggregationsT>(value); }
    template<typename AggregationsT = Aws::Vector<ProtectionGroupAggregation>>
    InclusionProtectionGroupFilters& WithAggregations(AggregationsT&& value) { SetAggregations(std::forward<AggregationsT>(value)); return *this;}
    inline InclusionProtectionGroupFilters& AddAggregations(ProtectionGroupAggregation value) { m_aggregationsHasBeenSet = true; m_aggregations.push_back(value); return *this; }
    ///@}
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
