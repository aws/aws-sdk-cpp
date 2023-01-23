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


    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline EdgeModelStat& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline EdgeModelStat& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline EdgeModelStat& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The model version.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The model version.</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The model version.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The model version.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p>The model version.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p>The model version.</p>
     */
    inline EdgeModelStat& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The model version.</p>
     */
    inline EdgeModelStat& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The model version.</p>
     */
    inline EdgeModelStat& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p>The number of devices that have this model version and do not have a heart
     * beat.</p>
     */
    inline long long GetOfflineDeviceCount() const{ return m_offlineDeviceCount; }

    /**
     * <p>The number of devices that have this model version and do not have a heart
     * beat.</p>
     */
    inline bool OfflineDeviceCountHasBeenSet() const { return m_offlineDeviceCountHasBeenSet; }

    /**
     * <p>The number of devices that have this model version and do not have a heart
     * beat.</p>
     */
    inline void SetOfflineDeviceCount(long long value) { m_offlineDeviceCountHasBeenSet = true; m_offlineDeviceCount = value; }

    /**
     * <p>The number of devices that have this model version and do not have a heart
     * beat.</p>
     */
    inline EdgeModelStat& WithOfflineDeviceCount(long long value) { SetOfflineDeviceCount(value); return *this;}


    /**
     * <p>The number of devices that have this model version and have a heart beat.
     * </p>
     */
    inline long long GetConnectedDeviceCount() const{ return m_connectedDeviceCount; }

    /**
     * <p>The number of devices that have this model version and have a heart beat.
     * </p>
     */
    inline bool ConnectedDeviceCountHasBeenSet() const { return m_connectedDeviceCountHasBeenSet; }

    /**
     * <p>The number of devices that have this model version and have a heart beat.
     * </p>
     */
    inline void SetConnectedDeviceCount(long long value) { m_connectedDeviceCountHasBeenSet = true; m_connectedDeviceCount = value; }

    /**
     * <p>The number of devices that have this model version and have a heart beat.
     * </p>
     */
    inline EdgeModelStat& WithConnectedDeviceCount(long long value) { SetConnectedDeviceCount(value); return *this;}


    /**
     * <p>The number of devices that have this model version, a heart beat, and are
     * currently running.</p>
     */
    inline long long GetActiveDeviceCount() const{ return m_activeDeviceCount; }

    /**
     * <p>The number of devices that have this model version, a heart beat, and are
     * currently running.</p>
     */
    inline bool ActiveDeviceCountHasBeenSet() const { return m_activeDeviceCountHasBeenSet; }

    /**
     * <p>The number of devices that have this model version, a heart beat, and are
     * currently running.</p>
     */
    inline void SetActiveDeviceCount(long long value) { m_activeDeviceCountHasBeenSet = true; m_activeDeviceCount = value; }

    /**
     * <p>The number of devices that have this model version, a heart beat, and are
     * currently running.</p>
     */
    inline EdgeModelStat& WithActiveDeviceCount(long long value) { SetActiveDeviceCount(value); return *this;}


    /**
     * <p>The number of devices with this model version and are producing sample
     * data.</p>
     */
    inline long long GetSamplingDeviceCount() const{ return m_samplingDeviceCount; }

    /**
     * <p>The number of devices with this model version and are producing sample
     * data.</p>
     */
    inline bool SamplingDeviceCountHasBeenSet() const { return m_samplingDeviceCountHasBeenSet; }

    /**
     * <p>The number of devices with this model version and are producing sample
     * data.</p>
     */
    inline void SetSamplingDeviceCount(long long value) { m_samplingDeviceCountHasBeenSet = true; m_samplingDeviceCount = value; }

    /**
     * <p>The number of devices with this model version and are producing sample
     * data.</p>
     */
    inline EdgeModelStat& WithSamplingDeviceCount(long long value) { SetSamplingDeviceCount(value); return *this;}

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
