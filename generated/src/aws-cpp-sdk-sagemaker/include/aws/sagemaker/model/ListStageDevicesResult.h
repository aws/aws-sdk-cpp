/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DeviceDeploymentSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class ListStageDevicesResult
  {
  public:
    AWS_SAGEMAKER_API ListStageDevicesResult();
    AWS_SAGEMAKER_API ListStageDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListStageDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of summaries of devices allocated to the stage.</p>
     */
    inline const Aws::Vector<DeviceDeploymentSummary>& GetDeviceDeploymentSummaries() const{ return m_deviceDeploymentSummaries; }

    /**
     * <p>List of summaries of devices allocated to the stage.</p>
     */
    inline void SetDeviceDeploymentSummaries(const Aws::Vector<DeviceDeploymentSummary>& value) { m_deviceDeploymentSummaries = value; }

    /**
     * <p>List of summaries of devices allocated to the stage.</p>
     */
    inline void SetDeviceDeploymentSummaries(Aws::Vector<DeviceDeploymentSummary>&& value) { m_deviceDeploymentSummaries = std::move(value); }

    /**
     * <p>List of summaries of devices allocated to the stage.</p>
     */
    inline ListStageDevicesResult& WithDeviceDeploymentSummaries(const Aws::Vector<DeviceDeploymentSummary>& value) { SetDeviceDeploymentSummaries(value); return *this;}

    /**
     * <p>List of summaries of devices allocated to the stage.</p>
     */
    inline ListStageDevicesResult& WithDeviceDeploymentSummaries(Aws::Vector<DeviceDeploymentSummary>&& value) { SetDeviceDeploymentSummaries(std::move(value)); return *this;}

    /**
     * <p>List of summaries of devices allocated to the stage.</p>
     */
    inline ListStageDevicesResult& AddDeviceDeploymentSummaries(const DeviceDeploymentSummary& value) { m_deviceDeploymentSummaries.push_back(value); return *this; }

    /**
     * <p>List of summaries of devices allocated to the stage.</p>
     */
    inline ListStageDevicesResult& AddDeviceDeploymentSummaries(DeviceDeploymentSummary&& value) { m_deviceDeploymentSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline ListStageDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline ListStageDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline ListStageDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeviceDeploymentSummary> m_deviceDeploymentSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
