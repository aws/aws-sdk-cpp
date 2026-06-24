/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AutonomousDatabaseWalletDetails.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {
class GetAutonomousDatabaseWalletDetailsResult {
 public:
  AWS_ODB_API GetAutonomousDatabaseWalletDetailsResult() = default;
  AWS_ODB_API GetAutonomousDatabaseWalletDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API GetAutonomousDatabaseWalletDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The wallet details for the Autonomous Database.</p>
   */
  inline const AutonomousDatabaseWalletDetails& GetAutonomousDatabaseWalletDetails() const { return m_autonomousDatabaseWalletDetails; }
  template <typename AutonomousDatabaseWalletDetailsT = AutonomousDatabaseWalletDetails>
  void SetAutonomousDatabaseWalletDetails(AutonomousDatabaseWalletDetailsT&& value) {
    m_autonomousDatabaseWalletDetailsHasBeenSet = true;
    m_autonomousDatabaseWalletDetails = std::forward<AutonomousDatabaseWalletDetailsT>(value);
  }
  template <typename AutonomousDatabaseWalletDetailsT = AutonomousDatabaseWalletDetails>
  GetAutonomousDatabaseWalletDetailsResult& WithAutonomousDatabaseWalletDetails(AutonomousDatabaseWalletDetailsT&& value) {
    SetAutonomousDatabaseWalletDetails(std::forward<AutonomousDatabaseWalletDetailsT>(value));
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
  GetAutonomousDatabaseWalletDetailsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AutonomousDatabaseWalletDetails m_autonomousDatabaseWalletDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_autonomousDatabaseWalletDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
