/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
class DescribeQev2IdcApplicationsResult {
 public:
  AWS_REDSHIFT_API DescribeQev2IdcApplicationsResult() = default;
  AWS_REDSHIFT_API DescribeQev2IdcApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_REDSHIFT_API DescribeQev2IdcApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The list of Amazon Redshift Query Editor (QEV2) IAM Identity Center
   * applications.</p>
   */
  inline const Aws::Vector<Qev2IdcApplication>& GetQev2IdcApplications() const { return m_qev2IdcApplications; }
  template <typename Qev2IdcApplicationsT = Aws::Vector<Qev2IdcApplication>>
  void SetQev2IdcApplications(Qev2IdcApplicationsT&& value) {
    m_qev2IdcApplicationsHasBeenSet = true;
    m_qev2IdcApplications = std::forward<Qev2IdcApplicationsT>(value);
  }
  template <typename Qev2IdcApplicationsT = Aws::Vector<Qev2IdcApplication>>
  DescribeQev2IdcApplicationsResult& WithQev2IdcApplications(Qev2IdcApplicationsT&& value) {
    SetQev2IdcApplications(std::forward<Qev2IdcApplicationsT>(value));
    return *this;
  }
  template <typename Qev2IdcApplicationsT = Qev2IdcApplication>
  DescribeQev2IdcApplicationsResult& AddQev2IdcApplications(Qev2IdcApplicationsT&& value) {
    m_qev2IdcApplicationsHasBeenSet = true;
    m_qev2IdcApplications.emplace_back(std::forward<Qev2IdcApplicationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A value that indicates the starting point for the next set of response
   * records in a subsequent request. If a value is returned in a response, you can
   * retrieve the next set of records by providing this returned marker value in the
   * Marker parameter and retrying the command. If the Marker field is empty, all
   * response records have been retrieved for the request. </p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  DescribeQev2IdcApplicationsResult& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
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
  DescribeQev2IdcApplicationsResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Qev2IdcApplication> m_qev2IdcApplications;

  Aws::String m_marker;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_qev2IdcApplicationsHasBeenSet = false;
  bool m_markerHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
