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
    AWS_SERVICECATALOG_API ResourceChange();
    AWS_SERVICECATALOG_API ResourceChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ResourceChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The change action.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline ResourceChange& WithAction(const ChangeAction& value) { SetAction(value); return *this;}
    inline ResourceChange& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource, as defined in the CloudFormation template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }
    inline ResourceChange& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}
    inline ResourceChange& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}
    inline ResourceChange& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource, if it was already created.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }
    inline ResourceChange& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}
    inline ResourceChange& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(std::move(value)); return *this;}
    inline ResourceChange& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ResourceChange& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ResourceChange& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ResourceChange& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the change type is <code>Modify</code>, indicates whether the existing
     * resource is deleted and replaced with a new one.</p>
     */
    inline const Replacement& GetReplacement() const{ return m_replacement; }
    inline bool ReplacementHasBeenSet() const { return m_replacementHasBeenSet; }
    inline void SetReplacement(const Replacement& value) { m_replacementHasBeenSet = true; m_replacement = value; }
    inline void SetReplacement(Replacement&& value) { m_replacementHasBeenSet = true; m_replacement = std::move(value); }
    inline ResourceChange& WithReplacement(const Replacement& value) { SetReplacement(value); return *this;}
    inline ResourceChange& WithReplacement(Replacement&& value) { SetReplacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change scope.</p>
     */
    inline const Aws::Vector<ResourceAttribute>& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Aws::Vector<ResourceAttribute>& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Aws::Vector<ResourceAttribute>&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline ResourceChange& WithScope(const Aws::Vector<ResourceAttribute>& value) { SetScope(value); return *this;}
    inline ResourceChange& WithScope(Aws::Vector<ResourceAttribute>&& value) { SetScope(std::move(value)); return *this;}
    inline ResourceChange& AddScope(const ResourceAttribute& value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }
    inline ResourceChange& AddScope(ResourceAttribute&& value) { m_scopeHasBeenSet = true; m_scope.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the resource changes.</p>
     */
    inline const Aws::Vector<ResourceChangeDetail>& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::Vector<ResourceChangeDetail>& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::Vector<ResourceChangeDetail>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline ResourceChange& WithDetails(const Aws::Vector<ResourceChangeDetail>& value) { SetDetails(value); return *this;}
    inline ResourceChange& WithDetails(Aws::Vector<ResourceChangeDetail>&& value) { SetDetails(std::move(value)); return *this;}
    inline ResourceChange& AddDetails(const ResourceChangeDetail& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }
    inline ResourceChange& AddDetails(ResourceChangeDetail&& value) { m_detailsHasBeenSet = true; m_details.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Replacement m_replacement;
    bool m_replacementHasBeenSet = false;

    Aws::Vector<ResourceAttribute> m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<ResourceChangeDetail> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
