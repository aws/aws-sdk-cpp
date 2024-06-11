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
    AWS_WORKSPACES_API RelatedWorkspaceProperties();
    AWS_WORKSPACES_API RelatedWorkspaceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API RelatedWorkspaceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the related WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline RelatedWorkspaceProperties& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline RelatedWorkspaceProperties& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline RelatedWorkspaceProperties& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region of the related WorkSpace.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline RelatedWorkspaceProperties& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline RelatedWorkspaceProperties& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline RelatedWorkspaceProperties& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the state of the WorkSpace.</p>
     */
    inline const WorkspaceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const WorkspaceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(WorkspaceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline RelatedWorkspaceProperties& WithState(const WorkspaceState& value) { SetState(value); return *this;}
    inline RelatedWorkspaceProperties& WithState(WorkspaceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of WorkSpace.</p>
     */
    inline const StandbyWorkspaceRelationshipType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const StandbyWorkspaceRelationshipType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(StandbyWorkspaceRelationshipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RelatedWorkspaceProperties& WithType(const StandbyWorkspaceRelationshipType& value) { SetType(value); return *this;}
    inline RelatedWorkspaceProperties& WithType(StandbyWorkspaceRelationshipType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    WorkspaceState m_state;
    bool m_stateHasBeenSet = false;

    StandbyWorkspaceRelationshipType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
