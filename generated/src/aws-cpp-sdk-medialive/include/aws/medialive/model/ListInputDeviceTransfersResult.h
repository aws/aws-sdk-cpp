/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/TransferringInputDeviceSummary.h>
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
   * Placeholder documentation for ListInputDeviceTransfersResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDeviceTransfersResponse">AWS
   * API Reference</a></p>
   */
  class ListInputDeviceTransfersResult
  {
  public:
    AWS_MEDIALIVE_API ListInputDeviceTransfersResult() = default;
    AWS_MEDIALIVE_API ListInputDeviceTransfersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListInputDeviceTransfersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The list of devices that you are transferring or are being transferred to you.
     */
    inline const Aws::Vector<TransferringInputDeviceSummary>& GetInputDeviceTransfers() const { return m_inputDeviceTransfers; }
    template<typename InputDeviceTransfersT = Aws::Vector<TransferringInputDeviceSummary>>
    void SetInputDeviceTransfers(InputDeviceTransfersT&& value) { m_inputDeviceTransfersHasBeenSet = true; m_inputDeviceTransfers = std::forward<InputDeviceTransfersT>(value); }
    template<typename InputDeviceTransfersT = Aws::Vector<TransferringInputDeviceSummary>>
    ListInputDeviceTransfersResult& WithInputDeviceTransfers(InputDeviceTransfersT&& value) { SetInputDeviceTransfers(std::forward<InputDeviceTransfersT>(value)); return *this;}
    template<typename InputDeviceTransfersT = TransferringInputDeviceSummary>
    ListInputDeviceTransfersResult& AddInputDeviceTransfers(InputDeviceTransfersT&& value) { m_inputDeviceTransfersHasBeenSet = true; m_inputDeviceTransfers.emplace_back(std::forward<InputDeviceTransfersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A token to get additional list results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInputDeviceTransfersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInputDeviceTransfersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransferringInputDeviceSummary> m_inputDeviceTransfers;
    bool m_inputDeviceTransfersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
