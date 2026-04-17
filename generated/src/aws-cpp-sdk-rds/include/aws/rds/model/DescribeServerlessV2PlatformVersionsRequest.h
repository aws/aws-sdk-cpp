/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/RDSRequest.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/Filter.h>

#include <utility>

namespace Aws {
namespace RDS {
namespace Model {

/**
 * <p/><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeServerlessV2PlatformVersionsMessage">AWS
 * API Reference</a></p>
 */
class DescribeServerlessV2PlatformVersionsRequest : public RDSRequest {
 public:
  AWS_RDS_API DescribeServerlessV2PlatformVersionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeServerlessV2PlatformVersions"; }

  AWS_RDS_API Aws::String SerializePayload() const override;

 protected:
  AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>A specific platform version to return details for.</p> <p>Example:
   * <code>3</code> </p>
   */
  inline const Aws::String& GetServerlessV2PlatformVersion() const { return m_serverlessV2PlatformVersion; }
  inline bool ServerlessV2PlatformVersionHasBeenSet() const { return m_serverlessV2PlatformVersionHasBeenSet; }
  template <typename ServerlessV2PlatformVersionT = Aws::String>
  void SetServerlessV2PlatformVersion(ServerlessV2PlatformVersionT&& value) {
    m_serverlessV2PlatformVersionHasBeenSet = true;
    m_serverlessV2PlatformVersion = std::forward<ServerlessV2PlatformVersionT>(value);
  }
  template <typename ServerlessV2PlatformVersionT = Aws::String>
  DescribeServerlessV2PlatformVersionsRequest& WithServerlessV2PlatformVersion(ServerlessV2PlatformVersionT&& value) {
    SetServerlessV2PlatformVersion(std::forward<ServerlessV2PlatformVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The database engine to return platform version details for.</p> <p>Valid
   * Values:</p> <ul> <li> <p> <code>aurora-mysql</code> </p> </li> <li> <p>
   * <code>aurora-postgresql</code> </p> </li> </ul>
   */
  inline const Aws::String& GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  template <typename EngineT = Aws::String>
  void SetEngine(EngineT&& value) {
    m_engineHasBeenSet = true;
    m_engine = std::forward<EngineT>(value);
  }
  template <typename EngineT = Aws::String>
  DescribeServerlessV2PlatformVersionsRequest& WithEngine(EngineT&& value) {
    SetEngine(std::forward<EngineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This parameter isn't currently supported.</p>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  DescribeServerlessV2PlatformVersionsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  DescribeServerlessV2PlatformVersionsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to return only the default platform versions for each
   * engine. The default platform version is the version used for new DB
   * clusters.</p>
   */
  inline bool GetDefaultOnly() const { return m_defaultOnly; }
  inline bool DefaultOnlyHasBeenSet() const { return m_defaultOnlyHasBeenSet; }
  inline void SetDefaultOnly(bool value) {
    m_defaultOnlyHasBeenSet = true;
    m_defaultOnly = value;
  }
  inline DescribeServerlessV2PlatformVersionsRequest& WithDefaultOnly(bool value) {
    SetDefaultOnly(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to also include platform versions which are no longer in
   * use.</p>
   */
  inline bool GetIncludeAll() const { return m_includeAll; }
  inline bool IncludeAllHasBeenSet() const { return m_includeAllHasBeenSet; }
  inline void SetIncludeAll(bool value) {
    m_includeAllHasBeenSet = true;
    m_includeAll = value;
  }
  inline DescribeServerlessV2PlatformVersionsRequest& WithIncludeAll(bool value) {
    SetIncludeAll(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of records to include in the response. If more than the
   * <code>MaxRecords</code> value is available, a pagination token called a marker
   * is included in the response so you can retrieve the remaining results.</p>
   * <p>Default: 20</p> <p>Constraints: Minimum 1, maximum 200.</p>
   */
  inline int GetMaxRecords() const { return m_maxRecords; }
  inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
  inline void SetMaxRecords(int value) {
    m_maxRecordsHasBeenSet = true;
    m_maxRecords = value;
  }
  inline DescribeServerlessV2PlatformVersionsRequest& WithMaxRecords(int value) {
    SetMaxRecords(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional pagination token provided by a previous request. If this
   * parameter is specified, the response includes only records beyond the marker, up
   * to the value specified by <code>MaxRecords</code>.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  DescribeServerlessV2PlatformVersionsRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serverlessV2PlatformVersion;

  Aws::String m_engine;

  Aws::Vector<Filter> m_filters;

  bool m_defaultOnly{false};

  bool m_includeAll{false};

  int m_maxRecords{0};

  Aws::String m_marker;
  bool m_serverlessV2PlatformVersionHasBeenSet = false;
  bool m_engineHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_defaultOnlyHasBeenSet = false;
  bool m_includeAllHasBeenSet = false;
  bool m_maxRecordsHasBeenSet = false;
  bool m_markerHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
