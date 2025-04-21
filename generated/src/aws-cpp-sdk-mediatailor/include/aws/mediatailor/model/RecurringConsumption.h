/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/AvailMatchingCriteria.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The settings that determine how and when MediaTailor places prefetched ads
   * into upcoming ad breaks for recurring prefetch scedules.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/RecurringConsumption">AWS
   * API Reference</a></p>
   */
  class RecurringConsumption
  {
  public:
    AWS_MEDIATAILOR_API RecurringConsumption() = default;
    AWS_MEDIATAILOR_API RecurringConsumption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API RecurringConsumption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of seconds that an ad is available for insertion after it was
     * prefetched.</p>
     */
    inline int GetRetrievedAdExpirationSeconds() const { return m_retrievedAdExpirationSeconds; }
    inline bool RetrievedAdExpirationSecondsHasBeenSet() const { return m_retrievedAdExpirationSecondsHasBeenSet; }
    inline void SetRetrievedAdExpirationSeconds(int value) { m_retrievedAdExpirationSecondsHasBeenSet = true; m_retrievedAdExpirationSeconds = value; }
    inline RecurringConsumption& WithRetrievedAdExpirationSeconds(int value) { SetRetrievedAdExpirationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the dynamic variables that determine which ad breaks
     * that MediaTailor inserts prefetched ads in.</p>
     */
    inline const Aws::Vector<AvailMatchingCriteria>& GetAvailMatchingCriteria() const { return m_availMatchingCriteria; }
    inline bool AvailMatchingCriteriaHasBeenSet() const { return m_availMatchingCriteriaHasBeenSet; }
    template<typename AvailMatchingCriteriaT = Aws::Vector<AvailMatchingCriteria>>
    void SetAvailMatchingCriteria(AvailMatchingCriteriaT&& value) { m_availMatchingCriteriaHasBeenSet = true; m_availMatchingCriteria = std::forward<AvailMatchingCriteriaT>(value); }
    template<typename AvailMatchingCriteriaT = Aws::Vector<AvailMatchingCriteria>>
    RecurringConsumption& WithAvailMatchingCriteria(AvailMatchingCriteriaT&& value) { SetAvailMatchingCriteria(std::forward<AvailMatchingCriteriaT>(value)); return *this;}
    template<typename AvailMatchingCriteriaT = AvailMatchingCriteria>
    RecurringConsumption& AddAvailMatchingCriteria(AvailMatchingCriteriaT&& value) { m_availMatchingCriteriaHasBeenSet = true; m_availMatchingCriteria.emplace_back(std::forward<AvailMatchingCriteriaT>(value)); return *this; }
    ///@}
  private:

    int m_retrievedAdExpirationSeconds{0};
    bool m_retrievedAdExpirationSecondsHasBeenSet = false;

    Aws::Vector<AvailMatchingCriteria> m_availMatchingCriteria;
    bool m_availMatchingCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
