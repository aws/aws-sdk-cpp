/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/route53profiles/Route53ProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53profiles/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Route53Profiles
{
namespace Model
{

  /**
   */
  class CreateProfileRequest : public Route53ProfilesRequest
  {
  public:
    AWS_ROUTE53PROFILES_API CreateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProfile"; }

    AWS_ROUTE53PROFILES_API Aws::String SerializePayload() const override;


    /**
     * <p> <code>ClientToken</code> is an idempotency token that ensures a call to
     * <code>CreateProfile</code> completes only once. You choose the value to pass.
     * For example, an issue might prevent you from getting a response from
     * <code>CreateProfile</code>. In this case, safely retry your call to
     * <code>CreateProfile</code> by using the same <code>CreateProfile</code>
     * parameter value. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> <code>ClientToken</code> is an idempotency token that ensures a call to
     * <code>CreateProfile</code> completes only once. You choose the value to pass.
     * For example, an issue might prevent you from getting a response from
     * <code>CreateProfile</code>. In this case, safely retry your call to
     * <code>CreateProfile</code> by using the same <code>CreateProfile</code>
     * parameter value. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> <code>ClientToken</code> is an idempotency token that ensures a call to
     * <code>CreateProfile</code> completes only once. You choose the value to pass.
     * For example, an issue might prevent you from getting a response from
     * <code>CreateProfile</code>. In this case, safely retry your call to
     * <code>CreateProfile</code> by using the same <code>CreateProfile</code>
     * parameter value. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> <code>ClientToken</code> is an idempotency token that ensures a call to
     * <code>CreateProfile</code> completes only once. You choose the value to pass.
     * For example, an issue might prevent you from getting a response from
     * <code>CreateProfile</code>. In this case, safely retry your call to
     * <code>CreateProfile</code> by using the same <code>CreateProfile</code>
     * parameter value. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> <code>ClientToken</code> is an idempotency token that ensures a call to
     * <code>CreateProfile</code> completes only once. You choose the value to pass.
     * For example, an issue might prevent you from getting a response from
     * <code>CreateProfile</code>. In this case, safely retry your call to
     * <code>CreateProfile</code> by using the same <code>CreateProfile</code>
     * parameter value. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> <code>ClientToken</code> is an idempotency token that ensures a call to
     * <code>CreateProfile</code> completes only once. You choose the value to pass.
     * For example, an issue might prevent you from getting a response from
     * <code>CreateProfile</code>. In this case, safely retry your call to
     * <code>CreateProfile</code> by using the same <code>CreateProfile</code>
     * parameter value. </p>
     */
    inline CreateProfileRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> <code>ClientToken</code> is an idempotency token that ensures a call to
     * <code>CreateProfile</code> completes only once. You choose the value to pass.
     * For example, an issue might prevent you from getting a response from
     * <code>CreateProfile</code>. In this case, safely retry your call to
     * <code>CreateProfile</code> by using the same <code>CreateProfile</code>
     * parameter value. </p>
     */
    inline CreateProfileRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> <code>ClientToken</code> is an idempotency token that ensures a call to
     * <code>CreateProfile</code> completes only once. You choose the value to pass.
     * For example, an issue might prevent you from getting a response from
     * <code>CreateProfile</code>. In this case, safely retry your call to
     * <code>CreateProfile</code> by using the same <code>CreateProfile</code>
     * parameter value. </p>
     */
    inline CreateProfileRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> A name for the Profile. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> A name for the Profile. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> A name for the Profile. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> A name for the Profile. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> A name for the Profile. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> A name for the Profile. </p>
     */
    inline CreateProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> A name for the Profile. </p>
     */
    inline CreateProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> A name for the Profile. </p>
     */
    inline CreateProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> A list of the tag keys and values that you want to associate with the Route
     * 53 Profile. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> A list of the tag keys and values that you want to associate with the Route
     * 53 Profile. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A list of the tag keys and values that you want to associate with the Route
     * 53 Profile. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A list of the tag keys and values that you want to associate with the Route
     * 53 Profile. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A list of the tag keys and values that you want to associate with the Route
     * 53 Profile. </p>
     */
    inline CreateProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> A list of the tag keys and values that you want to associate with the Route
     * 53 Profile. </p>
     */
    inline CreateProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A list of the tag keys and values that you want to associate with the Route
     * 53 Profile. </p>
     */
    inline CreateProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> A list of the tag keys and values that you want to associate with the Route
     * 53 Profile. </p>
     */
    inline CreateProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
