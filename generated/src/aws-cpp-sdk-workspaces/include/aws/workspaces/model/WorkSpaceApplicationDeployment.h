/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/WorkspaceResourceAssociation.h>
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
   * <p>Describes the WorkSpace application deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkSpaceApplicationDeployment">AWS
   * API Reference</a></p>
   */
  class WorkSpaceApplicationDeployment
  {
  public:
    AWS_WORKSPACES_API WorkSpaceApplicationDeployment() = default;
    AWS_WORKSPACES_API WorkSpaceApplicationDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkSpaceApplicationDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The associations between the applications and the associated resources.</p>
     */
    inline const Aws::Vector<WorkspaceResourceAssociation>& GetAssociations() const { return m_associations; }
    inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }
    template<typename AssociationsT = Aws::Vector<WorkspaceResourceAssociation>>
    void SetAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations = std::forward<AssociationsT>(value); }
    template<typename AssociationsT = Aws::Vector<WorkspaceResourceAssociation>>
    WorkSpaceApplicationDeployment& WithAssociations(AssociationsT&& value) { SetAssociations(std::forward<AssociationsT>(value)); return *this;}
    template<typename AssociationsT = WorkspaceResourceAssociation>
    WorkSpaceApplicationDeployment& AddAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations.emplace_back(std::forward<AssociationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<WorkspaceResourceAssociation> m_associations;
    bool m_associationsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
