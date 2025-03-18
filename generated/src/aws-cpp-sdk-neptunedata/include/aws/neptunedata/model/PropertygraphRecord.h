/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/neptunedata/model/PropertygraphData.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Structure of a property graph record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/PropertygraphRecord">AWS
   * API Reference</a></p>
   */
  class PropertygraphRecord
  {
  public:
    AWS_NEPTUNEDATA_API PropertygraphRecord() = default;
    AWS_NEPTUNEDATA_API PropertygraphRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API PropertygraphRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the commit for the transaction was requested, in
     * milliseconds from the Unix epoch.</p>
     */
    inline long long GetCommitTimestampInMillis() const { return m_commitTimestampInMillis; }
    inline bool CommitTimestampInMillisHasBeenSet() const { return m_commitTimestampInMillisHasBeenSet; }
    inline void SetCommitTimestampInMillis(long long value) { m_commitTimestampInMillisHasBeenSet = true; m_commitTimestampInMillis = value; }
    inline PropertygraphRecord& WithCommitTimestampInMillis(long long value) { SetCommitTimestampInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sequence identifier of the stream change record.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::Map<Aws::String, Aws::String>>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::Map<Aws::String, Aws::String>>
    PropertygraphRecord& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    template<typename EventIdKeyT = Aws::String, typename EventIdValueT = Aws::String>
    PropertygraphRecord& AddEventId(EventIdKeyT&& key, EventIdValueT&& value) {
      m_eventIdHasBeenSet = true; m_eventId.emplace(std::forward<EventIdKeyT>(key), std::forward<EventIdValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The serialized Gremlin or openCypher change record.</p>
     */
    inline const PropertygraphData& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = PropertygraphData>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = PropertygraphData>
    PropertygraphRecord& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation that created the change.</p>
     */
    inline const Aws::String& GetOp() const { return m_op; }
    inline bool OpHasBeenSet() const { return m_opHasBeenSet; }
    template<typename OpT = Aws::String>
    void SetOp(OpT&& value) { m_opHasBeenSet = true; m_op = std::forward<OpT>(value); }
    template<typename OpT = Aws::String>
    PropertygraphRecord& WithOp(OpT&& value) { SetOp(std::forward<OpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only present if this operation is the last one in its transaction. If
     * present, it is set to true. It is useful for ensuring that an entire transaction
     * is consumed.</p>
     */
    inline bool GetIsLastOp() const { return m_isLastOp; }
    inline bool IsLastOpHasBeenSet() const { return m_isLastOpHasBeenSet; }
    inline void SetIsLastOp(bool value) { m_isLastOpHasBeenSet = true; m_isLastOp = value; }
    inline PropertygraphRecord& WithIsLastOp(bool value) { SetIsLastOp(value); return *this;}
    ///@}
  private:

    long long m_commitTimestampInMillis{0};
    bool m_commitTimestampInMillisHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_eventId;
    bool m_eventIdHasBeenSet = false;

    PropertygraphData m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_op;
    bool m_opHasBeenSet = false;

    bool m_isLastOp{false};
    bool m_isLastOpHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
