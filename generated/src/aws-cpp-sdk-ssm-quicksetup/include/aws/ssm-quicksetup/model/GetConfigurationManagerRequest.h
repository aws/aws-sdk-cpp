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
  class GetConfigurationManagerRequest : public SSMQuickSetupRequest
  {
  public:
    AWS_SSMQUICKSETUP_API GetConfigurationManagerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConfigurationManager"; }

    AWS_SSMQUICKSETUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the configuration manager.</p>
     */
    inline const Aws::String& GetManagerArn() const{ return m_managerArn; }
    inline bool ManagerArnHasBeenSet() const { return m_managerArnHasBeenSet; }
    inline void SetManagerArn(const Aws::String& value) { m_managerArnHasBeenSet = true; m_managerArn = value; }
    inline void SetManagerArn(Aws::String&& value) { m_managerArnHasBeenSet = true; m_managerArn = std::move(value); }
    inline void SetManagerArn(const char* value) { m_managerArnHasBeenSet = true; m_managerArn.assign(value); }
    inline GetConfigurationManagerRequest& WithManagerArn(const Aws::String& value) { SetManagerArn(value); return *this;}
    inline GetConfigurationManagerRequest& WithManagerArn(Aws::String&& value) { SetManagerArn(std::move(value)); return *this;}
    inline GetConfigurationManagerRequest& WithManagerArn(const char* value) { SetManagerArn(value); return *this;}
    ///@}
  private:

    Aws::String m_managerArn;
    bool m_managerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
