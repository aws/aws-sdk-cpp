/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SSMContacts {
namespace Model {
class GetRotationOverrideResult {
 public:
  AWS_SSMCONTACTS_API GetRotationOverrideResult() = default;
  AWS_SSMCONTACTS_API GetRotationOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SSMCONTACTS_API GetRotationOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the override to an on-call rotation.</p>
   */
  inline const Aws::String& GetRotationOverrideId() const { return m_rotationOverrideId; }
  template <typename RotationOverrideIdT = Aws::String>
  void SetRotationOverrideId(RotationOverrideIdT&& value) {
    m_rotationOverrideIdHasBeenSet = true;
    m_rotationOverrideId = std::forward<RotationOverrideIdT>(value);
  }
  template <typename RotationOverrideIdT = Aws::String>
  GetRotationOverrideResult& WithRotationOverrideId(RotationOverrideIdT&& value) {
    SetRotationOverrideId(std::forward<RotationOverrideIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the on-call rotation that was
   * overridden.</p>
   */
  inline const Aws::String& GetRotationArn() const { return m_rotationArn; }
  template <typename RotationArnT = Aws::String>
  void SetRotationArn(RotationArnT&& value) {
    m_rotationArnHasBeenSet = true;
    m_rotationArn = std::forward<RotationArnT>(value);
  }
  template <typename RotationArnT = Aws::String>
  GetRotationOverrideResult& WithRotationArn(RotationArnT&& value) {
    SetRotationArn(std::forward<RotationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the override of
   * the on-call rotation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNewContactIds() const { return m_newContactIds; }
  template <typename NewContactIdsT = Aws::Vector<Aws::String>>
  void SetNewContactIds(NewContactIdsT&& value) {
    m_newContactIdsHasBeenSet = true;
    m_newContactIds = std::forward<NewContactIdsT>(value);
  }
  template <typename NewContactIdsT = Aws::Vector<Aws::String>>
  GetRotationOverrideResult& WithNewContactIds(NewContactIdsT&& value) {
    SetNewContactIds(std::forward<NewContactIdsT>(value));
    return *this;
  }
  template <typename NewContactIdsT = Aws::String>
  GetRotationOverrideResult& AddNewContactIds(NewContactIdsT&& value) {
    m_newContactIdsHasBeenSet = true;
    m_newContactIds.emplace_back(std::forward<NewContactIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the override goes into effect.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GetRotationOverrideResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the override ends.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  GetRotationOverrideResult& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the override was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  GetRotationOverrideResult& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
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
  GetRotationOverrideResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_rotationOverrideId;

  Aws::String m_rotationArn;

  Aws::Vector<Aws::String> m_newContactIds;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::Utils::DateTime m_createTime{};

  Aws::String m_requestId;
  bool m_rotationOverrideIdHasBeenSet = false;
  bool m_rotationArnHasBeenSet = false;
  bool m_newContactIdsHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSMContacts
}  // namespace Aws
