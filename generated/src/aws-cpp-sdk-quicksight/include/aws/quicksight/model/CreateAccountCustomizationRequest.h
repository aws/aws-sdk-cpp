/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AccountCustomization.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateAccountCustomizationRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateAccountCustomizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccountCustomization"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline CreateAccountCustomizationRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline CreateAccountCustomizationRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline CreateAccountCustomizationRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The Amazon QuickSight namespace that you want to add customizations to.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The Amazon QuickSight namespace that you want to add customizations to.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The Amazon QuickSight namespace that you want to add customizations to.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The Amazon QuickSight namespace that you want to add customizations to.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The Amazon QuickSight namespace that you want to add customizations to.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The Amazon QuickSight namespace that you want to add customizations to.</p>
     */
    inline CreateAccountCustomizationRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The Amazon QuickSight namespace that you want to add customizations to.</p>
     */
    inline CreateAccountCustomizationRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The Amazon QuickSight namespace that you want to add customizations to.</p>
     */
    inline CreateAccountCustomizationRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The Amazon QuickSight customizations you're adding in the current Amazon Web
     * Services Region. You can add these to an Amazon Web Services account and a
     * QuickSight namespace. </p> <p>For example, you can add a default theme by
     * setting <code>AccountCustomization</code> to the midnight theme:
     * <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight::aws:theme/MIDNIGHT" }</code>. Or, you can add a custom
     * theme by specifying <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"
     * }</code>. </p>
     */
    inline const AccountCustomization& GetAccountCustomization() const{ return m_accountCustomization; }

    /**
     * <p>The Amazon QuickSight customizations you're adding in the current Amazon Web
     * Services Region. You can add these to an Amazon Web Services account and a
     * QuickSight namespace. </p> <p>For example, you can add a default theme by
     * setting <code>AccountCustomization</code> to the midnight theme:
     * <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight::aws:theme/MIDNIGHT" }</code>. Or, you can add a custom
     * theme by specifying <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"
     * }</code>. </p>
     */
    inline bool AccountCustomizationHasBeenSet() const { return m_accountCustomizationHasBeenSet; }

    /**
     * <p>The Amazon QuickSight customizations you're adding in the current Amazon Web
     * Services Region. You can add these to an Amazon Web Services account and a
     * QuickSight namespace. </p> <p>For example, you can add a default theme by
     * setting <code>AccountCustomization</code> to the midnight theme:
     * <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight::aws:theme/MIDNIGHT" }</code>. Or, you can add a custom
     * theme by specifying <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"
     * }</code>. </p>
     */
    inline void SetAccountCustomization(const AccountCustomization& value) { m_accountCustomizationHasBeenSet = true; m_accountCustomization = value; }

    /**
     * <p>The Amazon QuickSight customizations you're adding in the current Amazon Web
     * Services Region. You can add these to an Amazon Web Services account and a
     * QuickSight namespace. </p> <p>For example, you can add a default theme by
     * setting <code>AccountCustomization</code> to the midnight theme:
     * <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight::aws:theme/MIDNIGHT" }</code>. Or, you can add a custom
     * theme by specifying <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"
     * }</code>. </p>
     */
    inline void SetAccountCustomization(AccountCustomization&& value) { m_accountCustomizationHasBeenSet = true; m_accountCustomization = std::move(value); }

    /**
     * <p>The Amazon QuickSight customizations you're adding in the current Amazon Web
     * Services Region. You can add these to an Amazon Web Services account and a
     * QuickSight namespace. </p> <p>For example, you can add a default theme by
     * setting <code>AccountCustomization</code> to the midnight theme:
     * <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight::aws:theme/MIDNIGHT" }</code>. Or, you can add a custom
     * theme by specifying <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"
     * }</code>. </p>
     */
    inline CreateAccountCustomizationRequest& WithAccountCustomization(const AccountCustomization& value) { SetAccountCustomization(value); return *this;}

    /**
     * <p>The Amazon QuickSight customizations you're adding in the current Amazon Web
     * Services Region. You can add these to an Amazon Web Services account and a
     * QuickSight namespace. </p> <p>For example, you can add a default theme by
     * setting <code>AccountCustomization</code> to the midnight theme:
     * <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight::aws:theme/MIDNIGHT" }</code>. Or, you can add a custom
     * theme by specifying <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"
     * }</code>. </p>
     */
    inline CreateAccountCustomizationRequest& WithAccountCustomization(AccountCustomization&& value) { SetAccountCustomization(std::move(value)); return *this;}


    /**
     * <p>A list of the tags that you want to attach to this resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of the tags that you want to attach to this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of the tags that you want to attach to this resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of the tags that you want to attach to this resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of the tags that you want to attach to this resource.</p>
     */
    inline CreateAccountCustomizationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of the tags that you want to attach to this resource.</p>
     */
    inline CreateAccountCustomizationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of the tags that you want to attach to this resource.</p>
     */
    inline CreateAccountCustomizationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of the tags that you want to attach to this resource.</p>
     */
    inline CreateAccountCustomizationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    AccountCustomization m_accountCustomization;
    bool m_accountCustomizationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
