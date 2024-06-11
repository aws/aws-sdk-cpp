/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A structure that contains the permissions for the resource that you want to
   * override in an asset bundle import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleResourcePermissions">AWS
   * API Reference</a></p>
   */
  class AssetBundleResourcePermissions
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleResourcePermissions();
    AWS_QUICKSIGHT_API AssetBundleResourcePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleResourcePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of principals to grant permissions on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principalsHasBeenSet = true; m_principals = value; }
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }
    inline AssetBundleResourcePermissions& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}
    inline AssetBundleResourcePermissions& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}
    inline AssetBundleResourcePermissions& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }
    inline AssetBundleResourcePermissions& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }
    inline AssetBundleResourcePermissions& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IAM actions to grant permissions on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline AssetBundleResourcePermissions& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}
    inline AssetBundleResourcePermissions& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}
    inline AssetBundleResourcePermissions& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline AssetBundleResourcePermissions& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    inline AssetBundleResourcePermissions& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
