/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/migrationhub-config/MigrationHubConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MigrationHubConfig
{
namespace Model
{

  /**
   */
  class DeleteHomeRegionControlRequest : public MigrationHubConfigRequest
  {
  public:
    AWS_MIGRATIONHUBCONFIG_API DeleteHomeRegionControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHomeRegionControl"; }

    AWS_MIGRATIONHUBCONFIG_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUBCONFIG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline const Aws::String& GetControlId() const{ return m_controlId; }

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline void SetControlId(const Aws::String& value) { m_controlIdHasBeenSet = true; m_controlId = value; }

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline void SetControlId(Aws::String&& value) { m_controlIdHasBeenSet = true; m_controlId = std::move(value); }

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline void SetControlId(const char* value) { m_controlIdHasBeenSet = true; m_controlId.assign(value); }

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline DeleteHomeRegionControlRequest& WithControlId(const Aws::String& value) { SetControlId(value); return *this;}

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline DeleteHomeRegionControlRequest& WithControlId(Aws::String&& value) { SetControlId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that's generated for each home region control. It's
     * always a string that begins with "hrc-" followed by 12 lowercase letters and
     * numbers.</p>
     */
    inline DeleteHomeRegionControlRequest& WithControlId(const char* value) { SetControlId(value); return *this;}

  private:

    Aws::String m_controlId;
    bool m_controlIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
