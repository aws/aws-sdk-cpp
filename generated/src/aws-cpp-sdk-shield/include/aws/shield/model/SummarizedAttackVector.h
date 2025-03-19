/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A summary of information about the attack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/SummarizedAttackVector">AWS
   * API Reference</a></p>
   */
  class SummarizedAttackVector
  {
  public:
    AWS_SHIELD_API SummarizedAttackVector() = default;
    AWS_SHIELD_API SummarizedAttackVector(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API SummarizedAttackVector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline const Aws::String& GetVectorType() const { return m_vectorType; }
    inline bool VectorTypeHasBeenSet() const { return m_vectorTypeHasBeenSet; }
    template<typename VectorTypeT = Aws::String>
    void SetVectorType(VectorTypeT&& value) { m_vectorTypeHasBeenSet = true; m_vectorType = std::forward<VectorTypeT>(value); }
    template<typename VectorTypeT = Aws::String>
    SummarizedAttackVector& WithVectorType(VectorTypeT&& value) { SetVectorType(std::forward<VectorTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of counters that describe the details of the attack.</p>
     */
    inline const Aws::Vector<SummarizedCounter>& GetVectorCounters() const { return m_vectorCounters; }
    inline bool VectorCountersHasBeenSet() const { return m_vectorCountersHasBeenSet; }
    template<typename VectorCountersT = Aws::Vector<SummarizedCounter>>
    void SetVectorCounters(VectorCountersT&& value) { m_vectorCountersHasBeenSet = true; m_vectorCounters = std::forward<VectorCountersT>(value); }
    template<typename VectorCountersT = Aws::Vector<SummarizedCounter>>
    SummarizedAttackVector& WithVectorCounters(VectorCountersT&& value) { SetVectorCounters(std::forward<VectorCountersT>(value)); return *this;}
    template<typename VectorCountersT = SummarizedCounter>
    SummarizedAttackVector& AddVectorCounters(VectorCountersT&& value) { m_vectorCountersHasBeenSet = true; m_vectorCounters.emplace_back(std::forward<VectorCountersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_vectorType;
    bool m_vectorTypeHasBeenSet = false;

    Aws::Vector<SummarizedCounter> m_vectorCounters;
    bool m_vectorCountersHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
