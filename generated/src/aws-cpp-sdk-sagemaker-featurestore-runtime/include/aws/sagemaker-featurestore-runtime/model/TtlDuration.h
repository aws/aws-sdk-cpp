﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/model/TtlDurationUnit.h>
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
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

  /**
   * <p>Time to live duration, where the record is hard deleted after the expiration
   * time is reached; <code>ExpiresAt</code> = <code>EventTime</code> +
   * <code>TtlDuration</code>. For information on HardDelete, see the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_DeleteRecord.html">DeleteRecord</a>
   * API in the Amazon SageMaker API Reference guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/TtlDuration">AWS
   * API Reference</a></p>
   */
  class TtlDuration
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API TtlDuration();
    AWS_SAGEMAKERFEATURESTORERUNTIME_API TtlDuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API TtlDuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <code>TtlDuration</code> time unit.</p>
     */
    inline const TtlDurationUnit& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const TtlDurationUnit& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(TtlDurationUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline TtlDuration& WithUnit(const TtlDurationUnit& value) { SetUnit(value); return *this;}
    inline TtlDuration& WithUnit(TtlDurationUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TtlDuration</code> time value.</p>
     */
    inline int GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline TtlDuration& WithValue(int value) { SetValue(value); return *this;}
    ///@}
  private:

    TtlDurationUnit m_unit;
    bool m_unitHasBeenSet = false;

    int m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
