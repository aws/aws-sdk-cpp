/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/SubResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/SummarizedAttackVector.h>
#include <aws/shield/model/SummarizedCounter.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>The attack information for the specified SubResource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/SubResourceSummary">AWS
   * API Reference</a></p>
   */
  class SubResourceSummary
  {
  public:
    AWS_SHIELD_API SubResourceSummary() = default;
    AWS_SHIELD_API SubResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API SubResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>SubResource</code> type.</p>
     */
    inline SubResourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SubResourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SubResourceSummary& WithType(SubResourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier (ID) of the <code>SubResource</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SubResourceSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of attack types and associated counters.</p>
     */
    inline const Aws::Vector<SummarizedAttackVector>& GetAttackVectors() const { return m_attackVectors; }
    inline bool AttackVectorsHasBeenSet() const { return m_attackVectorsHasBeenSet; }
    template<typename AttackVectorsT = Aws::Vector<SummarizedAttackVector>>
    void SetAttackVectors(AttackVectorsT&& value) { m_attackVectorsHasBeenSet = true; m_attackVectors = std::forward<AttackVectorsT>(value); }
    template<typename AttackVectorsT = Aws::Vector<SummarizedAttackVector>>
    SubResourceSummary& WithAttackVectors(AttackVectorsT&& value) { SetAttackVectors(std::forward<AttackVectorsT>(value)); return *this;}
    template<typename AttackVectorsT = SummarizedAttackVector>
    SubResourceSummary& AddAttackVectors(AttackVectorsT&& value) { m_attackVectorsHasBeenSet = true; m_attackVectors.emplace_back(std::forward<AttackVectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The counters that describe the details of the attack.</p>
     */
    inline const Aws::Vector<SummarizedCounter>& GetCounters() const { return m_counters; }
    inline bool CountersHasBeenSet() const { return m_countersHasBeenSet; }
    template<typename CountersT = Aws::Vector<SummarizedCounter>>
    void SetCounters(CountersT&& value) { m_countersHasBeenSet = true; m_counters = std::forward<CountersT>(value); }
    template<typename CountersT = Aws::Vector<SummarizedCounter>>
    SubResourceSummary& WithCounters(CountersT&& value) { SetCounters(std::forward<CountersT>(value)); return *this;}
    template<typename CountersT = SummarizedCounter>
    SubResourceSummary& AddCounters(CountersT&& value) { m_countersHasBeenSet = true; m_counters.emplace_back(std::forward<CountersT>(value)); return *this; }
    ///@}
  private:

    SubResourceType m_type{SubResourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<SummarizedAttackVector> m_attackVectors;
    bool m_attackVectorsHasBeenSet = false;

    Aws::Vector<SummarizedCounter> m_counters;
    bool m_countersHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
