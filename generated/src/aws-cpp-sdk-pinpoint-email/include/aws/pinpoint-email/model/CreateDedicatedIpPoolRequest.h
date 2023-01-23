/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/Tag.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to create a new dedicated IP pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateDedicatedIpPoolRequest">AWS
   * API Reference</a></p>
   */
  class CreateDedicatedIpPoolRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API CreateDedicatedIpPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDedicatedIpPool"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline CreateDedicatedIpPoolRequest& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline CreateDedicatedIpPoolRequest& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the dedicated IP pool.</p>
     */
    inline CreateDedicatedIpPoolRequest& WithPoolName(const char* value) { SetPoolName(value); return *this;}


    /**
     * <p>An object that defines the tags (keys and values) that you want to associate
     * with the pool.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An object that defines the tags (keys and values) that you want to associate
     * with the pool.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An object that defines the tags (keys and values) that you want to associate
     * with the pool.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An object that defines the tags (keys and values) that you want to associate
     * with the pool.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An object that defines the tags (keys and values) that you want to associate
     * with the pool.</p>
     */
    inline CreateDedicatedIpPoolRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An object that defines the tags (keys and values) that you want to associate
     * with the pool.</p>
     */
    inline CreateDedicatedIpPoolRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An object that defines the tags (keys and values) that you want to associate
     * with the pool.</p>
     */
    inline CreateDedicatedIpPoolRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An object that defines the tags (keys and values) that you want to associate
     * with the pool.</p>
     */
    inline CreateDedicatedIpPoolRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
