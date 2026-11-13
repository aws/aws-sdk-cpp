/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/RRType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Route53 {
namespace Model {

/**
 */
class ListResourceRecordSetProtectionsRequest : public Route53Request {
 public:
  AWS_ROUTE53_API ListResourceRecordSetProtectionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListResourceRecordSetProtections"; }

  AWS_ROUTE53_API Aws::String SerializePayload() const override;

  AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the hosted zone that contains the protections that you want to
   * list.</p>
   */
  inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
  inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
  template <typename HostedZoneIdT = Aws::String>
  void SetHostedZoneId(HostedZoneIdT&& value) {
    m_hostedZoneIdHasBeenSet = true;
    m_hostedZoneId = std::forward<HostedZoneIdT>(value);
  }
  template <typename HostedZoneIdT = Aws::String>
  ListResourceRecordSetProtectionsRequest& WithHostedZoneId(HostedZoneIdT&& value) {
    SetHostedZoneId(std::forward<HostedZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The first resource record set name that you want Route 53 to list protections
   * for. If you don't specify a value, the list starts with the first protection in
   * the hosted zone.</p> <p>If you specify <code>NextToken</code>, Route 53 ignores
   * <code>StartRecordName</code>.</p>
   */
  inline const Aws::String& GetStartRecordName() const { return m_startRecordName; }
  inline bool StartRecordNameHasBeenSet() const { return m_startRecordNameHasBeenSet; }
  template <typename StartRecordNameT = Aws::String>
  void SetStartRecordName(StartRecordNameT&& value) {
    m_startRecordNameHasBeenSet = true;
    m_startRecordName = std::forward<StartRecordNameT>(value);
  }
  template <typename StartRecordNameT = Aws::String>
  ListResourceRecordSetProtectionsRequest& WithStartRecordName(StartRecordNameT&& value) {
    SetStartRecordName(std::forward<StartRecordNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The first resource record set type, within the name specified by
   * <code>StartRecordName</code>, that you want Route 53 to list protections for. If
   * you specify <code>StartRecordType</code>, you must also specify
   * <code>StartRecordName</code>.</p> <p>If you specify <code>NextToken</code>,
   * Route 53 ignores <code>StartRecordType</code>.</p>
   */
  inline RRType GetStartRecordType() const { return m_startRecordType; }
  inline bool StartRecordTypeHasBeenSet() const { return m_startRecordTypeHasBeenSet; }
  inline void SetStartRecordType(RRType value) {
    m_startRecordTypeHasBeenSet = true;
    m_startRecordType = value;
  }
  inline ListResourceRecordSetProtectionsRequest& WithStartRecordType(RRType value) {
    SetStartRecordType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of protections that you want Route 53 to return in this
   * response. If you don't specify a value, or if you specify a value greater than
   * 300, Route 53 returns up to 300 protections.</p>
   */
  inline const Aws::String& GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  template <typename MaxResultsT = Aws::String>
  void SetMaxResults(MaxResultsT&& value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = std::forward<MaxResultsT>(value);
  }
  template <typename MaxResultsT = Aws::String>
  ListResourceRecordSetProtectionsRequest& WithMaxResults(MaxResultsT&& value) {
    SetMaxResults(std::forward<MaxResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response to a previous <code>ListResourceRecordSetProtections</code>
   * request included a <code>NextToken</code> element, specify that value here to
   * get the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListResourceRecordSetProtectionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hostedZoneId;

  Aws::String m_startRecordName;

  RRType m_startRecordType{RRType::NOT_SET};

  Aws::String m_maxResults;

  Aws::String m_nextToken;
  bool m_hostedZoneIdHasBeenSet = false;
  bool m_startRecordNameHasBeenSet = false;
  bool m_startRecordTypeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
