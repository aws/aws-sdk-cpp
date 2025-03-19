/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details for a match predicate. A predicate might look for characteristics
   * such as specific IP addresses, geographic locations, or sizes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRegionalRateBasedRuleMatchPredicate">AWS
   * API Reference</a></p>
   */
  class AwsWafRegionalRateBasedRuleMatchPredicate
  {
  public:
    AWS_SECURITYHUB_API AwsWafRegionalRateBasedRuleMatchPredicate() = default;
    AWS_SECURITYHUB_API AwsWafRegionalRateBasedRuleMatchPredicate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRegionalRateBasedRuleMatchPredicate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the predicate.</p>
     */
    inline const Aws::String& GetDataId() const { return m_dataId; }
    inline bool DataIdHasBeenSet() const { return m_dataIdHasBeenSet; }
    template<typename DataIdT = Aws::String>
    void SetDataId(DataIdT&& value) { m_dataIdHasBeenSet = true; m_dataId = std::forward<DataIdT>(value); }
    template<typename DataIdT = Aws::String>
    AwsWafRegionalRateBasedRuleMatchPredicate& WithDataId(DataIdT&& value) { SetDataId(std::forward<DataIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, then the rule actions are performed on requests
     * that match the predicate settings.</p> <p>If set to <code>false</code>, then the
     * rule actions are performed on all requests except those that match the predicate
     * settings.</p>
     */
    inline bool GetNegated() const { return m_negated; }
    inline bool NegatedHasBeenSet() const { return m_negatedHasBeenSet; }
    inline void SetNegated(bool value) { m_negatedHasBeenSet = true; m_negated = value; }
    inline AwsWafRegionalRateBasedRuleMatchPredicate& WithNegated(bool value) { SetNegated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of predicate. Valid values are as follows:</p> <ul> <li> <p>
     * <code>ByteMatch</code> </p> </li> <li> <p> <code>GeoMatch</code> </p> </li> <li>
     * <p> <code>IPMatch</code> </p> </li> <li> <p> <code>RegexMatch</code> </p> </li>
     * <li> <p> <code>SizeConstraint</code> </p> </li> <li> <p>
     * <code>SqlInjectionMatch</code> </p> </li> <li> <p> <code>XssMatch</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsWafRegionalRateBasedRuleMatchPredicate& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataId;
    bool m_dataIdHasBeenSet = false;

    bool m_negated{false};
    bool m_negatedHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
