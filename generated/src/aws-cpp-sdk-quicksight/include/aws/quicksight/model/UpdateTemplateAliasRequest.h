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
  class UpdateTemplateAliasRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateTemplateAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTemplateAlias"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the template alias
     * that you're updating.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the template alias
     * that you're updating.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the template alias
     * that you're updating.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the template alias
     * that you're updating.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the template alias
     * that you're updating.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the template alias
     * that you're updating.</p>
     */
    inline UpdateTemplateAliasRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the template alias
     * that you're updating.</p>
     */
    inline UpdateTemplateAliasRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the template alias
     * that you're updating.</p>
     */
    inline UpdateTemplateAliasRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>The ID for the template.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>The ID for the template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>The ID for the template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>The ID for the template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>The ID for the template.</p>
     */
    inline UpdateTemplateAliasRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The ID for the template.</p>
     */
    inline UpdateTemplateAliasRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID for the template.</p>
     */
    inline UpdateTemplateAliasRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The alias of the template that you want to update. If you name a specific
     * alias, you update the version that the alias points to. You can specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. The keyword <code>$PUBLISHED</code>
     * doesn't apply to templates.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>The alias of the template that you want to update. If you name a specific
     * alias, you update the version that the alias points to. You can specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. The keyword <code>$PUBLISHED</code>
     * doesn't apply to templates.</p>
     */
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }

    /**
     * <p>The alias of the template that you want to update. If you name a specific
     * alias, you update the version that the alias points to. You can specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. The keyword <code>$PUBLISHED</code>
     * doesn't apply to templates.</p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>The alias of the template that you want to update. If you name a specific
     * alias, you update the version that the alias points to. You can specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. The keyword <code>$PUBLISHED</code>
     * doesn't apply to templates.</p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>The alias of the template that you want to update. If you name a specific
     * alias, you update the version that the alias points to. You can specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. The keyword <code>$PUBLISHED</code>
     * doesn't apply to templates.</p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>The alias of the template that you want to update. If you name a specific
     * alias, you update the version that the alias points to. You can specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. The keyword <code>$PUBLISHED</code>
     * doesn't apply to templates.</p>
     */
    inline UpdateTemplateAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>The alias of the template that you want to update. If you name a specific
     * alias, you update the version that the alias points to. You can specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. The keyword <code>$PUBLISHED</code>
     * doesn't apply to templates.</p>
     */
    inline UpdateTemplateAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>The alias of the template that you want to update. If you name a specific
     * alias, you update the version that the alias points to. You can specify the
     * latest version of the template by providing the keyword <code>$LATEST</code> in
     * the <code>AliasName</code> parameter. The keyword <code>$PUBLISHED</code>
     * doesn't apply to templates.</p>
     */
    inline UpdateTemplateAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}


    /**
     * <p>The version number of the template.</p>
     */
    inline long long GetTemplateVersionNumber() const{ return m_templateVersionNumber; }

    /**
     * <p>The version number of the template.</p>
     */
    inline bool TemplateVersionNumberHasBeenSet() const { return m_templateVersionNumberHasBeenSet; }

    /**
     * <p>The version number of the template.</p>
     */
    inline void SetTemplateVersionNumber(long long value) { m_templateVersionNumberHasBeenSet = true; m_templateVersionNumber = value; }

    /**
     * <p>The version number of the template.</p>
     */
    inline UpdateTemplateAliasRequest& WithTemplateVersionNumber(long long value) { SetTemplateVersionNumber(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;

    long long m_templateVersionNumber;
    bool m_templateVersionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
