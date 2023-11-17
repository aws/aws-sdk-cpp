/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/AttributeValue.h>
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
   * <p>Contains additional details about the context of the request. Verified
   * Permissions evaluates this information in an authorization request as part of
   * the <code>when</code> and <code>unless</code> clauses in a policy.</p> <p>This
   * data type is used as a request parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorized.html">IsAuthorized</a>,
   * <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_BatchIsAuthorized.html">BatchIsAuthorized</a>,
   * and <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorizedWithToken.html">IsAuthorizedWithToken</a>
   * operations.</p> <p>Example:
   * <code>"context":{"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}}</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ContextDefinition">AWS
   * API Reference</a></p>
   */
  class ContextDefinition
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ContextDefinition();
    AWS_VERIFIEDPERMISSIONS_API ContextDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API ContextDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetContextMap() const{ return m_contextMap; }

    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline bool ContextMapHasBeenSet() const { return m_contextMapHasBeenSet; }

    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline void SetContextMap(const Aws::Map<Aws::String, AttributeValue>& value) { m_contextMapHasBeenSet = true; m_contextMap = value; }

    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline void SetContextMap(Aws::Map<Aws::String, AttributeValue>&& value) { m_contextMapHasBeenSet = true; m_contextMap = std::move(value); }

    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline ContextDefinition& WithContextMap(const Aws::Map<Aws::String, AttributeValue>& value) { SetContextMap(value); return *this;}

    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline ContextDefinition& WithContextMap(Aws::Map<Aws::String, AttributeValue>&& value) { SetContextMap(std::move(value)); return *this;}

    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline ContextDefinition& AddContextMap(const Aws::String& key, const AttributeValue& value) { m_contextMapHasBeenSet = true; m_contextMap.emplace(key, value); return *this; }

    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline ContextDefinition& AddContextMap(Aws::String&& key, const AttributeValue& value) { m_contextMapHasBeenSet = true; m_contextMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline ContextDefinition& AddContextMap(const Aws::String& key, AttributeValue&& value) { m_contextMapHasBeenSet = true; m_contextMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline ContextDefinition& AddContextMap(Aws::String&& key, AttributeValue&& value) { m_contextMapHasBeenSet = true; m_contextMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline ContextDefinition& AddContextMap(const char* key, AttributeValue&& value) { m_contextMapHasBeenSet = true; m_contextMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline ContextDefinition& AddContextMap(const char* key, const AttributeValue& value) { m_contextMapHasBeenSet = true; m_contextMap.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, AttributeValue> m_contextMap;
    bool m_contextMapHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
