/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateIpRestrictionRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateIpRestrictionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIpRestriction"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline UpdateIpRestrictionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline UpdateIpRestrictionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline UpdateIpRestrictionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIpRestrictionRuleMap() const{ return m_ipRestrictionRuleMap; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline bool IpRestrictionRuleMapHasBeenSet() const { return m_ipRestrictionRuleMapHasBeenSet; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline void SetIpRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap = value; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline void SetIpRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap = std::move(value); }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& WithIpRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { SetIpRestrictionRuleMap(value); return *this;}

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& WithIpRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { SetIpRestrictionRuleMap(std::move(value)); return *this;}

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(const Aws::String& key, const Aws::String& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(key, value); return *this; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(Aws::String&& key, const Aws::String& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(const Aws::String& key, Aws::String&& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(Aws::String&& key, Aws::String&& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(const char* key, Aws::String&& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(Aws::String&& key, const char* value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(const char* key, const char* value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(key, value); return *this; }


    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline UpdateIpRestrictionRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_ipRestrictionRuleMap;
    bool m_ipRestrictionRuleMapHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
