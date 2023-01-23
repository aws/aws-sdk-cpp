/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/OnlineStoreSecurityConfig.h>
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
   * <p>Use this to specify the Amazon Web Services Key Management Service (KMS) Key
   * ID, or <code>KMSKeyId</code>, for at rest data encryption. You can turn
   * <code>OnlineStore</code> on or off by specifying the
   * <code>EnableOnlineStore</code> flag at General Assembly; the default value is
   * <code>False</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OnlineStoreConfig">AWS
   * API Reference</a></p>
   */
  class OnlineStoreConfig
  {
  public:
    AWS_SAGEMAKER_API OnlineStoreConfig();
    AWS_SAGEMAKER_API OnlineStoreConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OnlineStoreConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Use to specify KMS Key ID (<code>KMSKeyId</code>) for at-rest encryption of
     * your <code>OnlineStore</code>.</p>
     */
    inline const OnlineStoreSecurityConfig& GetSecurityConfig() const{ return m_securityConfig; }

    /**
     * <p>Use to specify KMS Key ID (<code>KMSKeyId</code>) for at-rest encryption of
     * your <code>OnlineStore</code>.</p>
     */
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }

    /**
     * <p>Use to specify KMS Key ID (<code>KMSKeyId</code>) for at-rest encryption of
     * your <code>OnlineStore</code>.</p>
     */
    inline void SetSecurityConfig(const OnlineStoreSecurityConfig& value) { m_securityConfigHasBeenSet = true; m_securityConfig = value; }

    /**
     * <p>Use to specify KMS Key ID (<code>KMSKeyId</code>) for at-rest encryption of
     * your <code>OnlineStore</code>.</p>
     */
    inline void SetSecurityConfig(OnlineStoreSecurityConfig&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::move(value); }

    /**
     * <p>Use to specify KMS Key ID (<code>KMSKeyId</code>) for at-rest encryption of
     * your <code>OnlineStore</code>.</p>
     */
    inline OnlineStoreConfig& WithSecurityConfig(const OnlineStoreSecurityConfig& value) { SetSecurityConfig(value); return *this;}

    /**
     * <p>Use to specify KMS Key ID (<code>KMSKeyId</code>) for at-rest encryption of
     * your <code>OnlineStore</code>.</p>
     */
    inline OnlineStoreConfig& WithSecurityConfig(OnlineStoreSecurityConfig&& value) { SetSecurityConfig(std::move(value)); return *this;}


    /**
     * <p>Turn <code>OnlineStore</code> off by specifying <code>False</code> for the
     * <code>EnableOnlineStore</code> flag. Turn <code>OnlineStore</code> on by
     * specifying <code>True</code> for the <code>EnableOnlineStore</code> flag. </p>
     * <p>The default value is <code>False</code>.</p>
     */
    inline bool GetEnableOnlineStore() const{ return m_enableOnlineStore; }

    /**
     * <p>Turn <code>OnlineStore</code> off by specifying <code>False</code> for the
     * <code>EnableOnlineStore</code> flag. Turn <code>OnlineStore</code> on by
     * specifying <code>True</code> for the <code>EnableOnlineStore</code> flag. </p>
     * <p>The default value is <code>False</code>.</p>
     */
    inline bool EnableOnlineStoreHasBeenSet() const { return m_enableOnlineStoreHasBeenSet; }

    /**
     * <p>Turn <code>OnlineStore</code> off by specifying <code>False</code> for the
     * <code>EnableOnlineStore</code> flag. Turn <code>OnlineStore</code> on by
     * specifying <code>True</code> for the <code>EnableOnlineStore</code> flag. </p>
     * <p>The default value is <code>False</code>.</p>
     */
    inline void SetEnableOnlineStore(bool value) { m_enableOnlineStoreHasBeenSet = true; m_enableOnlineStore = value; }

    /**
     * <p>Turn <code>OnlineStore</code> off by specifying <code>False</code> for the
     * <code>EnableOnlineStore</code> flag. Turn <code>OnlineStore</code> on by
     * specifying <code>True</code> for the <code>EnableOnlineStore</code> flag. </p>
     * <p>The default value is <code>False</code>.</p>
     */
    inline OnlineStoreConfig& WithEnableOnlineStore(bool value) { SetEnableOnlineStore(value); return *this;}

  private:

    OnlineStoreSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    bool m_enableOnlineStore;
    bool m_enableOnlineStoreHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
