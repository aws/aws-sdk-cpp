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
    AWS_SHIELD_API SummarizedAttackVector();
    AWS_SHIELD_API SummarizedAttackVector(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API SummarizedAttackVector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline const Aws::String& GetVectorType() const{ return m_vectorType; }

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline bool VectorTypeHasBeenSet() const { return m_vectorTypeHasBeenSet; }

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline void SetVectorType(const Aws::String& value) { m_vectorTypeHasBeenSet = true; m_vectorType = value; }

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline void SetVectorType(Aws::String&& value) { m_vectorTypeHasBeenSet = true; m_vectorType = std::move(value); }

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline void SetVectorType(const char* value) { m_vectorTypeHasBeenSet = true; m_vectorType.assign(value); }

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline SummarizedAttackVector& WithVectorType(const Aws::String& value) { SetVectorType(value); return *this;}

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline SummarizedAttackVector& WithVectorType(Aws::String&& value) { SetVectorType(std::move(value)); return *this;}

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline SummarizedAttackVector& WithVectorType(const char* value) { SetVectorType(value); return *this;}


    /**
     * <p>The list of counters that describe the details of the attack.</p>
     */
    inline const Aws::Vector<SummarizedCounter>& GetVectorCounters() const{ return m_vectorCounters; }

    /**
     * <p>The list of counters that describe the details of the attack.</p>
     */
    inline bool VectorCountersHasBeenSet() const { return m_vectorCountersHasBeenSet; }

    /**
     * <p>The list of counters that describe the details of the attack.</p>
     */
    inline void SetVectorCounters(const Aws::Vector<SummarizedCounter>& value) { m_vectorCountersHasBeenSet = true; m_vectorCounters = value; }

    /**
     * <p>The list of counters that describe the details of the attack.</p>
     */
    inline void SetVectorCounters(Aws::Vector<SummarizedCounter>&& value) { m_vectorCountersHasBeenSet = true; m_vectorCounters = std::move(value); }

    /**
     * <p>The list of counters that describe the details of the attack.</p>
     */
    inline SummarizedAttackVector& WithVectorCounters(const Aws::Vector<SummarizedCounter>& value) { SetVectorCounters(value); return *this;}

    /**
     * <p>The list of counters that describe the details of the attack.</p>
     */
    inline SummarizedAttackVector& WithVectorCounters(Aws::Vector<SummarizedCounter>&& value) { SetVectorCounters(std::move(value)); return *this;}

    /**
     * <p>The list of counters that describe the details of the attack.</p>
     */
    inline SummarizedAttackVector& AddVectorCounters(const SummarizedCounter& value) { m_vectorCountersHasBeenSet = true; m_vectorCounters.push_back(value); return *this; }

    /**
     * <p>The list of counters that describe the details of the attack.</p>
     */
    inline SummarizedAttackVector& AddVectorCounters(SummarizedCounter&& value) { m_vectorCountersHasBeenSet = true; m_vectorCounters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_vectorType;
    bool m_vectorTypeHasBeenSet = false;

    Aws::Vector<SummarizedCounter> m_vectorCounters;
    bool m_vectorCountersHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
