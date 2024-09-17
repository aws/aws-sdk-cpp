/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
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
namespace OSIS
{
namespace Model
{

  /**
   * <p>An object representing the destination of a pipeline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/PipelineDestination">AWS
   * API Reference</a></p>
   */
  class PipelineDestination
  {
  public:
    AWS_OSIS_API PipelineDestination();
    AWS_OSIS_API PipelineDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API PipelineDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the service receiving data from the pipeline.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline PipelineDestination& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline PipelineDestination& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline PipelineDestination& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint receiving data from the pipeline.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline PipelineDestination& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline PipelineDestination& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline PipelineDestination& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
