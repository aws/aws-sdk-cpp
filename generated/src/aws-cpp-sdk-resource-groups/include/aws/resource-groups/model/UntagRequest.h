/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class UntagRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API UntagRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Untag"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the resource group from which to remove tags. The command removed
     * both the specified keys and any values associated with those keys.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the resource group from which to remove tags. The command removed
     * both the specified keys and any values associated with those keys.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the resource group from which to remove tags. The command removed
     * both the specified keys and any values associated with those keys.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the resource group from which to remove tags. The command removed
     * both the specified keys and any values associated with those keys.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the resource group from which to remove tags. The command removed
     * both the specified keys and any values associated with those keys.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the resource group from which to remove tags. The command removed
     * both the specified keys and any values associated with those keys.</p>
     */
    inline UntagRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the resource group from which to remove tags. The command removed
     * both the specified keys and any values associated with those keys.</p>
     */
    inline UntagRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource group from which to remove tags. The command removed
     * both the specified keys and any values associated with those keys.</p>
     */
    inline UntagRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const{ return m_keys; }

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline void SetKeys(const Aws::Vector<Aws::String>& value) { m_keysHasBeenSet = true; m_keys = value; }

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline void SetKeys(Aws::Vector<Aws::String>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline UntagRequest& WithKeys(const Aws::Vector<Aws::String>& value) { SetKeys(value); return *this;}

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline UntagRequest& WithKeys(Aws::Vector<Aws::String>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline UntagRequest& AddKeys(const Aws::String& value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline UntagRequest& AddKeys(Aws::String&& value) { m_keysHasBeenSet = true; m_keys.push_back(std::move(value)); return *this; }

    /**
     * <p>The keys of the tags to be removed.</p>
     */
    inline UntagRequest& AddKeys(const char* value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_keys;
    bool m_keysHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
