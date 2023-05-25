/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/Domain.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class CreateDatasetGroupRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateDatasetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatasetGroup"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the new dataset group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the new dataset group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the new dataset group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the new dataset group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the new dataset group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the new dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the new dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the new dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that has permissions
     * to access the Key Management Service (KMS) key. Supplying an IAM role is only
     * valid when also specifying a KMS key.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that has permissions
     * to access the Key Management Service (KMS) key. Supplying an IAM role is only
     * valid when also specifying a KMS key.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that has permissions
     * to access the Key Management Service (KMS) key. Supplying an IAM role is only
     * valid when also specifying a KMS key.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that has permissions
     * to access the Key Management Service (KMS) key. Supplying an IAM role is only
     * valid when also specifying a KMS key.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that has permissions
     * to access the Key Management Service (KMS) key. Supplying an IAM role is only
     * valid when also specifying a KMS key.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that has permissions
     * to access the Key Management Service (KMS) key. Supplying an IAM role is only
     * valid when also specifying a KMS key.</p>
     */
    inline CreateDatasetGroupRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that has permissions
     * to access the Key Management Service (KMS) key. Supplying an IAM role is only
     * valid when also specifying a KMS key.</p>
     */
    inline CreateDatasetGroupRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that has permissions
     * to access the Key Management Service (KMS) key. Supplying an IAM role is only
     * valid when also specifying a KMS key.</p>
     */
    inline CreateDatasetGroupRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a Key Management Service (KMS) key used to
     * encrypt the datasets.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Key Management Service (KMS) key used to
     * encrypt the datasets.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Key Management Service (KMS) key used to
     * encrypt the datasets.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Key Management Service (KMS) key used to
     * encrypt the datasets.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Key Management Service (KMS) key used to
     * encrypt the datasets.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Key Management Service (KMS) key used to
     * encrypt the datasets.</p>
     */
    inline CreateDatasetGroupRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Key Management Service (KMS) key used to
     * encrypt the datasets.</p>
     */
    inline CreateDatasetGroupRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Key Management Service (KMS) key used to
     * encrypt the datasets.</p>
     */
    inline CreateDatasetGroupRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The domain of the dataset group. Specify a domain to create a Domain dataset
     * group. The domain you specify determines the default schemas for datasets and
     * the use cases available for recommenders. If you don't specify a domain, you
     * create a Custom dataset group with solution versions that you deploy with a
     * campaign. </p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain of the dataset group. Specify a domain to create a Domain dataset
     * group. The domain you specify determines the default schemas for datasets and
     * the use cases available for recommenders. If you don't specify a domain, you
     * create a Custom dataset group with solution versions that you deploy with a
     * campaign. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain of the dataset group. Specify a domain to create a Domain dataset
     * group. The domain you specify determines the default schemas for datasets and
     * the use cases available for recommenders. If you don't specify a domain, you
     * create a Custom dataset group with solution versions that you deploy with a
     * campaign. </p>
     */
    inline void SetDomain(const Domain& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain of the dataset group. Specify a domain to create a Domain dataset
     * group. The domain you specify determines the default schemas for datasets and
     * the use cases available for recommenders. If you don't specify a domain, you
     * create a Custom dataset group with solution versions that you deploy with a
     * campaign. </p>
     */
    inline void SetDomain(Domain&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain of the dataset group. Specify a domain to create a Domain dataset
     * group. The domain you specify determines the default schemas for datasets and
     * the use cases available for recommenders. If you don't specify a domain, you
     * create a Custom dataset group with solution versions that you deploy with a
     * campaign. </p>
     */
    inline CreateDatasetGroupRequest& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain of the dataset group. Specify a domain to create a Domain dataset
     * group. The domain you specify determines the default schemas for datasets and
     * the use cases available for recommenders. If you don't specify a domain, you
     * create a Custom dataset group with solution versions that you deploy with a
     * campaign. </p>
     */
    inline CreateDatasetGroupRequest& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Domain m_domain;
    bool m_domainHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
