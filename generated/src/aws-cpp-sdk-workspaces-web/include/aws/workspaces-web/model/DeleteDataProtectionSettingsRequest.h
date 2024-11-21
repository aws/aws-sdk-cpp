/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class DeleteDataProtectionSettingsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API DeleteDataProtectionSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataProtectionSettings"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the data protection settings.</p>
     */
    inline const Aws::String& GetDataProtectionSettingsArn() const{ return m_dataProtectionSettingsArn; }
    inline bool DataProtectionSettingsArnHasBeenSet() const { return m_dataProtectionSettingsArnHasBeenSet; }
    inline void SetDataProtectionSettingsArn(const Aws::String& value) { m_dataProtectionSettingsArnHasBeenSet = true; m_dataProtectionSettingsArn = value; }
    inline void SetDataProtectionSettingsArn(Aws::String&& value) { m_dataProtectionSettingsArnHasBeenSet = true; m_dataProtectionSettingsArn = std::move(value); }
    inline void SetDataProtectionSettingsArn(const char* value) { m_dataProtectionSettingsArnHasBeenSet = true; m_dataProtectionSettingsArn.assign(value); }
    inline DeleteDataProtectionSettingsRequest& WithDataProtectionSettingsArn(const Aws::String& value) { SetDataProtectionSettingsArn(value); return *this;}
    inline DeleteDataProtectionSettingsRequest& WithDataProtectionSettingsArn(Aws::String&& value) { SetDataProtectionSettingsArn(std::move(value)); return *this;}
    inline DeleteDataProtectionSettingsRequest& WithDataProtectionSettingsArn(const char* value) { SetDataProtectionSettingsArn(value); return *this;}
    ///@}
  private:

    Aws::String m_dataProtectionSettingsArn;
    bool m_dataProtectionSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
