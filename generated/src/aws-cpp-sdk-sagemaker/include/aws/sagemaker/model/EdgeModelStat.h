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
    AWS_SAGEMAKER_API EdgeModelStat();
    AWS_SAGEMAKER_API EdgeModelStat(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgeModelStat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline EdgeModelStat& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline EdgeModelStat& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline EdgeModelStat& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }
    inline EdgeModelStat& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}
    inline EdgeModelStat& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}
    inline EdgeModelStat& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices that have this model version and do not have a heart
     * beat.</p>
     */
    inline long long GetOfflineDeviceCount() const{ return m_offlineDeviceCount; }
    inline bool OfflineDeviceCountHasBeenSet() const { return m_offlineDeviceCountHasBeenSet; }
    inline void SetOfflineDeviceCount(long long value) { m_offlineDeviceCountHasBeenSet = true; m_offlineDeviceCount = value; }
    inline EdgeModelStat& WithOfflineDeviceCount(long long value) { SetOfflineDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices that have this model version and have a heart beat.
     * </p>
     */
    inline long long GetConnectedDeviceCount() const{ return m_connectedDeviceCount; }
    inline bool ConnectedDeviceCountHasBeenSet() const { return m_connectedDeviceCountHasBeenSet; }
    inline void SetConnectedDeviceCount(long long value) { m_connectedDeviceCountHasBeenSet = true; m_connectedDeviceCount = value; }
    inline EdgeModelStat& WithConnectedDeviceCount(long long value) { SetConnectedDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices that have this model version, a heart beat, and are
     * currently running.</p>
     */
    inline long long GetActiveDeviceCount() const{ return m_activeDeviceCount; }
    inline bool ActiveDeviceCountHasBeenSet() const { return m_activeDeviceCountHasBeenSet; }
    inline void SetActiveDeviceCount(long long value) { m_activeDeviceCountHasBeenSet = true; m_activeDeviceCount = value; }
    inline EdgeModelStat& WithActiveDeviceCount(long long value) { SetActiveDeviceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices with this model version and are producing sample
     * data.</p>
     */
    inline long long GetSamplingDeviceCount() const{ return m_samplingDeviceCount; }
    inline bool SamplingDeviceCountHasBeenSet() const { return m_samplingDeviceCountHasBeenSet; }
    inline void SetSamplingDeviceCount(long long value) { m_samplingDeviceCountHasBeenSet = true; m_samplingDeviceCount = value; }
    inline EdgeModelStat& WithSamplingDeviceCount(long long value) { SetSamplingDeviceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    long long m_offlineDeviceCount;
    bool m_offlineDeviceCountHasBeenSet = false;

    long long m_connectedDeviceCount;
    bool m_connectedDeviceCountHasBeenSet = false;

    long long m_activeDeviceCount;
    bool m_activeDeviceCountHasBeenSet = false;

    long long m_samplingDeviceCount;
    bool m_samplingDeviceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
