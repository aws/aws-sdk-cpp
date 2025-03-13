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
    AWS_PANORAMA_API SignalApplicationInstanceNodeInstancesResult() = default;
    AWS_PANORAMA_API SignalApplicationInstanceNodeInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API SignalApplicationInstanceNodeInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An application instance ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const { return m_applicationInstanceId; }
    template<typename ApplicationInstanceIdT = Aws::String>
    void SetApplicationInstanceId(ApplicationInstanceIdT&& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = std::forward<ApplicationInstanceIdT>(value); }
    template<typename ApplicationInstanceIdT = Aws::String>
    SignalApplicationInstanceNodeInstancesResult& WithApplicationInstanceId(ApplicationInstanceIdT&& value) { SetApplicationInstanceId(std::forward<ApplicationInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SignalApplicationInstanceNodeInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationInstanceId;
    bool m_applicationInstanceIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
