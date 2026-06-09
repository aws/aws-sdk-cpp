/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/model/ServiceType.h>

#include <utility>

namespace Aws {
namespace PI {
namespace Model {

/**
 */
class ListPerformanceAnalysisReportRecommendationsRequest : public PIRequest {
 public:
  AWS_PI_API ListPerformanceAnalysisReportRecommendationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListPerformanceAnalysisReportRecommendations"; }

  AWS_PI_API Aws::String SerializePayload() const override;

  AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Web Services service for which Performance Insights returns
   * metrics. Valid value is <code>RDS</code>.</p>
   */
  inline ServiceType GetServiceType() const { return m_serviceType; }
  inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
  inline void SetServiceType(ServiceType value) {
    m_serviceTypeHasBeenSet = true;
    m_serviceType = value;
  }
  inline ListPerformanceAnalysisReportRecommendationsRequest& WithServiceType(ServiceType value) {
    SetServiceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An immutable identifier for a data source that is unique for an Amazon Web
   * Services Region. Performance Insights gathers metrics from this data source. In
   * the console, the identifier is shown as <i>ResourceID</i>. When you call
   * <code>DescribeDBInstances</code>, the identifier is returned as
   * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
   * specify its <code>DbiResourceId</code> value. For example, specify
   * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  ListPerformanceAnalysisReportRecommendationsRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier of the created analysis report. For example,
   * <code>report-12345678901234567</code> </p>
   */
  inline const Aws::String& GetAnalysisReportId() const { return m_analysisReportId; }
  inline bool AnalysisReportIdHasBeenSet() const { return m_analysisReportIdHasBeenSet; }
  template <typename AnalysisReportIdT = Aws::String>
  void SetAnalysisReportId(AnalysisReportIdT&& value) {
    m_analysisReportIdHasBeenSet = true;
    m_analysisReportId = std::forward<AnalysisReportIdT>(value);
  }
  template <typename AnalysisReportIdT = Aws::String>
  ListPerformanceAnalysisReportRecommendationsRequest& WithAnalysisReportId(AnalysisReportIdT&& value) {
    SetAnalysisReportId(std::forward<AnalysisReportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of recommendation identifiers to filter the results.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRecommendationIds() const { return m_recommendationIds; }
  inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }
  template <typename RecommendationIdsT = Aws::Vector<Aws::String>>
  void SetRecommendationIds(RecommendationIdsT&& value) {
    m_recommendationIdsHasBeenSet = true;
    m_recommendationIds = std::forward<RecommendationIdsT>(value);
  }
  template <typename RecommendationIdsT = Aws::Vector<Aws::String>>
  ListPerformanceAnalysisReportRecommendationsRequest& WithRecommendationIds(RecommendationIdsT&& value) {
    SetRecommendationIds(std::forward<RecommendationIdsT>(value));
    return *this;
  }
  template <typename RecommendationIdsT = Aws::String>
  ListPerformanceAnalysisReportRecommendationsRequest& AddRecommendationIds(RecommendationIdsT&& value) {
    m_recommendationIdsHasBeenSet = true;
    m_recommendationIds.emplace_back(std::forward<RecommendationIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to return in the response. If more items exist
   * than the specified <code>MaxResults</code> value, a pagination token is included
   * in the response so that the remaining results can be retrieved. </p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListPerformanceAnalysisReportRecommendationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional pagination token provided by a previous request. If this
   * parameter is specified, the response includes only records beyond the token, up
   * to the value specified by <code>MaxResults</code>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPerformanceAnalysisReportRecommendationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  ServiceType m_serviceType{ServiceType::NOT_SET};

  Aws::String m_identifier;

  Aws::String m_analysisReportId;

  Aws::Vector<Aws::String> m_recommendationIds;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_serviceTypeHasBeenSet = false;
  bool m_identifierHasBeenSet = false;
  bool m_analysisReportIdHasBeenSet = false;
  bool m_recommendationIdsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PI
}  // namespace Aws
