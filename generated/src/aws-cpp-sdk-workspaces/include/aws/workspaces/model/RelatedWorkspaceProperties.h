/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceState.h>
#include <aws/workspaces/model/StandbyWorkspaceRelationshipType.h>
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
   * <p>Describes the related WorkSpace. The related WorkSpace could be a standby
   * WorkSpace or primary WorkSpace related to the specified WorkSpace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RelatedWorkspaceProperties">AWS
   * API Reference</a></p>
   */
  class RelatedWorkspaceProperties
  {
  public:
    AWS_WORKSPACES_API RelatedWorkspaceProperties() = default;
    AWS_WORKSPACES_API RelatedWorkspaceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API RelatedWorkspaceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the related WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    RelatedWorkspaceProperties& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region of the related WorkSpace.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    RelatedWorkspaceProperties& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the state of the WorkSpace.</p>
     */
    inline WorkspaceState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(WorkspaceState value) { m_stateHasBeenSet = true; m_state = value; }
    inline RelatedWorkspaceProperties& WithState(WorkspaceState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of WorkSpace.</p>
     */
    inline StandbyWorkspaceRelationshipType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(StandbyWorkspaceRelationshipType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RelatedWorkspaceProperties& WithType(StandbyWorkspaceRelationshipType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    WorkspaceState m_state{WorkspaceState::NOT_SET};
    bool m_stateHasBeenSet = false;

    StandbyWorkspaceRelationshipType m_type{StandbyWorkspaceRelationshipType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
