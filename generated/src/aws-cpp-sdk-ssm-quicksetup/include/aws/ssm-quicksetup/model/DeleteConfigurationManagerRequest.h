/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/ssm-quicksetup/SSMQuickSetupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSMQuickSetup
{
namespace Model
{

  /**
   */
  class DeleteConfigurationManagerRequest : public SSMQuickSetupRequest
  {
  public:
    AWS_SSMQUICKSETUP_API DeleteConfigurationManagerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConfigurationManager"; }

    AWS_SSMQUICKSETUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the configuration manager.</p>
     */
    inline const Aws::String& GetManagerArn() const { return m_managerArn; }
    inline bool ManagerArnHasBeenSet() const { return m_managerArnHasBeenSet; }
    template<typename ManagerArnT = Aws::String>
    void SetManagerArn(ManagerArnT&& value) { m_managerArnHasBeenSet = true; m_managerArn = std::forward<ManagerArnT>(value); }
    template<typename ManagerArnT = Aws::String>
    DeleteConfigurationManagerRequest& WithManagerArn(ManagerArnT&& value) { SetManagerArn(std::forward<ManagerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_managerArn;
    bool m_managerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
