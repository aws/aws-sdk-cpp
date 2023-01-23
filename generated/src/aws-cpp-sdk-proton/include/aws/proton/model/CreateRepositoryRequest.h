/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/RepositoryProvider.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class CreateRepositoryRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API CreateRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRepository"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of your AWS CodeStar connection that connects
     * Proton to your repository provider account. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html">Setting
     * up for Proton</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of your AWS CodeStar connection that connects
     * Proton to your repository provider account. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html">Setting
     * up for Proton</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of your AWS CodeStar connection that connects
     * Proton to your repository provider account. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html">Setting
     * up for Proton</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of your AWS CodeStar connection that connects
     * Proton to your repository provider account. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html">Setting
     * up for Proton</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of your AWS CodeStar connection that connects
     * Proton to your repository provider account. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html">Setting
     * up for Proton</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of your AWS CodeStar connection that connects
     * Proton to your repository provider account. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html">Setting
     * up for Proton</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateRepositoryRequest& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of your AWS CodeStar connection that connects
     * Proton to your repository provider account. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html">Setting
     * up for Proton</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateRepositoryRequest& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of your AWS CodeStar connection that connects
     * Proton to your repository provider account. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/setting-up-for-service.html">Setting
     * up for Proton</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateRepositoryRequest& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The ARN of your customer Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) key.</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The ARN of your customer Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) key.</p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p>The ARN of your customer Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) key.</p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The ARN of your customer Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) key.</p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>The ARN of your customer Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) key.</p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p>The ARN of your customer Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) key.</p>
     */
    inline CreateRepositoryRequest& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The ARN of your customer Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) key.</p>
     */
    inline CreateRepositoryRequest& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The ARN of your customer Amazon Web Services Key Management Service (Amazon
     * Web Services KMS) key.</p>
     */
    inline CreateRepositoryRequest& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


    /**
     * <p>The repository name (for example, <code>myrepos/myrepo</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The repository name (for example, <code>myrepos/myrepo</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The repository name (for example, <code>myrepos/myrepo</code>).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The repository name (for example, <code>myrepos/myrepo</code>).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The repository name (for example, <code>myrepos/myrepo</code>).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The repository name (for example, <code>myrepos/myrepo</code>).</p>
     */
    inline CreateRepositoryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The repository name (for example, <code>myrepos/myrepo</code>).</p>
     */
    inline CreateRepositoryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The repository name (for example, <code>myrepos/myrepo</code>).</p>
     */
    inline CreateRepositoryRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The repository provider.</p>
     */
    inline const RepositoryProvider& GetProvider() const{ return m_provider; }

    /**
     * <p>The repository provider.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The repository provider.</p>
     */
    inline void SetProvider(const RepositoryProvider& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The repository provider.</p>
     */
    inline void SetProvider(RepositoryProvider&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The repository provider.</p>
     */
    inline CreateRepositoryRequest& WithProvider(const RepositoryProvider& value) { SetProvider(value); return *this;}

    /**
     * <p>The repository provider.</p>
     */
    inline CreateRepositoryRequest& WithProvider(RepositoryProvider&& value) { SetProvider(std::move(value)); return *this;}


    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * repository. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * repository. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * repository. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * repository. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * repository. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateRepositoryRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * repository. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateRepositoryRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * repository. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateRepositoryRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * repository. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateRepositoryRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RepositoryProvider m_provider;
    bool m_providerHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
