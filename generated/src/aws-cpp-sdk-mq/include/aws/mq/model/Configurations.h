/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/ConfigurationId.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Broker configuration information</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/Configurations">AWS
   * API Reference</a></p>
   */
  class Configurations
  {
  public:
    AWS_MQ_API Configurations() = default;
    AWS_MQ_API Configurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Configurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The broker's current configuration.</p>
     */
    inline const ConfigurationId& GetCurrent() const { return m_current; }
    inline bool CurrentHasBeenSet() const { return m_currentHasBeenSet; }
    template<typename CurrentT = ConfigurationId>
    void SetCurrent(CurrentT&& value) { m_currentHasBeenSet = true; m_current = std::forward<CurrentT>(value); }
    template<typename CurrentT = ConfigurationId>
    Configurations& WithCurrent(CurrentT&& value) { SetCurrent(std::forward<CurrentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The history of configurations applied to the broker.</p>
     */
    inline const Aws::Vector<ConfigurationId>& GetHistory() const { return m_history; }
    inline bool HistoryHasBeenSet() const { return m_historyHasBeenSet; }
    template<typename HistoryT = Aws::Vector<ConfigurationId>>
    void SetHistory(HistoryT&& value) { m_historyHasBeenSet = true; m_history = std::forward<HistoryT>(value); }
    template<typename HistoryT = Aws::Vector<ConfigurationId>>
    Configurations& WithHistory(HistoryT&& value) { SetHistory(std::forward<HistoryT>(value)); return *this;}
    template<typename HistoryT = ConfigurationId>
    Configurations& AddHistory(HistoryT&& value) { m_historyHasBeenSet = true; m_history.emplace_back(std::forward<HistoryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The broker's pending configuration.</p>
     */
    inline const ConfigurationId& GetPending() const { return m_pending; }
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }
    template<typename PendingT = ConfigurationId>
    void SetPending(PendingT&& value) { m_pendingHasBeenSet = true; m_pending = std::forward<PendingT>(value); }
    template<typename PendingT = ConfigurationId>
    Configurations& WithPending(PendingT&& value) { SetPending(std::forward<PendingT>(value)); return *this;}
    ///@}
  private:

    ConfigurationId m_current;
    bool m_currentHasBeenSet = false;

    Aws::Vector<ConfigurationId> m_history;
    bool m_historyHasBeenSet = false;

    ConfigurationId m_pending;
    bool m_pendingHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
