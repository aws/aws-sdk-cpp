/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ChangeAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/Replacement.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ResourceAttribute.h>
#include <aws/servicecatalog/model/ResourceChangeDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a resource change that will occur when a plan is
   * executed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ResourceChange">AWS
   * API Reference</a></p>
   */
  class ResourceChange
  {
  public:
    AWS_SERVICECATALOG_API ResourceChange() = default;
    AWS_SERVICECATALOG_API ResourceChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ResourceChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The change action.</p>
     */
    inline ChangeAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ChangeAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline ResourceChange& WithAction(ChangeAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource, as defined in the CloudFormation template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const { return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    template<typename LogicalResourceIdT = Aws::String>
    void SetLogicalResourceId(LogicalResourceIdT&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::forward<LogicalResourceIdT>(value); }
    template<typename LogicalResourceIdT = Aws::String>
    ResourceChange& WithLogicalResourceId(LogicalResourceIdT&& value) { SetLogicalResourceId(std::forward<LogicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource, if it was already created.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const { return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    template<typename PhysicalResourceIdT = Aws::String>
    void SetPhysicalResourceId(PhysicalResourceIdT&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::forward<PhysicalResourceIdT>(value); }
    template<typename PhysicalResourceIdT = Aws::String>
    ResourceChange& WithPhysicalResourceId(PhysicalResourceIdT&& value) { SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ResourceChange& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the change type is <code>Modify</code>, indicates whether the existing
     * resource is deleted and replaced with a new one.</p>
     */
    inline Replacement GetReplacement() const { return m_replacement; }
    inline bool ReplacementHasBeenSet() const { return m_replacementHasBeenSet; }
    inline void SetReplacement(Replacement value) { m_replacementHasBeenSet = true; m_replacement = value; }
    inline ResourceChange& WithReplacement(Replacement value) { SetReplacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change scope.</p>
     */
    inline const Aws::Vector<ResourceAttribute>& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::Vector<ResourceAttribute>>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::Vector<ResourceAttribute>>
    ResourceChange& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    inline ResourceChange& AddScope(ResourceAttribute value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the resource changes.</p>
     */
    inline const Aws::Vector<ResourceChangeDetail>& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::Vector<ResourceChangeDetail>>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::Vector<ResourceChangeDetail>>
    ResourceChange& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    template<typename DetailsT = ResourceChangeDetail>
    ResourceChange& AddDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details.emplace_back(std::forward<DetailsT>(value)); return *this; }
    ///@}
  private:

    ChangeAction m_action{ChangeAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Replacement m_replacement{Replacement::NOT_SET};
    bool m_replacementHasBeenSet = false;

    Aws::Vector<ResourceAttribute> m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<ResourceChangeDetail> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
