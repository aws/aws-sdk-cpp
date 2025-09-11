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
    AWS_QUICKSIGHT_API CreateAccountCustomizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccountCustomization"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID for the Amazon Web Services account that you want to customize
     * QuickSight for.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CreateAccountCustomizationRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The QuickSight namespace that you want to add customizations to.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    CreateAccountCustomizationRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The QuickSight customizations you're adding in the current Amazon Web
     * Services Region. You can add these to an Amazon Web Services account and a
     * QuickSight namespace. </p> <p>For example, you can add a default theme by
     * setting <code>AccountCustomization</code> to the midnight theme:
     * <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight::aws:theme/MIDNIGHT" }</code>. Or, you can add a custom
     * theme by specifying <code>"AccountCustomization": { "DefaultTheme":
     * "arn:aws:quicksight:us-west-2:111122223333:theme/bdb844d0-0fe9-4d9d-b520-0fe602d93639"
     * }</code>. </p>
     */
    inline const AccountCustomization& GetAccountCustomization() const { return m_accountCustomization; }
    inline bool AccountCustomizationHasBeenSet() const { return m_accountCustomizationHasBeenSet; }
    template<typename AccountCustomizationT = AccountCustomization>
    void SetAccountCustomization(AccountCustomizationT&& value) { m_accountCustomizationHasBeenSet = true; m_accountCustomization = std::forward<AccountCustomizationT>(value); }
    template<typename AccountCustomizationT = AccountCustomization>
    CreateAccountCustomizationRequest& WithAccountCustomization(AccountCustomizationT&& value) { SetAccountCustomization(std::forward<AccountCustomizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the tags that you want to attach to this resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAccountCustomizationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAccountCustomizationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
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
