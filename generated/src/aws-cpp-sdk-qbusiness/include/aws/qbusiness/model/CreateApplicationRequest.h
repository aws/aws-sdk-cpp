/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/qbusiness/model/AttachmentsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/EncryptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class CreateApplicationRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


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
    inline CreateApplicationRequest& WithAttachmentsConfiguration(const AttachmentsConfiguration& value) { SetAttachmentsConfiguration(value); return *this;}

    /**
     * <p>An option to allow end users to upload files directly during chat.</p>
     */
    inline CreateApplicationRequest& WithAttachmentsConfiguration(AttachmentsConfiguration&& value) { SetAttachmentsConfiguration(std::move(value)); return *this;}


    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application.</p>
     */
    inline CreateApplicationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application.</p>
     */
    inline CreateApplicationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application.</p>
     */
    inline CreateApplicationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A description for the Amazon Q application. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the Amazon Q application. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the Amazon Q application. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the Amazon Q application. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the Amazon Q application. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the Amazon Q application. </p>
     */
    inline CreateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Q application. </p>
     */
    inline CreateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Q application. </p>
     */
    inline CreateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A name for the Amazon Q application. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>A name for the Amazon Q application. </p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>A name for the Amazon Q application. </p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>A name for the Amazon Q application. </p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>A name for the Amazon Q application. </p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>A name for the Amazon Q application. </p>
     */
    inline CreateApplicationRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>A name for the Amazon Q application. </p>
     */
    inline CreateApplicationRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>A name for the Amazon Q application. </p>
     */
    inline CreateApplicationRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The identifier of the KMS key that is used to encrypt your data. Amazon Q
     * doesn't support asymmetric keys.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>The identifier of the KMS key that is used to encrypt your data. Amazon Q
     * doesn't support asymmetric keys.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>The identifier of the KMS key that is used to encrypt your data. Amazon Q
     * doesn't support asymmetric keys.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>The identifier of the KMS key that is used to encrypt your data. Amazon Q
     * doesn't support asymmetric keys.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>The identifier of the KMS key that is used to encrypt your data. Amazon Q
     * doesn't support asymmetric keys.</p>
     */
    inline CreateApplicationRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>The identifier of the KMS key that is used to encrypt your data. Amazon Q
     * doesn't support asymmetric keys.</p>
     */
    inline CreateApplicationRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of an IAM role with permissions to access
     * your Amazon CloudWatch logs and metrics.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of an IAM role with permissions to access
     * your Amazon CloudWatch logs and metrics.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of an IAM role with permissions to access
     * your Amazon CloudWatch logs and metrics.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of an IAM role with permissions to access
     * your Amazon CloudWatch logs and metrics.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of an IAM role with permissions to access
     * your Amazon CloudWatch logs and metrics.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of an IAM role with permissions to access
     * your Amazon CloudWatch logs and metrics.</p>
     */
    inline CreateApplicationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of an IAM role with permissions to access
     * your Amazon CloudWatch logs and metrics.</p>
     */
    inline CreateApplicationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of an IAM role with permissions to access
     * your Amazon CloudWatch logs and metrics.</p>
     */
    inline CreateApplicationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q
     * application. You can also use tags to help control access to the application.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q
     * application. You can also use tags to help control access to the application.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q
     * application. You can also use tags to help control access to the application.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q
     * application. You can also use tags to help control access to the application.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q
     * application. You can also use tags to help control access to the application.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline CreateApplicationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q
     * application. You can also use tags to help control access to the application.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline CreateApplicationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q
     * application. You can also use tags to help control access to the application.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline CreateApplicationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs that identify or categorize your Amazon Q
     * application. You can also use tags to help control access to the application.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols: _ . : / = + - @.</p>
     */
    inline CreateApplicationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    AttachmentsConfiguration m_attachmentsConfiguration;
    bool m_attachmentsConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
