/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/AttachmentsConfiguration.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline UpdateApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline UpdateApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q application.</p>
     */
    inline UpdateApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>An option to allow end users to upload files directly during chat.</p>
     */
    inline const AttachmentsConfiguration& GetAttachmentsConfiguration() const{ return m_attachmentsConfiguration; }

    /**
     * <p>An option to allow end users to upload files directly during chat.</p>
     */
    inline bool AttachmentsConfigurationHasBeenSet() const { return m_attachmentsConfigurationHasBeenSet; }

    /**
     * <p>An option to allow end users to upload files directly during chat.</p>
     */
    inline void SetAttachmentsConfiguration(const AttachmentsConfiguration& value) { m_attachmentsConfigurationHasBeenSet = true; m_attachmentsConfiguration = value; }

    /**
     * <p>An option to allow end users to upload files directly during chat.</p>
     */
    inline void SetAttachmentsConfiguration(AttachmentsConfiguration&& value) { m_attachmentsConfigurationHasBeenSet = true; m_attachmentsConfiguration = std::move(value); }

    /**
     * <p>An option to allow end users to upload files directly during chat.</p>
     */
    inline UpdateApplicationRequest& WithAttachmentsConfiguration(const AttachmentsConfiguration& value) { SetAttachmentsConfiguration(value); return *this;}

    /**
     * <p>An option to allow end users to upload files directly during chat.</p>
     */
    inline UpdateApplicationRequest& WithAttachmentsConfiguration(AttachmentsConfiguration&& value) { SetAttachmentsConfiguration(std::move(value)); return *this;}


    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline UpdateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline UpdateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Q application.</p>
     */
    inline UpdateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A name for the Amazon Q application.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>A name for the Amazon Q application.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>A name for the Amazon Q application.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>A name for the Amazon Q application.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>A name for the Amazon Q application.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>A name for the Amazon Q application.</p>
     */
    inline UpdateApplicationRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>A name for the Amazon Q application.</p>
     */
    inline UpdateApplicationRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>A name for the Amazon Q application.</p>
     */
    inline UpdateApplicationRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>An Amazon Web Services Identity and Access Management (IAM) role that gives
     * Amazon Q permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An Amazon Web Services Identity and Access Management (IAM) role that gives
     * Amazon Q permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>An Amazon Web Services Identity and Access Management (IAM) role that gives
     * Amazon Q permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An Amazon Web Services Identity and Access Management (IAM) role that gives
     * Amazon Q permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An Amazon Web Services Identity and Access Management (IAM) role that gives
     * Amazon Q permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An Amazon Web Services Identity and Access Management (IAM) role that gives
     * Amazon Q permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline UpdateApplicationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An Amazon Web Services Identity and Access Management (IAM) role that gives
     * Amazon Q permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline UpdateApplicationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Web Services Identity and Access Management (IAM) role that gives
     * Amazon Q permission to access Amazon CloudWatch logs and metrics.</p>
     */
    inline UpdateApplicationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    AttachmentsConfiguration m_attachmentsConfiguration;
    bool m_attachmentsConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
