/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
   * <p>Status of edge devices with this model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EdgeModelStat">AWS
   * API Reference</a></p>
   */
  class EdgeModelStat
  {
  public:
    AWS_SAGEMAKER_API EdgeModelStat() = default;
    AWS_SAGEMAKER_API EdgeModelStat(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgeModelStat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    EdgeModelStat& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version.</p>
     */
    inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    template<typename ModelVersionT = Aws::String>
    void SetModelVersion(ModelVersionT&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::forward<ModelVersionT>(value); }
    template<typename ModelVersionT = Aws::String>
    EdgeModelStat& WithModelVersion(ModelVersionT&& value) { SetModelVersion(std::forward<ModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices that have this model version and do not have a heart
     * beat.</p>
     */
    inline long long GetOfflineDeviceCount() const { return m_offlineDeviceCount; }
    inline bool OfflineDeviceCountHasBeenSet() const { return m_offlineDeviceCountHasBeenSet; }
    inline void SetOfflineDeviceCount(long long value) { m_offlineDeviceCountHasBeenSet = true; m_offlineDeviceCount = value; }
    inline EdgeModelStat& WithOfflineDeviceCount(long long value) { SetOfflineDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices that have this model version and have a heart beat.
     * </p>
     */
    inline long long GetConnectedDeviceCount() const { return m_connectedDeviceCount; }
    inline bool ConnectedDeviceCountHasBeenSet() const { return m_connectedDeviceCountHasBeenSet; }
    inline void SetConnectedDeviceCount(long long value) { m_connectedDeviceCountHasBeenSet = true; m_connectedDeviceCount = value; }
    inline EdgeModelStat& WithConnectedDeviceCount(long long value) { SetConnectedDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices that have this model version, a heart beat, and are
     * currently running.</p>
     */
    inline long long GetActiveDeviceCount() const { return m_activeDeviceCount; }
    inline bool ActiveDeviceCountHasBeenSet() const { return m_activeDeviceCountHasBeenSet; }
    inline void SetActiveDeviceCount(long long value) { m_activeDeviceCountHasBeenSet = true; m_activeDeviceCount = value; }
    inline EdgeModelStat& WithActiveDeviceCount(long long value) { SetActiveDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices with this model version and are producing sample
     * data.</p>
     */
    inline long long GetSamplingDeviceCount() const { return m_samplingDeviceCount; }
    inline bool SamplingDeviceCountHasBeenSet() const { return m_samplingDeviceCountHasBeenSet; }
    inline void SetSamplingDeviceCount(long long value) { m_samplingDeviceCountHasBeenSet = true; m_samplingDeviceCount = value; }
    inline EdgeModelStat& WithSamplingDeviceCount(long long value) { SetSamplingDeviceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    long long m_offlineDeviceCount{0};
    bool m_offlineDeviceCountHasBeenSet = false;

    long long m_connectedDeviceCount{0};
    bool m_connectedDeviceCountHasBeenSet = false;

    long long m_activeDeviceCount{0};
    bool m_activeDeviceCountHasBeenSet = false;

    long long m_samplingDeviceCount{0};
    bool m_samplingDeviceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
