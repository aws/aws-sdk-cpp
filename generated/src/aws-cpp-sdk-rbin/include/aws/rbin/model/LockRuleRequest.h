/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/rbin/RecycleBinRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/model/LockConfiguration.h>
#include <utility>

namespace Aws
{
namespace RecycleBin
{
namespace Model
{

  /**
   */
  class LockRuleRequest : public RecycleBinRequest
  {
  public:
    AWS_RECYCLEBIN_API LockRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "LockRule"; }

    AWS_RECYCLEBIN_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline LockRuleRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline LockRuleRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline LockRuleRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline const LockConfiguration& GetLockConfiguration() const{ return m_lockConfiguration; }

    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline bool LockConfigurationHasBeenSet() const { return m_lockConfigurationHasBeenSet; }

    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline void SetLockConfiguration(const LockConfiguration& value) { m_lockConfigurationHasBeenSet = true; m_lockConfiguration = value; }

    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline void SetLockConfiguration(LockConfiguration&& value) { m_lockConfigurationHasBeenSet = true; m_lockConfiguration = std::move(value); }

    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline LockRuleRequest& WithLockConfiguration(const LockConfiguration& value) { SetLockConfiguration(value); return *this;}

    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline LockRuleRequest& WithLockConfiguration(LockConfiguration&& value) { SetLockConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    LockConfiguration m_lockConfiguration;
    bool m_lockConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
