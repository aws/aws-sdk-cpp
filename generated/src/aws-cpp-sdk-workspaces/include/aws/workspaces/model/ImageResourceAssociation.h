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
    AWS_WORKSPACES_API ImageResourceAssociation() = default;
    AWS_WORKSPACES_API ImageResourceAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ImageResourceAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the associated resource.</p>
     */
    inline const Aws::String& GetAssociatedResourceId() const { return m_associatedResourceId; }
    inline bool AssociatedResourceIdHasBeenSet() const { return m_associatedResourceIdHasBeenSet; }
    template<typename AssociatedResourceIdT = Aws::String>
    void SetAssociatedResourceId(AssociatedResourceIdT&& value) { m_associatedResourceIdHasBeenSet = true; m_associatedResourceId = std::forward<AssociatedResourceIdT>(value); }
    template<typename AssociatedResourceIdT = Aws::String>
    ImageResourceAssociation& WithAssociatedResourceId(AssociatedResourceIdT&& value) { SetAssociatedResourceId(std::forward<AssociatedResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the associated resources.</p>
     */
    inline ImageAssociatedResourceType GetAssociatedResourceType() const { return m_associatedResourceType; }
    inline bool AssociatedResourceTypeHasBeenSet() const { return m_associatedResourceTypeHasBeenSet; }
    inline void SetAssociatedResourceType(ImageAssociatedResourceType value) { m_associatedResourceTypeHasBeenSet = true; m_associatedResourceType = value; }
    inline ImageResourceAssociation& WithAssociatedResourceType(ImageAssociatedResourceType value) { SetAssociatedResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the association is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    ImageResourceAssociation& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the association status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ImageResourceAssociation& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the image.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ImageResourceAssociation& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the image resource association.</p>
     */
    inline AssociationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AssociationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ImageResourceAssociation& WithState(AssociationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the association deployment failed.</p>
     */
    inline const AssociationStateReason& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = AssociationStateReason>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = AssociationStateReason>
    ImageResourceAssociation& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_associatedResourceId;
    bool m_associatedResourceIdHasBeenSet = false;

    ImageAssociatedResourceType m_associatedResourceType{ImageAssociatedResourceType::NOT_SET};
    bool m_associatedResourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    AssociationState m_state{AssociationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    AssociationStateReason m_stateReason;
    bool m_stateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
