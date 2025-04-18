﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Specifies a broker in a data replication pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DataReplicationCounterpart">AWS
   * API Reference</a></p>
   */
  class DataReplicationCounterpart
  {
  public:
    AWS_MQ_API DataReplicationCounterpart() = default;
    AWS_MQ_API DataReplicationCounterpart(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API DataReplicationCounterpart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Required. The unique broker id generated by Amazon MQ.</p>
     */
    inline const Aws::String& GetBrokerId() const { return m_brokerId; }
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }
    template<typename BrokerIdT = Aws::String>
    void SetBrokerId(BrokerIdT&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::forward<BrokerIdT>(value); }
    template<typename BrokerIdT = Aws::String>
    DataReplicationCounterpart& WithBrokerId(BrokerIdT&& value) { SetBrokerId(std::forward<BrokerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The region of the broker.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    DataReplicationCounterpart& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
