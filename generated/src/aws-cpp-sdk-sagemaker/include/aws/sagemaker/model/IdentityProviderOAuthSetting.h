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
    AWS_SAGEMAKER_API IdentityProviderOAuthSetting() = default;
    AWS_SAGEMAKER_API IdentityProviderOAuthSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API IdentityProviderOAuthSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data source that you're connecting to. Canvas currently
     * supports OAuth for Snowflake and Salesforce Data Cloud.</p>
     */
    inline DataSourceName GetDataSourceName() const { return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    inline void SetDataSourceName(DataSourceName value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }
    inline IdentityProviderOAuthSetting& WithDataSourceName(DataSourceName value) { SetDataSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether OAuth for a data source is enabled or disabled in the
     * Canvas application.</p>
     */
    inline FeatureStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeatureStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline IdentityProviderOAuthSetting& WithStatus(FeatureStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an Amazon Web Services Secrets Manager secret that stores the
     * credentials from your identity provider, such as the client ID and secret,
     * authorization URL, and token URL. </p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    IdentityProviderOAuthSetting& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}
  private:

    DataSourceName m_dataSourceName{DataSourceName::NOT_SET};
    bool m_dataSourceNameHasBeenSet = false;

    FeatureStatus m_status{FeatureStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
