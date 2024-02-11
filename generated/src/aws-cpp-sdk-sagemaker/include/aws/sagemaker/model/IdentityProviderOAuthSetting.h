/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/DataSourceName.h>
#include <aws/sagemaker/model/FeatureStatus.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The Amazon SageMaker Canvas application setting where you configure OAuth for
   * connecting to an external data source, such as Snowflake.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/IdentityProviderOAuthSetting">AWS
   * API Reference</a></p>
   */
  class IdentityProviderOAuthSetting
  {
  public:
    AWS_SAGEMAKER_API IdentityProviderOAuthSetting();
    AWS_SAGEMAKER_API IdentityProviderOAuthSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API IdentityProviderOAuthSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data source that you're connecting to. Canvas currently
     * supports OAuth for Snowflake and Salesforce Data Cloud.</p>
     */
    inline const DataSourceName& GetDataSourceName() const{ return m_dataSourceName; }

    /**
     * <p>The name of the data source that you're connecting to. Canvas currently
     * supports OAuth for Snowflake and Salesforce Data Cloud.</p>
     */
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }

    /**
     * <p>The name of the data source that you're connecting to. Canvas currently
     * supports OAuth for Snowflake and Salesforce Data Cloud.</p>
     */
    inline void SetDataSourceName(const DataSourceName& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }

    /**
     * <p>The name of the data source that you're connecting to. Canvas currently
     * supports OAuth for Snowflake and Salesforce Data Cloud.</p>
     */
    inline void SetDataSourceName(DataSourceName&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }

    /**
     * <p>The name of the data source that you're connecting to. Canvas currently
     * supports OAuth for Snowflake and Salesforce Data Cloud.</p>
     */
    inline IdentityProviderOAuthSetting& WithDataSourceName(const DataSourceName& value) { SetDataSourceName(value); return *this;}

    /**
     * <p>The name of the data source that you're connecting to. Canvas currently
     * supports OAuth for Snowflake and Salesforce Data Cloud.</p>
     */
    inline IdentityProviderOAuthSetting& WithDataSourceName(DataSourceName&& value) { SetDataSourceName(std::move(value)); return *this;}


    /**
     * <p>Describes whether OAuth for a data source is enabled or disabled in the
     * Canvas application.</p>
     */
    inline const FeatureStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Describes whether OAuth for a data source is enabled or disabled in the
     * Canvas application.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes whether OAuth for a data source is enabled or disabled in the
     * Canvas application.</p>
     */
    inline void SetStatus(const FeatureStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes whether OAuth for a data source is enabled or disabled in the
     * Canvas application.</p>
     */
    inline void SetStatus(FeatureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes whether OAuth for a data source is enabled or disabled in the
     * Canvas application.</p>
     */
    inline IdentityProviderOAuthSetting& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes whether OAuth for a data source is enabled or disabled in the
     * Canvas application.</p>
     */
    inline IdentityProviderOAuthSetting& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of an Amazon Web Services Secrets Manager secret that stores the
     * credentials from your identity provider, such as the client ID and secret,
     * authorization URL, and token URL. </p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The ARN of an Amazon Web Services Secrets Manager secret that stores the
     * credentials from your identity provider, such as the client ID and secret,
     * authorization URL, and token URL. </p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The ARN of an Amazon Web Services Secrets Manager secret that stores the
     * credentials from your identity provider, such as the client ID and secret,
     * authorization URL, and token URL. </p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The ARN of an Amazon Web Services Secrets Manager secret that stores the
     * credentials from your identity provider, such as the client ID and secret,
     * authorization URL, and token URL. </p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The ARN of an Amazon Web Services Secrets Manager secret that stores the
     * credentials from your identity provider, such as the client ID and secret,
     * authorization URL, and token URL. </p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The ARN of an Amazon Web Services Secrets Manager secret that stores the
     * credentials from your identity provider, such as the client ID and secret,
     * authorization URL, and token URL. </p>
     */
    inline IdentityProviderOAuthSetting& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The ARN of an Amazon Web Services Secrets Manager secret that stores the
     * credentials from your identity provider, such as the client ID and secret,
     * authorization URL, and token URL. </p>
     */
    inline IdentityProviderOAuthSetting& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an Amazon Web Services Secrets Manager secret that stores the
     * credentials from your identity provider, such as the client ID and secret,
     * authorization URL, and token URL. </p>
     */
    inline IdentityProviderOAuthSetting& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}

  private:

    DataSourceName m_dataSourceName;
    bool m_dataSourceNameHasBeenSet = false;

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
