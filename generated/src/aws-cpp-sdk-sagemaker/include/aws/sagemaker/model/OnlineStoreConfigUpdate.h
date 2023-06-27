/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TtlDuration.h>
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
   * <p>Updates the feature group online store configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OnlineStoreConfigUpdate">AWS
   * API Reference</a></p>
   */
  class OnlineStoreConfigUpdate
  {
  public:
    AWS_SAGEMAKER_API OnlineStoreConfigUpdate();
    AWS_SAGEMAKER_API OnlineStoreConfigUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OnlineStoreConfigUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline OnlineStoreConfigUpdate& WithTtlDuration(const TtlDuration& value) { SetTtlDuration(value); return *this;}

    /**
     * <p>Time to live duration, where the record is hard deleted after the expiration
     * time is reached; <code>ExpiresAt</code> = <code>EventTime</code> +
     * <code>TtlDuration</code>. For information on HardDelete, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_DeleteRecord.html">DeleteRecord</a>
     * API in the Amazon SageMaker API Reference guide.</p>
     */
    inline OnlineStoreConfigUpdate& WithTtlDuration(TtlDuration&& value) { SetTtlDuration(std::move(value)); return *this;}

  private:

    TtlDuration m_ttlDuration;
    bool m_ttlDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
