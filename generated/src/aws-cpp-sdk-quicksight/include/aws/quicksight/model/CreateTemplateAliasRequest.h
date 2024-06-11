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
  class CreateTemplateAliasRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateTemplateAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTemplateAlias"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the template that you
     * creating an alias for.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline CreateTemplateAliasRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline CreateTemplateAliasRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline CreateTemplateAliasRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }
    inline CreateTemplateAliasRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline CreateTemplateAliasRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline CreateTemplateAliasRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you want to give to the template alias that you're creating.
     * Don't start the alias name with the <code>$</code> character. Alias names that
     * start with <code>$</code> are reserved by Amazon QuickSight. </p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }
    inline CreateTemplateAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}
    inline CreateTemplateAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}
    inline CreateTemplateAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the template.</p>
     */
    inline long long GetTemplateVersionNumber() const{ return m_templateVersionNumber; }
    inline bool TemplateVersionNumberHasBeenSet() const { return m_templateVersionNumberHasBeenSet; }
    inline void SetTemplateVersionNumber(long long value) { m_templateVersionNumberHasBeenSet = true; m_templateVersionNumber = value; }
    inline CreateTemplateAliasRequest& WithTemplateVersionNumber(long long value) { SetTemplateVersionNumber(value); return *this;}
    ///@}
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
