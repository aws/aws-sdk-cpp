/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/RetrieverConfiguration.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class UpdateRetrieverRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdateRetrieverRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRetriever"; }

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
    inline UpdateRetrieverRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of your Amazon Q application.</p>
     */
    inline UpdateRetrieverRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of your Amazon Q application.</p>
     */
    inline UpdateRetrieverRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    
    inline const RetrieverConfiguration& GetConfiguration() const{ return m_configuration; }

    
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    
    inline void SetConfiguration(const RetrieverConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    
    inline void SetConfiguration(RetrieverConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    
    inline UpdateRetrieverRequest& WithConfiguration(const RetrieverConfiguration& value) { SetConfiguration(value); return *this;}

    
    inline UpdateRetrieverRequest& WithConfiguration(RetrieverConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


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
    inline UpdateRetrieverRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of your retriever.</p>
     */
    inline UpdateRetrieverRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of your retriever.</p>
     */
    inline UpdateRetrieverRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The identifier of your retriever.</p>
     */
    inline const Aws::String& GetRetrieverId() const{ return m_retrieverId; }

    /**
     * <p>The identifier of your retriever.</p>
     */
    inline bool RetrieverIdHasBeenSet() const { return m_retrieverIdHasBeenSet; }

    /**
     * <p>The identifier of your retriever.</p>
     */
    inline void SetRetrieverId(const Aws::String& value) { m_retrieverIdHasBeenSet = true; m_retrieverId = value; }

    /**
     * <p>The identifier of your retriever.</p>
     */
    inline void SetRetrieverId(Aws::String&& value) { m_retrieverIdHasBeenSet = true; m_retrieverId = std::move(value); }

    /**
     * <p>The identifier of your retriever.</p>
     */
    inline void SetRetrieverId(const char* value) { m_retrieverIdHasBeenSet = true; m_retrieverId.assign(value); }

    /**
     * <p>The identifier of your retriever.</p>
     */
    inline UpdateRetrieverRequest& WithRetrieverId(const Aws::String& value) { SetRetrieverId(value); return *this;}

    /**
     * <p>The identifier of your retriever.</p>
     */
    inline UpdateRetrieverRequest& WithRetrieverId(Aws::String&& value) { SetRetrieverId(std::move(value)); return *this;}

    /**
     * <p>The identifier of your retriever.</p>
     */
    inline UpdateRetrieverRequest& WithRetrieverId(const char* value) { SetRetrieverId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * retriever and required resources. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * retriever and required resources. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * retriever and required resources. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * retriever and required resources. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * retriever and required resources. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * retriever and required resources. </p>
     */
    inline UpdateRetrieverRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * retriever and required resources. </p>
     */
    inline UpdateRetrieverRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * retriever and required resources. </p>
     */
    inline UpdateRetrieverRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    RetrieverConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_retrieverId;
    bool m_retrieverIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
