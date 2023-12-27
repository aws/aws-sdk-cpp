/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/RetrieverConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/RetrieverType.h>
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
  class CreateRetrieverRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CreateRetrieverRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRetriever"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of your Amazon Q application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of your Amazon Q application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of your Amazon Q application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of your Amazon Q application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of your Amazon Q application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of your Amazon Q application.</p>
     */
    inline CreateRetrieverRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of your Amazon Q application.</p>
     */
    inline CreateRetrieverRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of your Amazon Q application.</p>
     */
    inline CreateRetrieverRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application retriever.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application retriever.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application retriever.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application retriever.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application retriever.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application retriever.</p>
     */
    inline CreateRetrieverRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application retriever.</p>
     */
    inline CreateRetrieverRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * application retriever.</p>
     */
    inline CreateRetrieverRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const RetrieverConfiguration& GetConfiguration() const{ return m_configuration; }

    
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    
    inline void SetConfiguration(const RetrieverConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    
    inline void SetConfiguration(RetrieverConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    
    inline CreateRetrieverRequest& WithConfiguration(const RetrieverConfiguration& value) { SetConfiguration(value); return *this;}

    
    inline CreateRetrieverRequest& WithConfiguration(RetrieverConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name of your retriever.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of your retriever.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of your retriever.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of your retriever.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of your retriever.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of your retriever.</p>
     */
    inline CreateRetrieverRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of your retriever.</p>
     */
    inline CreateRetrieverRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of your retriever.</p>
     */
    inline CreateRetrieverRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline CreateRetrieverRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline CreateRetrieverRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline CreateRetrieverRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A list of key-value pairs that identify or categorize the retriever. You can
     * also use tags to help control access to the retriever. Tag keys and values can
     * consist of Unicode letters, digits, white space, and any of the following
     * symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that identify or categorize the retriever. You can
     * also use tags to help control access to the retriever. Tag keys and values can
     * consist of Unicode letters, digits, white space, and any of the following
     * symbols: _ . : / = + - @.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that identify or categorize the retriever. You can
     * also use tags to help control access to the retriever. Tag keys and values can
     * consist of Unicode letters, digits, white space, and any of the following
     * symbols: _ . : / = + - @.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that identify or categorize the retriever. You can
     * also use tags to help control access to the retriever. Tag keys and values can
     * consist of Unicode letters, digits, white space, and any of the following
     * symbols: _ . : / = + - @.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that identify or categorize the retriever. You can
     * also use tags to help control access to the retriever. Tag keys and values can
     * consist of Unicode letters, digits, white space, and any of the following
     * symbols: _ . : / = + - @.</p>
     */
    inline CreateRetrieverRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize the retriever. You can
     * also use tags to help control access to the retriever. Tag keys and values can
     * consist of Unicode letters, digits, white space, and any of the following
     * symbols: _ . : / = + - @.</p>
     */
    inline CreateRetrieverRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize the retriever. You can
     * also use tags to help control access to the retriever. Tag keys and values can
     * consist of Unicode letters, digits, white space, and any of the following
     * symbols: _ . : / = + - @.</p>
     */
    inline CreateRetrieverRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs that identify or categorize the retriever. You can
     * also use tags to help control access to the retriever. Tag keys and values can
     * consist of Unicode letters, digits, white space, and any of the following
     * symbols: _ . : / = + - @.</p>
     */
    inline CreateRetrieverRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of retriever you are using.</p>
     */
    inline const RetrieverType& GetType() const{ return m_type; }

    /**
     * <p>The type of retriever you are using.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of retriever you are using.</p>
     */
    inline void SetType(const RetrieverType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of retriever you are using.</p>
     */
    inline void SetType(RetrieverType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of retriever you are using.</p>
     */
    inline CreateRetrieverRequest& WithType(const RetrieverType& value) { SetType(value); return *this;}

    /**
     * <p>The type of retriever you are using.</p>
     */
    inline CreateRetrieverRequest& WithType(RetrieverType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    RetrieverConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    RetrieverType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
