/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Permission for the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ResourcePermission">AWS
   * API Reference</a></p>
   */
  class ResourcePermission
  {
  public:
    AWS_QUICKSIGHT_API ResourcePermission() = default;
    AWS_QUICKSIGHT_API ResourcePermission(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ResourcePermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the principal. This can be one of the
     * following:</p> <ul> <li> <p>The ARN of an Amazon QuickSight user or group
     * associated with a data source or dataset. (This is common.)</p> </li> <li>
     * <p>The ARN of an Amazon QuickSight user, group, or namespace associated with an
     * analysis, dashboard, template, or theme. (This is common.)</p> </li> <li> <p>The
     * ARN of an Amazon Web Services account root: This is an IAM ARN rather than a
     * QuickSight ARN. Use this option only to share resources (templates) across
     * Amazon Web Services accounts. (This is less common.) </p> </li> </ul>
     */
    inline const Aws::String& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::String>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::String>
    ResourcePermission& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM action to grant or revoke permissions on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<Aws::String>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<Aws::String>>
    ResourcePermission& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Aws::String>
    ResourcePermission& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
