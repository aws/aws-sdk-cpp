/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/BasicDeviceObject.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {
class ListDevicesForUserResult {
 public:
  AWS_WICKR_API ListDevicesForUserResult() = default;
  AWS_WICKR_API ListDevicesForUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API ListDevicesForUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token to use for retrieving the next page of results. If this is not
   * present, there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDevicesForUserResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of device objects associated with the user within the current
   * page.</p>
   */
  inline const Aws::Vector<BasicDeviceObject>& GetDevices() const { return m_devices; }
  template <typename DevicesT = Aws::Vector<BasicDeviceObject>>
  void SetDevices(DevicesT&& value) {
    m_devicesHasBeenSet = true;
    m_devices = std::forward<DevicesT>(value);
  }
  template <typename DevicesT = Aws::Vector<BasicDeviceObject>>
  ListDevicesForUserResult& WithDevices(DevicesT&& value) {
    SetDevices(std::forward<DevicesT>(value));
    return *this;
  }
  template <typename DevicesT = BasicDeviceObject>
  ListDevicesForUserResult& AddDevices(DevicesT&& value) {
    m_devicesHasBeenSet = true;
    m_devices.emplace_back(std::forward<DevicesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListDevicesForUserResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<BasicDeviceObject> m_devices;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_devicesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
