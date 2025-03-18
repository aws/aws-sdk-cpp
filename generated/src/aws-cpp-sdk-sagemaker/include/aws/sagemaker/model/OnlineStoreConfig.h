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
    AWS_SAGEMAKER_API OnlineStoreConfig() = default;
    AWS_SAGEMAKER_API OnlineStoreConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OnlineStoreConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use to specify KMS Key ID (<code>KMSKeyId</code>) for at-rest encryption of
     * your <code>OnlineStore</code>.</p>
     */
    inline const OnlineStoreSecurityConfig& GetSecurityConfig() const { return m_securityConfig; }
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }
    template<typename SecurityConfigT = OnlineStoreSecurityConfig>
    void SetSecurityConfig(SecurityConfigT&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::forward<SecurityConfigT>(value); }
    template<typename SecurityConfigT = OnlineStoreSecurityConfig>
    OnlineStoreConfig& WithSecurityConfig(SecurityConfigT&& value) { SetSecurityConfig(std::forward<SecurityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Turn <code>OnlineStore</code> off by specifying <code>False</code> for the
     * <code>EnableOnlineStore</code> flag. Turn <code>OnlineStore</code> on by
     * specifying <code>True</code> for the <code>EnableOnlineStore</code> flag. </p>
     * <p>The default value is <code>False</code>.</p>
     */
    inline bool GetEnableOnlineStore() const { return m_enableOnlineStore; }
    inline bool EnableOnlineStoreHasBeenSet() const { return m_enableOnlineStoreHasBeenSet; }
    inline void SetEnableOnlineStore(bool value) { m_enableOnlineStoreHasBeenSet = true; m_enableOnlineStore = value; }
    inline OnlineStoreConfig& WithEnableOnlineStore(bool value) { SetEnableOnlineStore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time to live duration, where the record is hard deleted after the expiration
     * time is reached; <code>ExpiresAt</code> = <code>EventTime</code> +
     * <code>TtlDuration</code>. For information on HardDelete, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_DeleteRecord.html">DeleteRecord</a>
     * API in the Amazon SageMaker API Reference guide.</p>
     */
    inline const TtlDuration& GetTtlDuration() const { return m_ttlDuration; }
    inline bool TtlDurationHasBeenSet() const { return m_ttlDurationHasBeenSet; }
    template<typename TtlDurationT = TtlDuration>
    void SetTtlDuration(TtlDurationT&& value) { m_ttlDurationHasBeenSet = true; m_ttlDuration = std::forward<TtlDurationT>(value); }
    template<typename TtlDurationT = TtlDuration>
    OnlineStoreConfig& WithTtlDuration(TtlDurationT&& value) { SetTtlDuration(std::forward<TtlDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Option for different tiers of low latency storage for real-time data
     * retrieval.</p> <ul> <li> <p> <code>Standard</code>: A managed low latency data
     * store for feature groups.</p> </li> <li> <p> <code>InMemory</code>: A managed
     * data store for feature groups that supports very low latency retrieval. </p>
     * </li> </ul>
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline OnlineStoreConfig& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}
  private:

    OnlineStoreSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    bool m_enableOnlineStore{false};
    bool m_enableOnlineStoreHasBeenSet = false;

    TtlDuration m_ttlDuration;
    bool m_ttlDurationHasBeenSet = false;

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
