/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>

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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Information about the characteristic sets generated in the
   * statistics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/StatisticsSummary">AWS
   * API Reference</a></p>
   */
  class StatisticsSummary
  {
  public:
    AWS_NEPTUNEDATA_API StatisticsSummary() = default;
    AWS_NEPTUNEDATA_API StatisticsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API StatisticsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of signatures across all characteristic sets.</p>
     */
    inline int GetSignatureCount() const { return m_signatureCount; }
    inline bool SignatureCountHasBeenSet() const { return m_signatureCountHasBeenSet; }
    inline void SetSignatureCount(int value) { m_signatureCountHasBeenSet = true; m_signatureCount = value; }
    inline StatisticsSummary& WithSignatureCount(int value) { SetSignatureCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of characteristic-set instances.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline StatisticsSummary& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of unique predicates.</p>
     */
    inline int GetPredicateCount() const { return m_predicateCount; }
    inline bool PredicateCountHasBeenSet() const { return m_predicateCountHasBeenSet; }
    inline void SetPredicateCount(int value) { m_predicateCountHasBeenSet = true; m_predicateCount = value; }
    inline StatisticsSummary& WithPredicateCount(int value) { SetPredicateCount(value); return *this;}
    ///@}
  private:

    int m_signatureCount{0};
    bool m_signatureCountHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    int m_predicateCount{0};
    bool m_predicateCountHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
