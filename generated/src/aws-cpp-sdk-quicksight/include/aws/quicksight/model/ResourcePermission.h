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
    AWS_QUICKSIGHT_API ResourcePermission();
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
    inline const Aws::String& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }
    inline ResourcePermission& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}
    inline ResourcePermission& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}
    inline ResourcePermission& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM action to grant or revoke permissions on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline ResourcePermission& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}
    inline ResourcePermission& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}
    inline ResourcePermission& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline ResourcePermission& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    inline ResourcePermission& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
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
