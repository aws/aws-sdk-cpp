/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/ReplicationDestinationStatusModel.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {
class GetTableReplicationStatusResult {
 public:
  AWS_S3TABLES_API GetTableReplicationStatusResult() = default;
  AWS_S3TABLES_API GetTableReplicationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3TABLES_API GetTableReplicationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source table being replicated.</p>
   */
  inline const Aws::String& GetSourceTableArn() const { return m_sourceTableArn; }
  template <typename SourceTableArnT = Aws::String>
  void SetSourceTableArn(SourceTableArnT&& value) {
    m_sourceTableArnHasBeenSet = true;
    m_sourceTableArn = std::forward<SourceTableArnT>(value);
  }
  template <typename SourceTableArnT = Aws::String>
  GetTableReplicationStatusResult& WithSourceTableArn(SourceTableArnT&& value) {
    SetSourceTableArn(std::forward<SourceTableArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of status information for each replication destination, including
   * the current state, last successful update, and any error messages.</p>
   */
  inline const Aws::Vector<ReplicationDestinationStatusModel>& GetDestinations() const { return m_destinations; }
  template <typename DestinationsT = Aws::Vector<ReplicationDestinationStatusModel>>
  void SetDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations = std::forward<DestinationsT>(value);
  }
  template <typename DestinationsT = Aws::Vector<ReplicationDestinationStatusModel>>
  GetTableReplicationStatusResult& WithDestinations(DestinationsT&& value) {
    SetDestinations(std::forward<DestinationsT>(value));
    return *this;
  }
  template <typename DestinationsT = ReplicationDestinationStatusModel>
  GetTableReplicationStatusResult& AddDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations.emplace_back(std::forward<DestinationsT>(value));
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
  GetTableReplicationStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceTableArn;
  bool m_sourceTableArnHasBeenSet = false;

  Aws::Vector<ReplicationDestinationStatusModel> m_destinations;
  bool m_destinationsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
