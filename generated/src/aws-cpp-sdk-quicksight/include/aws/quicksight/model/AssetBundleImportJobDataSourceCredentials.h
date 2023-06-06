/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AssetBundleImportJobDataSourceCredentialPair.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The login credentials to use to import a data source resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobDataSourceCredentials">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobDataSourceCredentials
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceCredentials();
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A username and password credential pair to be used to create the imported
     * data source. Keep this field blank if you are using a Secrets Manager secret to
     * provide credentials.</p>
     */
    inline const AssetBundleImportJobDataSourceCredentialPair& GetCredentialPair() const{ return m_credentialPair; }

    /**
     * <p>A username and password credential pair to be used to create the imported
     * data source. Keep this field blank if you are using a Secrets Manager secret to
     * provide credentials.</p>
     */
    inline bool CredentialPairHasBeenSet() const { return m_credentialPairHasBeenSet; }

    /**
     * <p>A username and password credential pair to be used to create the imported
     * data source. Keep this field blank if you are using a Secrets Manager secret to
     * provide credentials.</p>
     */
    inline void SetCredentialPair(const AssetBundleImportJobDataSourceCredentialPair& value) { m_credentialPairHasBeenSet = true; m_credentialPair = value; }

    /**
     * <p>A username and password credential pair to be used to create the imported
     * data source. Keep this field blank if you are using a Secrets Manager secret to
     * provide credentials.</p>
     */
    inline void SetCredentialPair(AssetBundleImportJobDataSourceCredentialPair&& value) { m_credentialPairHasBeenSet = true; m_credentialPair = std::move(value); }

    /**
     * <p>A username and password credential pair to be used to create the imported
     * data source. Keep this field blank if you are using a Secrets Manager secret to
     * provide credentials.</p>
     */
    inline AssetBundleImportJobDataSourceCredentials& WithCredentialPair(const AssetBundleImportJobDataSourceCredentialPair& value) { SetCredentialPair(value); return *this;}

    /**
     * <p>A username and password credential pair to be used to create the imported
     * data source. Keep this field blank if you are using a Secrets Manager secret to
     * provide credentials.</p>
     */
    inline AssetBundleImportJobDataSourceCredentials& WithCredentialPair(AssetBundleImportJobDataSourceCredentialPair&& value) { SetCredentialPair(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Secrets Manager secret that's used to create the imported data
     * source. Keep this field blank, unless you are using a secret in place of a
     * credential pair.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The ARN of the Secrets Manager secret that's used to create the imported data
     * source. Keep this field blank, unless you are using a secret in place of a
     * credential pair.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The ARN of the Secrets Manager secret that's used to create the imported data
     * source. Keep this field blank, unless you are using a secret in place of a
     * credential pair.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The ARN of the Secrets Manager secret that's used to create the imported data
     * source. Keep this field blank, unless you are using a secret in place of a
     * credential pair.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The ARN of the Secrets Manager secret that's used to create the imported data
     * source. Keep this field blank, unless you are using a secret in place of a
     * credential pair.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The ARN of the Secrets Manager secret that's used to create the imported data
     * source. Keep this field blank, unless you are using a secret in place of a
     * credential pair.</p>
     */
    inline AssetBundleImportJobDataSourceCredentials& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The ARN of the Secrets Manager secret that's used to create the imported data
     * source. Keep this field blank, unless you are using a secret in place of a
     * credential pair.</p>
     */
    inline AssetBundleImportJobDataSourceCredentials& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Secrets Manager secret that's used to create the imported data
     * source. Keep this field blank, unless you are using a secret in place of a
     * credential pair.</p>
     */
    inline AssetBundleImportJobDataSourceCredentials& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}

  private:

    AssetBundleImportJobDataSourceCredentialPair m_credentialPair;
    bool m_credentialPairHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
