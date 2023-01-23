/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN or name of the secret.</p> <p>For an ARN, we recommend that you
     * specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>The ARN or name of the secret.</p> <p>For an ARN, we recommend that you
     * specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>The ARN or name of the secret.</p> <p>For an ARN, we recommend that you
     * specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>The ARN or name of the secret.</p> <p>For an ARN, we recommend that you
     * specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>The ARN or name of the secret.</p> <p>For an ARN, we recommend that you
     * specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>The ARN or name of the secret.</p> <p>For an ARN, we recommend that you
     * specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline UntagResourceRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>The ARN or name of the secret.</p> <p>For an ARN, we recommend that you
     * specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline UntagResourceRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>The ARN or name of the secret.</p> <p>For an ARN, we recommend that you
     * specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline UntagResourceRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>A list of tag key names to remove from the secret. You don't specify the
     * value. Both the key and its associated value are removed.</p> <p>This parameter
     * requires a JSON text string argument.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A list of tag key names to remove from the secret. You don't specify the
     * value. Both the key and its associated value are removed.</p> <p>This parameter
     * requires a JSON text string argument.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>A list of tag key names to remove from the secret. You don't specify the
     * value. Both the key and its associated value are removed.</p> <p>This parameter
     * requires a JSON text string argument.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A list of tag key names to remove from the secret. You don't specify the
     * value. Both the key and its associated value are removed.</p> <p>This parameter
     * requires a JSON text string argument.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>A list of tag key names to remove from the secret. You don't specify the
     * value. Both the key and its associated value are removed.</p> <p>This parameter
     * requires a JSON text string argument.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A list of tag key names to remove from the secret. You don't specify the
     * value. Both the key and its associated value are removed.</p> <p>This parameter
     * requires a JSON text string argument.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A list of tag key names to remove from the secret. You don't specify the
     * value. Both the key and its associated value are removed.</p> <p>This parameter
     * requires a JSON text string argument.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A list of tag key names to remove from the secret. You don't specify the
     * value. Both the key and its associated value are removed.</p> <p>This parameter
     * requires a JSON text string argument.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of tag key names to remove from the secret. You don't specify the
     * value. Both the key and its associated value are removed.</p> <p>This parameter
     * requires a JSON text string argument.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
