/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputDeviceSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListInputDevicesResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDevicesResponse">AWS
   * API Reference</a></p>
   */
  class ListInputDevicesResult
  {
  public:
    AWS_MEDIALIVE_API ListInputDevicesResult() = default;
    AWS_MEDIALIVE_API ListInputDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListInputDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The list of input devices.
     */
    inline const Aws::Vector<InputDeviceSummary>& GetInputDevices() const { return m_inputDevices; }
    template<typename InputDevicesT = Aws::Vector<InputDeviceSummary>>
    void SetInputDevices(InputDevicesT&& value) { m_inputDevicesHasBeenSet = true; m_inputDevices = std::forward<InputDevicesT>(value); }
    template<typename InputDevicesT = Aws::Vector<InputDeviceSummary>>
    ListInputDevicesResult& WithInputDevices(InputDevicesT&& value) { SetInputDevices(std::forward<InputDevicesT>(value)); return *this;}
    template<typename InputDevicesT = InputDeviceSummary>
    ListInputDevicesResult& AddInputDevices(InputDevicesT&& value) { m_inputDevicesHasBeenSet = true; m_inputDevices.emplace_back(std::forward<InputDevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A token to get additional list results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInputDevicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInputDevicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InputDeviceSummary> m_inputDevices;
    bool m_inputDevicesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
