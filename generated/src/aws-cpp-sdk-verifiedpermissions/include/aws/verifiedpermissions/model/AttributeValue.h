/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>The value of an attribute.</p> <p>Contains information about the runtime
   * context for a request for which an authorization decision is made. </p> <p>This
   * data type is used as a member of the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ContextDefinition.html">ContextDefinition</a>
   * structure which is uses as a request parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorized.html">IsAuthorized</a>,
   * <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_BatchIsAuthorized.html">BatchIsAuthorized</a>,
   * and <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorizedWithToken.html">IsAuthorizedWithToken</a>
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/AttributeValue">AWS
   * API Reference</a></p>
   */
  class AttributeValue
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API AttributeValue();
    AWS_VERIFIEDPERMISSIONS_API AttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API AttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#boolean">Boolean</a>
     * type.</p> <p>Example: <code>{"boolean": true}</code> </p>
     */
    inline bool GetBoolean() const{ return m_boolean; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#boolean">Boolean</a>
     * type.</p> <p>Example: <code>{"boolean": true}</code> </p>
     */
    inline bool BooleanHasBeenSet() const { return m_booleanHasBeenSet; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#boolean">Boolean</a>
     * type.</p> <p>Example: <code>{"boolean": true}</code> </p>
     */
    inline void SetBoolean(bool value) { m_booleanHasBeenSet = true; m_boolean = value; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#boolean">Boolean</a>
     * type.</p> <p>Example: <code>{"boolean": true}</code> </p>
     */
    inline AttributeValue& WithBoolean(bool value) { SetBoolean(value); return *this;}


    /**
     * <p>An attribute value of type <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_EntityIdentifier.html">EntityIdentifier</a>.</p>
     * <p>Example: <code>"entityIdentifier": { "entityId": "&lt;id&gt;", "entityType":
     * "&lt;entity type&gt;"}</code> </p>
     */
    inline const EntityIdentifier& GetEntityIdentifier() const{ return m_entityIdentifier; }

    /**
     * <p>An attribute value of type <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_EntityIdentifier.html">EntityIdentifier</a>.</p>
     * <p>Example: <code>"entityIdentifier": { "entityId": "&lt;id&gt;", "entityType":
     * "&lt;entity type&gt;"}</code> </p>
     */
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }

    /**
     * <p>An attribute value of type <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_EntityIdentifier.html">EntityIdentifier</a>.</p>
     * <p>Example: <code>"entityIdentifier": { "entityId": "&lt;id&gt;", "entityType":
     * "&lt;entity type&gt;"}</code> </p>
     */
    inline void SetEntityIdentifier(const EntityIdentifier& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = value; }

    /**
     * <p>An attribute value of type <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_EntityIdentifier.html">EntityIdentifier</a>.</p>
     * <p>Example: <code>"entityIdentifier": { "entityId": "&lt;id&gt;", "entityType":
     * "&lt;entity type&gt;"}</code> </p>
     */
    inline void SetEntityIdentifier(EntityIdentifier&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::move(value); }

    /**
     * <p>An attribute value of type <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_EntityIdentifier.html">EntityIdentifier</a>.</p>
     * <p>Example: <code>"entityIdentifier": { "entityId": "&lt;id&gt;", "entityType":
     * "&lt;entity type&gt;"}</code> </p>
     */
    inline AttributeValue& WithEntityIdentifier(const EntityIdentifier& value) { SetEntityIdentifier(value); return *this;}

    /**
     * <p>An attribute value of type <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_EntityIdentifier.html">EntityIdentifier</a>.</p>
     * <p>Example: <code>"entityIdentifier": { "entityId": "&lt;id&gt;", "entityType":
     * "&lt;entity type&gt;"}</code> </p>
     */
    inline AttributeValue& WithEntityIdentifier(EntityIdentifier&& value) { SetEntityIdentifier(std::move(value)); return *this;}


    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#long">Long</a>
     * type.</p> <p>Example: <code>{"long": 0}</code> </p>
     */
    inline long long GetLong() const{ return m_long; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#long">Long</a>
     * type.</p> <p>Example: <code>{"long": 0}</code> </p>
     */
    inline bool LongHasBeenSet() const { return m_longHasBeenSet; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#long">Long</a>
     * type.</p> <p>Example: <code>{"long": 0}</code> </p>
     */
    inline void SetLong(long long value) { m_longHasBeenSet = true; m_long = value; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#long">Long</a>
     * type.</p> <p>Example: <code>{"long": 0}</code> </p>
     */
    inline AttributeValue& WithLong(long long value) { SetLong(value); return *this;}


    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#string">String</a>
     * type.</p> <p>Example: <code>{"string": "abc"}</code> </p>
     */
    inline const Aws::String& GetString() const{ return m_string; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#string">String</a>
     * type.</p> <p>Example: <code>{"string": "abc"}</code> </p>
     */
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#string">String</a>
     * type.</p> <p>Example: <code>{"string": "abc"}</code> </p>
     */
    inline void SetString(const Aws::String& value) { m_stringHasBeenSet = true; m_string = value; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#string">String</a>
     * type.</p> <p>Example: <code>{"string": "abc"}</code> </p>
     */
    inline void SetString(Aws::String&& value) { m_stringHasBeenSet = true; m_string = std::move(value); }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#string">String</a>
     * type.</p> <p>Example: <code>{"string": "abc"}</code> </p>
     */
    inline void SetString(const char* value) { m_stringHasBeenSet = true; m_string.assign(value); }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#string">String</a>
     * type.</p> <p>Example: <code>{"string": "abc"}</code> </p>
     */
    inline AttributeValue& WithString(const Aws::String& value) { SetString(value); return *this;}

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#string">String</a>
     * type.</p> <p>Example: <code>{"string": "abc"}</code> </p>
     */
    inline AttributeValue& WithString(Aws::String&& value) { SetString(std::move(value)); return *this;}

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#string">String</a>
     * type.</p> <p>Example: <code>{"string": "abc"}</code> </p>
     */
    inline AttributeValue& WithString(const char* value) { SetString(value); return *this;}


    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#set">Set</a>
     * type.</p> <p>Example: <code>{"set": [ {} ] }</code> </p>
     */
    inline const Aws::Vector<AttributeValue>& GetSet() const{ return m_set; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#set">Set</a>
     * type.</p> <p>Example: <code>{"set": [ {} ] }</code> </p>
     */
    inline bool SetHasBeenSet() const { return m_setHasBeenSet; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#set">Set</a>
     * type.</p> <p>Example: <code>{"set": [ {} ] }</code> </p>
     */
    inline void SetSet(const Aws::Vector<AttributeValue>& value) { m_setHasBeenSet = true; m_set = value; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#set">Set</a>
     * type.</p> <p>Example: <code>{"set": [ {} ] }</code> </p>
     */
    inline void SetSet(Aws::Vector<AttributeValue>&& value) { m_setHasBeenSet = true; m_set = std::move(value); }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#set">Set</a>
     * type.</p> <p>Example: <code>{"set": [ {} ] }</code> </p>
     */
    inline AttributeValue& WithSet(const Aws::Vector<AttributeValue>& value) { SetSet(value); return *this;}

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#set">Set</a>
     * type.</p> <p>Example: <code>{"set": [ {} ] }</code> </p>
     */
    inline AttributeValue& WithSet(Aws::Vector<AttributeValue>&& value) { SetSet(std::move(value)); return *this;}

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#set">Set</a>
     * type.</p> <p>Example: <code>{"set": [ {} ] }</code> </p>
     */
    inline AttributeValue& AddSet(const AttributeValue& value) { m_setHasBeenSet = true; m_set.push_back(value); return *this; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#set">Set</a>
     * type.</p> <p>Example: <code>{"set": [ {} ] }</code> </p>
     */
    inline AttributeValue& AddSet(AttributeValue&& value) { m_setHasBeenSet = true; m_set.push_back(std::move(value)); return *this; }


    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#record">Record</a>
     * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetRecord() const{ return m_record; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#record">Record</a>
     * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
     */
    inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#record">Record</a>
     * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
     */
    inline void SetRecord(const Aws::Map<Aws::String, AttributeValue>& value) { m_recordHasBeenSet = true; m_record = value; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#record">Record</a>
     * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
     */
    inline void SetRecord(Aws::Map<Aws::String, AttributeValue>&& value) { m_recordHasBeenSet = true; m_record = std::move(value); }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#record">Record</a>
     * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
     */
    inline AttributeValue& WithRecord(const Aws::Map<Aws::String, AttributeValue>& value) { SetRecord(value); return *this;}

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#record">Record</a>
     * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
     */
    inline AttributeValue& WithRecord(Aws::Map<Aws::String, AttributeValue>&& value) { SetRecord(std::move(value)); return *this;}

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#record">Record</a>
     * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
     */
    inline AttributeValue& AddRecord(const Aws::String& key, const AttributeValue& value) { m_recordHasBeenSet = true; m_record.emplace(key, value); return *this; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#record">Record</a>
     * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
     */
    inline AttributeValue& AddRecord(Aws::String&& key, const AttributeValue& value) { m_recordHasBeenSet = true; m_record.emplace(std::move(key), value); return *this; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#record">Record</a>
     * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
     */
    inline AttributeValue& AddRecord(const Aws::String& key, AttributeValue&& value) { m_recordHasBeenSet = true; m_record.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#record">Record</a>
     * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
     */
    inline AttributeValue& AddRecord(Aws::String&& key, AttributeValue&& value) { m_recordHasBeenSet = true; m_record.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#record">Record</a>
     * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
     */
    inline AttributeValue& AddRecord(const char* key, AttributeValue&& value) { m_recordHasBeenSet = true; m_record.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An attribute value of <a
     * href="https://docs.cedarpolicy.com/policies/syntax-datatypes.html#record">Record</a>
     * type.</p> <p>Example: <code>{"record": { "keyName": {} } }</code> </p>
     */
    inline AttributeValue& AddRecord(const char* key, const AttributeValue& value) { m_recordHasBeenSet = true; m_record.emplace(key, value); return *this; }

  private:

    bool m_boolean;
    bool m_booleanHasBeenSet = false;

    EntityIdentifier m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    long long m_long;
    bool m_longHasBeenSet = false;

    Aws::String m_string;
    bool m_stringHasBeenSet = false;

    Aws::Vector<AttributeValue> m_set;
    bool m_setHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_record;
    bool m_recordHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
