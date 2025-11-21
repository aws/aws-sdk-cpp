/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/RelationshipDetail.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {
class GetRelationshipResult {
 public:
  AWS_PARTNERCENTRALCHANNEL_API GetRelationshipResult() = default;
  AWS_PARTNERCENTRALCHANNEL_API GetRelationshipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALCHANNEL_API GetRelationshipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details of the requested relationship.</p>
   */
  inline const RelationshipDetail& GetRelationshipDetail() const { return m_relationshipDetail; }
  template <typename RelationshipDetailT = RelationshipDetail>
  void SetRelationshipDetail(RelationshipDetailT&& value) {
    m_relationshipDetailHasBeenSet = true;
    m_relationshipDetail = std::forward<RelationshipDetailT>(value);
  }
  template <typename RelationshipDetailT = RelationshipDetail>
  GetRelationshipResult& WithRelationshipDetail(RelationshipDetailT&& value) {
    SetRelationshipDetail(std::forward<RelationshipDetailT>(value));
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
  GetRelationshipResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  RelationshipDetail m_relationshipDetail;
  bool m_relationshipDetailHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
