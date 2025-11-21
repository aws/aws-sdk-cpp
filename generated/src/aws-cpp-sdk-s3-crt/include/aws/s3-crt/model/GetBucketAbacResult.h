/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/AbacStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace S3Crt {
namespace Model {
class GetBucketAbacResult {
 public:
  AWS_S3CRT_API GetBucketAbacResult() = default;
  AWS_S3CRT_API GetBucketAbacResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_S3CRT_API GetBucketAbacResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The ABAC status of the general purpose bucket. </p>
   */
  inline const AbacStatus& GetAbacStatus() const { return m_abacStatus; }
  template <typename AbacStatusT = AbacStatus>
  void SetAbacStatus(AbacStatusT&& value) {
    m_abacStatusHasBeenSet = true;
    m_abacStatus = std::forward<AbacStatusT>(value);
  }
  template <typename AbacStatusT = AbacStatus>
  GetBucketAbacResult& WithAbacStatus(AbacStatusT&& value) {
    SetAbacStatus(std::forward<AbacStatusT>(value));
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
  GetBucketAbacResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  AbacStatus m_abacStatus;
  bool m_abacStatusHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
