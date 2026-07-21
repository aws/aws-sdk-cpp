/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/Qev2IdcApplication.h>
#include <aws/redshift/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace Redshift {
namespace Model {
class ModifyQev2IdcApplicationResult {
 public:
  AWS_REDSHIFT_API ModifyQev2IdcApplicationResult() = default;
  AWS_REDSHIFT_API ModifyQev2IdcApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_REDSHIFT_API ModifyQev2IdcApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Qev2IdcApplication& GetQev2IdcApplication() const { return m_qev2IdcApplication; }
  template <typename Qev2IdcApplicationT = Qev2IdcApplication>
  void SetQev2IdcApplication(Qev2IdcApplicationT&& value) {
    m_qev2IdcApplicationHasBeenSet = true;
    m_qev2IdcApplication = std::forward<Qev2IdcApplicationT>(value);
  }
  template <typename Qev2IdcApplicationT = Qev2IdcApplication>
  ModifyQev2IdcApplicationResult& WithQev2IdcApplication(Qev2IdcApplicationT&& value) {
    SetQev2IdcApplication(std::forward<Qev2IdcApplicationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  ModifyQev2IdcApplicationResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Qev2IdcApplication m_qev2IdcApplication;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_qev2IdcApplicationHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
