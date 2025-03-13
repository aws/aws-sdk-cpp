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
   * operations.</p> <p>If you're passing context as part of the request, exactly one
   * instance of <code>context</code> must be passed. If you don't want to pass
   * context, omit the <code>context</code> parameter from your request rather than
   * sending <code>context {}</code>.</p> <p>Example:
   * <code>"context":{"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}}</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ContextDefinition">AWS
   * API Reference</a></p>
   */
  class ContextDefinition
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ContextDefinition() = default;
    AWS_VERIFIEDPERMISSIONS_API ContextDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API ContextDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An list of attributes that are needed to successfully evaluate an
     * authorization request. Each attribute in this array must include a map of a data
     * type and its value.</p> <p>Example:
     * <code>"contextMap":{"&lt;KeyName1&gt;":{"boolean":true},"&lt;KeyName2&gt;":{"long":1234}}</code>
     * </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetContextMap() const { return m_contextMap; }
    inline bool ContextMapHasBeenSet() const { return m_contextMapHasBeenSet; }
    template<typename ContextMapT = Aws::Map<Aws::String, AttributeValue>>
    void SetContextMap(ContextMapT&& value) { m_contextMapHasBeenSet = true; m_contextMap = std::forward<ContextMapT>(value); }
    template<typename ContextMapT = Aws::Map<Aws::String, AttributeValue>>
    ContextDefinition& WithContextMap(ContextMapT&& value) { SetContextMap(std::forward<ContextMapT>(value)); return *this;}
    template<typename ContextMapKeyT = Aws::String, typename ContextMapValueT = AttributeValue>
    ContextDefinition& AddContextMap(ContextMapKeyT&& key, ContextMapValueT&& value) {
      m_contextMapHasBeenSet = true; m_contextMap.emplace(std::forward<ContextMapKeyT>(key), std::forward<ContextMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A Cedar JSON string representation of the context needed to successfully
     * evaluate an authorization request.</p> <p>Example:
     * <code>{"cedarJson":"{\"&lt;KeyName1&gt;\": true, \"&lt;KeyName2&gt;\": 1234}"
     * }</code> </p>
     */
    inline const Aws::String& GetCedarJson() const { return m_cedarJson; }
    inline bool CedarJsonHasBeenSet() const { return m_cedarJsonHasBeenSet; }
    template<typename CedarJsonT = Aws::String>
    void SetCedarJson(CedarJsonT&& value) { m_cedarJsonHasBeenSet = true; m_cedarJson = std::forward<CedarJsonT>(value); }
    template<typename CedarJsonT = Aws::String>
    ContextDefinition& WithCedarJson(CedarJsonT&& value) { SetCedarJson(std::forward<CedarJsonT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, AttributeValue> m_contextMap;
    bool m_contextMapHasBeenSet = false;

    Aws::String m_cedarJson;
    bool m_cedarJsonHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
