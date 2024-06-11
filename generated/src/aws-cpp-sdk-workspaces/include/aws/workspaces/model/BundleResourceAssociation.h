/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/BundleAssociatedResourceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workspaces/model/AssociationState.h>
#include <aws/workspaces/model/AssociationStateReason.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the association between an application and a bundle
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/BundleResourceAssociation">AWS
   * API Reference</a></p>
   */
  class BundleResourceAssociation
  {
  public:
    AWS_WORKSPACES_API BundleResourceAssociation();
    AWS_WORKSPACES_API BundleResourceAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API BundleResourceAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the associated resource.</p>
     */
    inline const Aws::String& GetAssociatedResourceId() const{ return m_associatedResourceId; }
    inline bool AssociatedResourceIdHasBeenSet() const { return m_associatedResourceIdHasBeenSet; }
    inline void SetAssociatedResourceId(const Aws::String& value) { m_associatedResourceIdHasBeenSet = true; m_associatedResourceId = value; }
    inline void SetAssociatedResourceId(Aws::String&& value) { m_associatedResourceIdHasBeenSet = true; m_associatedResourceId = std::move(value); }
    inline void SetAssociatedResourceId(const char* value) { m_associatedResourceIdHasBeenSet = true; m_associatedResourceId.assign(value); }
    inline BundleResourceAssociation& WithAssociatedResourceId(const Aws::String& value) { SetAssociatedResourceId(value); return *this;}
    inline BundleResourceAssociation& WithAssociatedResourceId(Aws::String&& value) { SetAssociatedResourceId(std::move(value)); return *this;}
    inline BundleResourceAssociation& WithAssociatedResourceId(const char* value) { SetAssociatedResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the associated resources.</p>
     */
    inline const BundleAssociatedResourceType& GetAssociatedResourceType() const{ return m_associatedResourceType; }
    inline bool AssociatedResourceTypeHasBeenSet() const { return m_associatedResourceTypeHasBeenSet; }
    inline void SetAssociatedResourceType(const BundleAssociatedResourceType& value) { m_associatedResourceTypeHasBeenSet = true; m_associatedResourceType = value; }
    inline void SetAssociatedResourceType(BundleAssociatedResourceType&& value) { m_associatedResourceTypeHasBeenSet = true; m_associatedResourceType = std::move(value); }
    inline BundleResourceAssociation& WithAssociatedResourceType(const BundleAssociatedResourceType& value) { SetAssociatedResourceType(value); return *this;}
    inline BundleResourceAssociation& WithAssociatedResourceType(BundleAssociatedResourceType&& value) { SetAssociatedResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bundle.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline BundleResourceAssociation& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline BundleResourceAssociation& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline BundleResourceAssociation& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the association is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline BundleResourceAssociation& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline BundleResourceAssociation& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the association status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline BundleResourceAssociation& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline BundleResourceAssociation& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the bundle resource association.</p>
     */
    inline const AssociationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const AssociationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(AssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline BundleResourceAssociation& WithState(const AssociationState& value) { SetState(value); return *this;}
    inline BundleResourceAssociation& WithState(AssociationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the association deployment failed.</p>
     */
    inline const AssociationStateReason& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const AssociationStateReason& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(AssociationStateReason&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline BundleResourceAssociation& WithStateReason(const AssociationStateReason& value) { SetStateReason(value); return *this;}
    inline BundleResourceAssociation& WithStateReason(AssociationStateReason&& value) { SetStateReason(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_associatedResourceId;
    bool m_associatedResourceIdHasBeenSet = false;

    BundleAssociatedResourceType m_associatedResourceType;
    bool m_associatedResourceTypeHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    AssociationState m_state;
    bool m_stateHasBeenSet = false;

    AssociationStateReason m_stateReason;
    bool m_stateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
