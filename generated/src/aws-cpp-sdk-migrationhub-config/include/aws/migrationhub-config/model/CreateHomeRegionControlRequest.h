/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/migrationhub-config/MigrationHubConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhub-config/model/Target.h>
#include <utility>

namespace Aws
{
namespace MigrationHubConfig
{
namespace Model
{

  /**
   */
  class CreateHomeRegionControlRequest : public MigrationHubConfigRequest
  {
  public:
    AWS_MIGRATIONHUBCONFIG_API CreateHomeRegionControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHomeRegionControl"; }

    AWS_MIGRATIONHUBCONFIG_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUBCONFIG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline CreateHomeRegionControlRequest& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline CreateHomeRegionControlRequest& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline CreateHomeRegionControlRequest& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}


    /**
     * <p>The account for which this command sets up a home region control. The
     * <code>Target</code> is always of type <code>ACCOUNT</code>.</p>
     */
    inline const Target& GetTarget() const{ return m_target; }

    /**
     * <p>The account for which this command sets up a home region control. The
     * <code>Target</code> is always of type <code>ACCOUNT</code>.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The account for which this command sets up a home region control. The
     * <code>Target</code> is always of type <code>ACCOUNT</code>.</p>
     */
    inline void SetTarget(const Target& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The account for which this command sets up a home region control. The
     * <code>Target</code> is always of type <code>ACCOUNT</code>.</p>
     */
    inline void SetTarget(Target&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The account for which this command sets up a home region control. The
     * <code>Target</code> is always of type <code>ACCOUNT</code>.</p>
     */
    inline CreateHomeRegionControlRequest& WithTarget(const Target& value) { SetTarget(value); return *this;}

    /**
     * <p>The account for which this command sets up a home region control. The
     * <code>Target</code> is always of type <code>ACCOUNT</code>.</p>
     */
    inline CreateHomeRegionControlRequest& WithTarget(Target&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>Optional Boolean flag to indicate whether any effect should take place. It
     * tests whether the caller has permission to make the call.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Optional Boolean flag to indicate whether any effect should take place. It
     * tests whether the caller has permission to make the call.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Optional Boolean flag to indicate whether any effect should take place. It
     * tests whether the caller has permission to make the call.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Optional Boolean flag to indicate whether any effect should take place. It
     * tests whether the caller has permission to make the call.</p>
     */
    inline CreateHomeRegionControlRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    Target m_target;
    bool m_targetHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
