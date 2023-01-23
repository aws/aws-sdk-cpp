/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DeleteTemplateAliasRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DeleteTemplateAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTemplateAlias"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the item to
     * delete.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the item to
     * delete.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the item to
     * delete.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the item to
     * delete.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the item to
     * delete.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the item to
     * delete.</p>
     */
    inline DeleteTemplateAliasRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the item to
     * delete.</p>
     */
    inline DeleteTemplateAliasRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the item to
     * delete.</p>
     */
    inline DeleteTemplateAliasRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the template that the specified alias is for.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>The ID for the template that the specified alias is for.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>The ID for the template that the specified alias is for.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>The ID for the template that the specified alias is for.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>The ID for the template that the specified alias is for.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>The ID for the template that the specified alias is for.</p>
     */
    inline DeleteTemplateAliasRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The ID for the template that the specified alias is for.</p>
     */
    inline DeleteTemplateAliasRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID for the template that the specified alias is for.</p>
     */
    inline DeleteTemplateAliasRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The name for the template alias. To delete a specific alias, you delete the
     * version that the alias points to. You can specify the alias name, or specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. </p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>The name for the template alias. To delete a specific alias, you delete the
     * version that the alias points to. You can specify the alias name, or specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. </p>
     */
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }

    /**
     * <p>The name for the template alias. To delete a specific alias, you delete the
     * version that the alias points to. You can specify the alias name, or specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. </p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>The name for the template alias. To delete a specific alias, you delete the
     * version that the alias points to. You can specify the alias name, or specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. </p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>The name for the template alias. To delete a specific alias, you delete the
     * version that the alias points to. You can specify the alias name, or specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. </p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>The name for the template alias. To delete a specific alias, you delete the
     * version that the alias points to. You can specify the alias name, or specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. </p>
     */
    inline DeleteTemplateAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>The name for the template alias. To delete a specific alias, you delete the
     * version that the alias points to. You can specify the alias name, or specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. </p>
     */
    inline DeleteTemplateAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>The name for the template alias. To delete a specific alias, you delete the
     * version that the alias points to. You can specify the alias name, or specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. </p>
     */
    inline DeleteTemplateAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
