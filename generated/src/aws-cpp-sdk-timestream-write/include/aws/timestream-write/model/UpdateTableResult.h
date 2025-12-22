/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/Table.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace TimestreamWrite {
namespace Model {
class UpdateTableResult {
 public:
  AWS_TIMESTREAMWRITE_API UpdateTableResult() = default;
  AWS_TIMESTREAMWRITE_API UpdateTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_TIMESTREAMWRITE_API UpdateTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The updated Timestream table.</p>
   */
  inline const Table& GetTable() const { return m_table; }
  template <typename TableT = Table>
  void SetTable(TableT&& value) {
    m_tableHasBeenSet = true;
    m_table = std::forward<TableT>(value);
  }
  template <typename TableT = Table>
  UpdateTableResult& WithTable(TableT&& value) {
    SetTable(std::forward<TableT>(value));
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
  UpdateTableResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Table m_table;

  Aws::String m_requestId;
  bool m_tableHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamWrite
}  // namespace Aws
