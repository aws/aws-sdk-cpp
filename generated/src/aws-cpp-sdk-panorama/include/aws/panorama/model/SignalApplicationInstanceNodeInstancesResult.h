/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Panorama
{
namespace Model
{
  class SignalApplicationInstanceNodeInstancesResult
  {
  public:
    AWS_PANORAMA_API SignalApplicationInstanceNodeInstancesResult();
    AWS_PANORAMA_API SignalApplicationInstanceNodeInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API SignalApplicationInstanceNodeInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An application instance ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const{ return m_applicationInstanceId; }

    /**
     * <p>An application instance ID.</p>
     */
    inline void SetApplicationInstanceId(const Aws::String& value) { m_applicationInstanceId = value; }

    /**
     * <p>An application instance ID.</p>
     */
    inline void SetApplicationInstanceId(Aws::String&& value) { m_applicationInstanceId = std::move(value); }

    /**
     * <p>An application instance ID.</p>
     */
    inline void SetApplicationInstanceId(const char* value) { m_applicationInstanceId.assign(value); }

    /**
     * <p>An application instance ID.</p>
     */
    inline SignalApplicationInstanceNodeInstancesResult& WithApplicationInstanceId(const Aws::String& value) { SetApplicationInstanceId(value); return *this;}

    /**
     * <p>An application instance ID.</p>
     */
    inline SignalApplicationInstanceNodeInstancesResult& WithApplicationInstanceId(Aws::String&& value) { SetApplicationInstanceId(std::move(value)); return *this;}

    /**
     * <p>An application instance ID.</p>
     */
    inline SignalApplicationInstanceNodeInstancesResult& WithApplicationInstanceId(const char* value) { SetApplicationInstanceId(value); return *this;}

  private:

    Aws::String m_applicationInstanceId;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
