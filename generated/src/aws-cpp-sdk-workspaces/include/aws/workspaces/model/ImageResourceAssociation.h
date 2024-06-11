/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ImageAssociatedResourceType.h>
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
   * <p>Describes the association between an application and an image
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImageResourceAssociation">AWS
   * API Reference</a></p>
   */
  class ImageResourceAssociation
  {
  public:
    AWS_WORKSPACES_API ImageResourceAssociation();
    AWS_WORKSPACES_API ImageResourceAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ImageResourceAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ImageResourceAssociation& WithAssociatedResourceId(const Aws::String& value) { SetAssociatedResourceId(value); return *this;}
    inline ImageResourceAssociation& WithAssociatedResourceId(Aws::String&& value) { SetAssociatedResourceId(std::move(value)); return *this;}
    inline ImageResourceAssociation& WithAssociatedResourceId(const char* value) { SetAssociatedResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the associated resources.</p>
     */
    inline const ImageAssociatedResourceType& GetAssociatedResourceType() const{ return m_associatedResourceType; }
    inline bool AssociatedResourceTypeHasBeenSet() const { return m_associatedResourceTypeHasBeenSet; }
    inline void SetAssociatedResourceType(const ImageAssociatedResourceType& value) { m_associatedResourceTypeHasBeenSet = true; m_associatedResourceType = value; }
    inline void SetAssociatedResourceType(ImageAssociatedResourceType&& value) { m_associatedResourceTypeHasBeenSet = true; m_associatedResourceType = std::move(value); }
    inline ImageResourceAssociation& WithAssociatedResourceType(const ImageAssociatedResourceType& value) { SetAssociatedResourceType(value); return *this;}
    inline ImageResourceAssociation& WithAssociatedResourceType(ImageAssociatedResourceType&& value) { SetAssociatedResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the association is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline ImageResourceAssociation& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline ImageResourceAssociation& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the association status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline ImageResourceAssociation& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline ImageResourceAssociation& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline ImageResourceAssociation& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline ImageResourceAssociation& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline ImageResourceAssociation& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the image resource association.</p>
     */
    inline const AssociationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const AssociationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(AssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ImageResourceAssociation& WithState(const AssociationState& value) { SetState(value); return *this;}
    inline ImageResourceAssociation& WithState(AssociationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the association deployment failed.</p>
     */
    inline const AssociationStateReason& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const AssociationStateReason& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(AssociationStateReason&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline ImageResourceAssociation& WithStateReason(const AssociationStateReason& value) { SetStateReason(value); return *this;}
    inline ImageResourceAssociation& WithStateReason(AssociationStateReason&& value) { SetStateReason(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_associatedResourceId;
    bool m_associatedResourceIdHasBeenSet = false;

    ImageAssociatedResourceType m_associatedResourceType;
    bool m_associatedResourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    AssociationState m_state;
    bool m_stateHasBeenSet = false;

    AssociationStateReason m_stateReason;
    bool m_stateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
