/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeAppsRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeAppsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApps"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The app stack ID. If you use this parameter, <code>DescribeApps</code>
     * returns a description of the apps in the specified stack.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    DescribeAppsRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of app IDs for the apps to be described. If you use this parameter,
     * <code>DescribeApps</code> returns a description of the specified apps.
     * Otherwise, it returns a description of every app.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAppIds() const { return m_appIds; }
    inline bool AppIdsHasBeenSet() const { return m_appIdsHasBeenSet; }
    template<typename AppIdsT = Aws::Vector<Aws::String>>
    void SetAppIds(AppIdsT&& value) { m_appIdsHasBeenSet = true; m_appIds = std::forward<AppIdsT>(value); }
    template<typename AppIdsT = Aws::Vector<Aws::String>>
    DescribeAppsRequest& WithAppIds(AppIdsT&& value) { SetAppIds(std::forward<AppIdsT>(value)); return *this;}
    template<typename AppIdsT = Aws::String>
    DescribeAppsRequest& AddAppIds(AppIdsT&& value) { m_appIdsHasBeenSet = true; m_appIds.emplace_back(std::forward<AppIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_appIds;
    bool m_appIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
