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
  class UpdateServiceSettingsRequest : public SSMQuickSetupRequest
  {
  public:
    AWS_SSMQUICKSETUP_API UpdateServiceSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceSettings"; }

    AWS_SSMQUICKSETUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The IAM role used to enable Explorer.</p>
     */
    inline const Aws::String& GetExplorerEnablingRoleArn() const{ return m_explorerEnablingRoleArn; }
    inline bool ExplorerEnablingRoleArnHasBeenSet() const { return m_explorerEnablingRoleArnHasBeenSet; }
    inline void SetExplorerEnablingRoleArn(const Aws::String& value) { m_explorerEnablingRoleArnHasBeenSet = true; m_explorerEnablingRoleArn = value; }
    inline void SetExplorerEnablingRoleArn(Aws::String&& value) { m_explorerEnablingRoleArnHasBeenSet = true; m_explorerEnablingRoleArn = std::move(value); }
    inline void SetExplorerEnablingRoleArn(const char* value) { m_explorerEnablingRoleArnHasBeenSet = true; m_explorerEnablingRoleArn.assign(value); }
    inline UpdateServiceSettingsRequest& WithExplorerEnablingRoleArn(const Aws::String& value) { SetExplorerEnablingRoleArn(value); return *this;}
    inline UpdateServiceSettingsRequest& WithExplorerEnablingRoleArn(Aws::String&& value) { SetExplorerEnablingRoleArn(std::move(value)); return *this;}
    inline UpdateServiceSettingsRequest& WithExplorerEnablingRoleArn(const char* value) { SetExplorerEnablingRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_explorerEnablingRoleArn;
    bool m_explorerEnablingRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
