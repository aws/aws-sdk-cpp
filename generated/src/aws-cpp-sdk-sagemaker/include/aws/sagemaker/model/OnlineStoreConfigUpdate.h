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
    AWS_SAGEMAKER_API OnlineStoreConfigUpdate() = default;
    AWS_SAGEMAKER_API OnlineStoreConfigUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OnlineStoreConfigUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    OnlineStoreConfigUpdate& WithTtlDuration(TtlDurationT&& value) { SetTtlDuration(std::forward<TtlDurationT>(value)); return *this;}
    ///@}
  private:

    TtlDuration m_ttlDuration;
    bool m_ttlDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
