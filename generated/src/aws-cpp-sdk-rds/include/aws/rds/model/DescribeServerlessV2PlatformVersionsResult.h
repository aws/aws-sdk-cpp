/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/ServerlessV2PlatformVersionInfo.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {
/**
 * <p>Contains the result of a successful invocation of the
 * <code>DescribeServerlessV2PlatformVersions</code> action.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ServerlessV2PlatformVersionsMessage">AWS
 * API Reference</a></p>
 */
class DescribeServerlessV2PlatformVersionsResult {
 public:
  AWS_RDS_API DescribeServerlessV2PlatformVersionsResult() = default;
  AWS_RDS_API DescribeServerlessV2PlatformVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_RDS_API DescribeServerlessV2PlatformVersionsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>An optional pagination token provided by a previous request. If this
   * parameter is specified, the response includes only records beyond the marker, up
   * to the value specified by <code>MaxRecords</code>.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  DescribeServerlessV2PlatformVersionsResult& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>ServerlessV2PlatformVersionInfo</code> elements.</p>
   */
  inline const Aws::Vector<ServerlessV2PlatformVersionInfo>& GetServerlessV2PlatformVersions() const {
    return m_serverlessV2PlatformVersions;
  }
  template <typename ServerlessV2PlatformVersionsT = Aws::Vector<ServerlessV2PlatformVersionInfo>>
  void SetServerlessV2PlatformVersions(ServerlessV2PlatformVersionsT&& value) {
    m_serverlessV2PlatformVersionsHasBeenSet = true;
    m_serverlessV2PlatformVersions = std::forward<ServerlessV2PlatformVersionsT>(value);
  }
  template <typename ServerlessV2PlatformVersionsT = Aws::Vector<ServerlessV2PlatformVersionInfo>>
  DescribeServerlessV2PlatformVersionsResult& WithServerlessV2PlatformVersions(ServerlessV2PlatformVersionsT&& value) {
    SetServerlessV2PlatformVersions(std::forward<ServerlessV2PlatformVersionsT>(value));
    return *this;
  }
  template <typename ServerlessV2PlatformVersionsT = ServerlessV2PlatformVersionInfo>
  DescribeServerlessV2PlatformVersionsResult& AddServerlessV2PlatformVersions(ServerlessV2PlatformVersionsT&& value) {
    m_serverlessV2PlatformVersionsHasBeenSet = true;
    m_serverlessV2PlatformVersions.emplace_back(std::forward<ServerlessV2PlatformVersionsT>(value));
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
  DescribeServerlessV2PlatformVersionsResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_marker;

  Aws::Vector<ServerlessV2PlatformVersionInfo> m_serverlessV2PlatformVersions;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_markerHasBeenSet = false;
  bool m_serverlessV2PlatformVersionsHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
