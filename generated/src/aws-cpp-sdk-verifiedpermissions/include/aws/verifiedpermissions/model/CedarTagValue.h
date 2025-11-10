/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace VerifiedPermissions {
namespace Model {

/**
 * <p>The value of an entity's Cedar tag.</p> <p>This data type is used as a member
 * of the <a
 * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_EntityItem.html">EntityItem</a>
 * structure that forms the body of the <code>Entities</code> request parameter for
 * the <a
 * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorized.html">IsAuthorized</a>,
 * <a
 * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_BatchIsAuthorized.html">BatchIsAuthorized</a>,
 * <a
 * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorizedWithToken.html">IsAuthorizedWithToken</a>,
 * and <a
 * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_BatchIsAuthorizedWithToken.html">BatchIsAuthorizedWithToken</a>
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/CedarTagValue">AWS
 * API Reference</a></p>
 */
class CedarTagValue {
 public:
  AWS_VERIFIEDPERMISSIONS_API CedarTagValue() = default;
  AWS_VERIFIEDPERMISSIONS_API CedarTagValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_VERIFIEDPERMISSIONS_API CedarTagValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A Cedar tag value of <a
   * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#datatype-bool">Boolean</a>
   * type.</p> <p>Example: <code>{"boolean": false}</code> </p>
   */
  inline bool GetBoolean() const { return m_boolean; }
  inline bool BooleanHasBeenSet() const { return m_booleanHasBeenSet; }
  inline void SetBoolean(bool value) {
    m_booleanHasBeenSet = true;
    m_boolean = value;
  }
  inline CedarTagValue& WithBoolean(bool value) {
    SetBoolean(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Cedar tag value of type <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_EntityIdentifier.html">EntityIdentifier</a>.</p>
   * <p>Example: <code>{"entityIdentifier": { "entityId": "alice", "entityType":
   * "User"} }</code> </p>
   */
  inline const EntityIdentifier& GetEntityIdentifier() const { return m_entityIdentifier; }
  inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
  template <typename EntityIdentifierT = EntityIdentifier>
  void SetEntityIdentifier(EntityIdentifierT&& value) {
    m_entityIdentifierHasBeenSet = true;
    m_entityIdentifier = std::forward<EntityIdentifierT>(value);
  }
  template <typename EntityIdentifierT = EntityIdentifier>
  CedarTagValue& WithEntityIdentifier(EntityIdentifierT&& value) {
    SetEntityIdentifier(std::forward<EntityIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Cedar tag value of <a
   * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#datatype-long">Long</a>
   * type.</p> <p>Example: <code>{"long": 0}</code> </p>
   */
  inline long long GetLong() const { return m_long; }
  inline bool LongHasBeenSet() const { return m_longHasBeenSet; }
  inline void SetLong(long long value) {
    m_longHasBeenSet = true;
    m_long = value;
  }
  inline CedarTagValue& WithLong(long long value) {
    SetLong(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Cedar tag value of <a
   * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#datatype-string">String</a>
   * type.</p> <p>Example: <code>{"string": "abc"}</code> </p>
   */
  inline const Aws::String& GetString() const { return m_string; }
  inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
  template <typename StringT = Aws::String>
  void SetString(StringT&& value) {
    m_stringHasBeenSet = true;
    m_string = std::forward<StringT>(value);
  }
  template <typename StringT = Aws::String>
  CedarTagValue& WithString(StringT&& value) {
    SetString(std::forward<StringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Cedar tag value of <a
   * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#datatype-set">Set</a>
   * type.</p> <p>Example: <code>{"set": [ { "string": "abc" } ] }</code> </p>
   */
  inline const Aws::Vector<CedarTagValue>& GetSet() const { return m_set; }
  inline bool SetHasBeenSet() const { return m_setHasBeenSet; }
  template <typename SetT = Aws::Vector<CedarTagValue>>
  void SetSet(SetT&& value) {
    m_setHasBeenSet = true;
    m_set = std::forward<SetT>(value);
  }
  template <typename SetT = Aws::Vector<CedarTagValue>>
  CedarTagValue& WithSet(SetT&& value) {
    SetSet(std::forward<SetT>(value));
    return *this;
  }
  template <typename SetT = CedarTagValue>
  CedarTagValue& AddSet(SetT&& value) {
    m_setHasBeenSet = true;
    m_set.emplace_back(std::forward<SetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Cedar tag value of <a
   * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#datatype-record">Record</a>
   * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
   */
  inline const Aws::Map<Aws::String, CedarTagValue>& GetRecord() const { return m_record; }
  inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }
  template <typename RecordT = Aws::Map<Aws::String, CedarTagValue>>
  void SetRecord(RecordT&& value) {
    m_recordHasBeenSet = true;
    m_record = std::forward<RecordT>(value);
  }
  template <typename RecordT = Aws::Map<Aws::String, CedarTagValue>>
  CedarTagValue& WithRecord(RecordT&& value) {
    SetRecord(std::forward<RecordT>(value));
    return *this;
  }
  template <typename RecordKeyT = Aws::String, typename RecordValueT = CedarTagValue>
  CedarTagValue& AddRecord(RecordKeyT&& key, RecordValueT&& value) {
    m_recordHasBeenSet = true;
    m_record.emplace(std::forward<RecordKeyT>(key), std::forward<RecordValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Cedar tag value of <a
   * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#datatype-ipaddr">ipaddr</a>
   * type.</p> <p>Example: <code>{"ip": "10.50.0.0/24"}</code> </p>
   */
  inline const Aws::String& GetIpaddr() const { return m_ipaddr; }
  inline bool IpaddrHasBeenSet() const { return m_ipaddrHasBeenSet; }
  template <typename IpaddrT = Aws::String>
  void SetIpaddr(IpaddrT&& value) {
    m_ipaddrHasBeenSet = true;
    m_ipaddr = std::forward<IpaddrT>(value);
  }
  template <typename IpaddrT = Aws::String>
  CedarTagValue& WithIpaddr(IpaddrT&& value) {
    SetIpaddr(std::forward<IpaddrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Cedar tag value of <a
   * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#datatype-decimal">decimal</a>
   * type.</p> <p>Example: <code>{"decimal": "-2.0"}</code> </p>
   */
  inline const Aws::String& GetDecimal() const { return m_decimal; }
  inline bool DecimalHasBeenSet() const { return m_decimalHasBeenSet; }
  template <typename DecimalT = Aws::String>
  void SetDecimal(DecimalT&& value) {
    m_decimalHasBeenSet = true;
    m_decimal = std::forward<DecimalT>(value);
  }
  template <typename DecimalT = Aws::String>
  CedarTagValue& WithDecimal(DecimalT&& value) {
    SetDecimal(std::forward<DecimalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Cedar tag value of <a
   * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#datatype-datetime">datetime</a>
   * type.</p> <p>Example: <code>{"datetime": "2025-11-04T11:35:00.000+0100"}</code>
   * </p>
   */
  inline const Aws::String& GetDatetime() const { return m_datetime; }
  inline bool DatetimeHasBeenSet() const { return m_datetimeHasBeenSet; }
  template <typename DatetimeT = Aws::String>
  void SetDatetime(DatetimeT&& value) {
    m_datetimeHasBeenSet = true;
    m_datetime = std::forward<DatetimeT>(value);
  }
  template <typename DatetimeT = Aws::String>
  CedarTagValue& WithDatetime(DatetimeT&& value) {
    SetDatetime(std::forward<DatetimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Cedar tag value of <a
   * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#datatype-duration">duration</a>
   * type.</p> <p>Example: <code>{"duration": "-1d12h"}</code> </p>
   */
  inline const Aws::String& GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  template <typename DurationT = Aws::String>
  void SetDuration(DurationT&& value) {
    m_durationHasBeenSet = true;
    m_duration = std::forward<DurationT>(value);
  }
  template <typename DurationT = Aws::String>
  CedarTagValue& WithDuration(DurationT&& value) {
    SetDuration(std::forward<DurationT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_boolean{false};
  bool m_booleanHasBeenSet = false;

  EntityIdentifier m_entityIdentifier;
  bool m_entityIdentifierHasBeenSet = false;

  long long m_long{0};
  bool m_longHasBeenSet = false;

  Aws::String m_string;
  bool m_stringHasBeenSet = false;

  Aws::Vector<CedarTagValue> m_set;
  bool m_setHasBeenSet = false;

  Aws::Map<Aws::String, CedarTagValue> m_record;
  bool m_recordHasBeenSet = false;

  Aws::String m_ipaddr;
  bool m_ipaddrHasBeenSet = false;

  Aws::String m_decimal;
  bool m_decimalHasBeenSet = false;

  Aws::String m_datetime;
  bool m_datetimeHasBeenSet = false;

  Aws::String m_duration;
  bool m_durationHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
