﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/ControlFindingGenerator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class EnableSecurityHubRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API EnableSecurityHubRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableSecurityHub"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The tags to add to the hub resource when you enable Security Hub.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline EnableSecurityHubRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline EnableSecurityHubRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline EnableSecurityHubRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline EnableSecurityHubRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline EnableSecurityHubRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline EnableSecurityHubRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline EnableSecurityHubRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline EnableSecurityHubRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline EnableSecurityHubRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to enable the security standards that Security Hub has designated as
     * automatically enabled. If you do not provide a value for
     * <code>EnableDefaultStandards</code>, it is set to <code>true</code>. To not
     * enable the automatically enabled standards, set
     * <code>EnableDefaultStandards</code> to <code>false</code>.</p>
     */
    inline bool GetEnableDefaultStandards() const{ return m_enableDefaultStandards; }
    inline bool EnableDefaultStandardsHasBeenSet() const { return m_enableDefaultStandardsHasBeenSet; }
    inline void SetEnableDefaultStandards(bool value) { m_enableDefaultStandardsHasBeenSet = true; m_enableDefaultStandards = value; }
    inline EnableSecurityHubRequest& WithEnableDefaultStandards(bool value) { SetEnableDefaultStandards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field, used when enabling Security Hub, specifies whether the calling
     * account has consolidated control findings turned on. If the value for this field
     * is set to <code>SECURITY_CONTROL</code>, Security Hub generates a single finding
     * for a control check even when the check applies to multiple enabled
     * standards.</p> <p>If the value for this field is set to
     * <code>STANDARD_CONTROL</code>, Security Hub generates separate findings for a
     * control check when the check applies to multiple enabled standards.</p> <p>The
     * value for this field in a member account matches the value in the administrator
     * account. For accounts that aren't part of an organization, the default value of
     * this field is <code>SECURITY_CONTROL</code> if you enabled Security Hub on or
     * after February 23, 2023.</p>
     */
    inline const ControlFindingGenerator& GetControlFindingGenerator() const{ return m_controlFindingGenerator; }
    inline bool ControlFindingGeneratorHasBeenSet() const { return m_controlFindingGeneratorHasBeenSet; }
    inline void SetControlFindingGenerator(const ControlFindingGenerator& value) { m_controlFindingGeneratorHasBeenSet = true; m_controlFindingGenerator = value; }
    inline void SetControlFindingGenerator(ControlFindingGenerator&& value) { m_controlFindingGeneratorHasBeenSet = true; m_controlFindingGenerator = std::move(value); }
    inline EnableSecurityHubRequest& WithControlFindingGenerator(const ControlFindingGenerator& value) { SetControlFindingGenerator(value); return *this;}
    inline EnableSecurityHubRequest& WithControlFindingGenerator(ControlFindingGenerator&& value) { SetControlFindingGenerator(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_enableDefaultStandards;
    bool m_enableDefaultStandardsHasBeenSet = false;

    ControlFindingGenerator m_controlFindingGenerator;
    bool m_controlFindingGeneratorHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
