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
    AWS_WORKSPACES_API WorkSpaceApplicationDeployment();
    AWS_WORKSPACES_API WorkSpaceApplicationDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkSpaceApplicationDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The associations between the applications and the associated resources.</p>
     */
    inline const Aws::Vector<WorkspaceResourceAssociation>& GetAssociations() const{ return m_associations; }

    /**
     * <p>The associations between the applications and the associated resources.</p>
     */
    inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }

    /**
     * <p>The associations between the applications and the associated resources.</p>
     */
    inline void SetAssociations(const Aws::Vector<WorkspaceResourceAssociation>& value) { m_associationsHasBeenSet = true; m_associations = value; }

    /**
     * <p>The associations between the applications and the associated resources.</p>
     */
    inline void SetAssociations(Aws::Vector<WorkspaceResourceAssociation>&& value) { m_associationsHasBeenSet = true; m_associations = std::move(value); }

    /**
     * <p>The associations between the applications and the associated resources.</p>
     */
    inline WorkSpaceApplicationDeployment& WithAssociations(const Aws::Vector<WorkspaceResourceAssociation>& value) { SetAssociations(value); return *this;}

    /**
     * <p>The associations between the applications and the associated resources.</p>
     */
    inline WorkSpaceApplicationDeployment& WithAssociations(Aws::Vector<WorkspaceResourceAssociation>&& value) { SetAssociations(std::move(value)); return *this;}

    /**
     * <p>The associations between the applications and the associated resources.</p>
     */
    inline WorkSpaceApplicationDeployment& AddAssociations(const WorkspaceResourceAssociation& value) { m_associationsHasBeenSet = true; m_associations.push_back(value); return *this; }

    /**
     * <p>The associations between the applications and the associated resources.</p>
     */
    inline WorkSpaceApplicationDeployment& AddAssociations(WorkspaceResourceAssociation&& value) { m_associationsHasBeenSet = true; m_associations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<WorkspaceResourceAssociation> m_associations;
    bool m_associationsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
