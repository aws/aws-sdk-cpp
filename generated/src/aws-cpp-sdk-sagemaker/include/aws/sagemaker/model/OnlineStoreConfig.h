/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/OnlineStoreSecurityConfig.h>
#include <aws/sagemaker/model/TtlDuration.h>
#include <aws/sagemaker/model/StorageType.h>
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
   * <code>EnableOnlineStore</code> flag at General Assembly.</p> <p>The default
   * value is <code>False</code>.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>Time to live duration, where the record is hard deleted after the expiration
     * time is reached; <code>ExpiresAt</code> = <code>EventTime</code> +
     * <code>TtlDuration</code>. For information on HardDelete, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_DeleteRecord.html">DeleteRecord</a>
     * API in the Amazon SageMaker API Reference guide.</p>
     */
    inline const TtlDuration& GetTtlDuration() const{ return m_ttlDuration; }

    /**
     * <p>Time to live duration, where the record is hard deleted after the expiration
     * time is reached; <code>ExpiresAt</code> = <code>EventTime</code> +
     * <code>TtlDuration</code>. For information on HardDelete, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_DeleteRecord.html">DeleteRecord</a>
     * API in the Amazon SageMaker API Reference guide.</p>
     */
    inline bool TtlDurationHasBeenSet() const { return m_ttlDurationHasBeenSet; }

    /**
     * <p>Time to live duration, where the record is hard deleted after the expiration
     * time is reached; <code>ExpiresAt</code> = <code>EventTime</code> +
     * <code>TtlDuration</code>. For information on HardDelete, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_DeleteRecord.html">DeleteRecord</a>
     * API in the Amazon SageMaker API Reference guide.</p>
     */
    inline void SetTtlDuration(const TtlDuration& value) { m_ttlDurationHasBeenSet = true; m_ttlDuration = value; }

    /**
     * <p>Time to live duration, where the record is hard deleted after the expiration
     * time is reached; <code>ExpiresAt</code> = <code>EventTime</code> +
     * <code>TtlDuration</code>. For information on HardDelete, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_DeleteRecord.html">DeleteRecord</a>
     * API in the Amazon SageMaker API Reference guide.</p>
     */
    inline void SetTtlDuration(TtlDuration&& value) { m_ttlDurationHasBeenSet = true; m_ttlDuration = std::move(value); }

    /**
     * <p>Time to live duration, where the record is hard deleted after the expiration
     * time is reached; <code>ExpiresAt</code> = <code>EventTime</code> +
     * <code>TtlDuration</code>. For information on HardDelete, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_DeleteRecord.html">DeleteRecord</a>
     * API in the Amazon SageMaker API Reference guide.</p>
     */
    inline OnlineStoreConfig& WithTtlDuration(const TtlDuration& value) { SetTtlDuration(value); return *this;}

    /**
     * <p>Time to live duration, where the record is hard deleted after the expiration
     * time is reached; <code>ExpiresAt</code> = <code>EventTime</code> +
     * <code>TtlDuration</code>. For information on HardDelete, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_DeleteRecord.html">DeleteRecord</a>
     * API in the Amazon SageMaker API Reference guide.</p>
     */
    inline OnlineStoreConfig& WithTtlDuration(TtlDuration&& value) { SetTtlDuration(std::move(value)); return *this;}


    /**
     * <p>Option for different tiers of low latency storage for real-time data
     * retrieval.</p> <ul> <li> <p> <code>Standard</code>: A managed low latency data
     * store for feature groups.</p> </li> <li> <p> <code>InMemory</code>: A managed
     * data store for feature groups that supports very low latency retrieval. </p>
     * </li> </ul>
     */
    inline const StorageType& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Option for different tiers of low latency storage for real-time data
     * retrieval.</p> <ul> <li> <p> <code>Standard</code>: A managed low latency data
     * store for feature groups.</p> </li> <li> <p> <code>InMemory</code>: A managed
     * data store for feature groups that supports very low latency retrieval. </p>
     * </li> </ul>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Option for different tiers of low latency storage for real-time data
     * retrieval.</p> <ul> <li> <p> <code>Standard</code>: A managed low latency data
     * store for feature groups.</p> </li> <li> <p> <code>InMemory</code>: A managed
     * data store for feature groups that supports very low latency retrieval. </p>
     * </li> </ul>
     */
    inline void SetStorageType(const StorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Option for different tiers of low latency storage for real-time data
     * retrieval.</p> <ul> <li> <p> <code>Standard</code>: A managed low latency data
     * store for feature groups.</p> </li> <li> <p> <code>InMemory</code>: A managed
     * data store for feature groups that supports very low latency retrieval. </p>
     * </li> </ul>
     */
    inline void SetStorageType(StorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Option for different tiers of low latency storage for real-time data
     * retrieval.</p> <ul> <li> <p> <code>Standard</code>: A managed low latency data
     * store for feature groups.</p> </li> <li> <p> <code>InMemory</code>: A managed
     * data store for feature groups that supports very low latency retrieval. </p>
     * </li> </ul>
     */
    inline OnlineStoreConfig& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}

    /**
     * <p>Option for different tiers of low latency storage for real-time data
     * retrieval.</p> <ul> <li> <p> <code>Standard</code>: A managed low latency data
     * store for feature groups.</p> </li> <li> <p> <code>InMemory</code>: A managed
     * data store for feature groups that supports very low latency retrieval. </p>
     * </li> </ul>
     */
    inline OnlineStoreConfig& WithStorageType(StorageType&& value) { SetStorageType(std::move(value)); return *this;}

  private:

    OnlineStoreSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    bool m_enableOnlineStore;
    bool m_enableOnlineStoreHasBeenSet = false;

    TtlDuration m_ttlDuration;
    bool m_ttlDurationHasBeenSet = false;

    StorageType m_storageType;
    bool m_storageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
