/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/neptunedata/model/SparqlData.h>
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
   * <p>A serialized SPARQL stream record capturing a change-log entry for the RDF
   * graph.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/SparqlRecord">AWS
   * API Reference</a></p>
   */
  class SparqlRecord
  {
  public:
    AWS_NEPTUNEDATA_API SparqlRecord();
    AWS_NEPTUNEDATA_API SparqlRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API SparqlRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the commit for the transaction was requested, in
     * milliseconds from the Unix epoch.</p>
     */
    inline long long GetCommitTimestampInMillis() const{ return m_commitTimestampInMillis; }
    inline bool CommitTimestampInMillisHasBeenSet() const { return m_commitTimestampInMillisHasBeenSet; }
    inline void SetCommitTimestampInMillis(long long value) { m_commitTimestampInMillisHasBeenSet = true; m_commitTimestampInMillis = value; }
    inline SparqlRecord& WithCommitTimestampInMillis(long long value) { SetCommitTimestampInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sequence identifier of the stream change record.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::Map<Aws::String, Aws::String>& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::Map<Aws::String, Aws::String>&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline SparqlRecord& WithEventId(const Aws::Map<Aws::String, Aws::String>& value) { SetEventId(value); return *this;}
    inline SparqlRecord& WithEventId(Aws::Map<Aws::String, Aws::String>&& value) { SetEventId(std::move(value)); return *this;}
    inline SparqlRecord& AddEventId(const Aws::String& key, const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId.emplace(key, value); return *this; }
    inline SparqlRecord& AddEventId(Aws::String&& key, const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId.emplace(std::move(key), value); return *this; }
    inline SparqlRecord& AddEventId(const Aws::String& key, Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId.emplace(key, std::move(value)); return *this; }
    inline SparqlRecord& AddEventId(Aws::String&& key, Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId.emplace(std::move(key), std::move(value)); return *this; }
    inline SparqlRecord& AddEventId(const char* key, Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId.emplace(key, std::move(value)); return *this; }
    inline SparqlRecord& AddEventId(Aws::String&& key, const char* value) { m_eventIdHasBeenSet = true; m_eventId.emplace(std::move(key), value); return *this; }
    inline SparqlRecord& AddEventId(const char* key, const char* value) { m_eventIdHasBeenSet = true; m_eventId.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The serialized SPARQL change record. The serialization formats of each record
     * are described in more detail in <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/streams-change-formats.html">Serialization
     * Formats in Neptune Streams</a>.</p>
     */
    inline const SparqlData& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const SparqlData& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(SparqlData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline SparqlRecord& WithData(const SparqlData& value) { SetData(value); return *this;}
    inline SparqlRecord& WithData(SparqlData&& value) { SetData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation that created the change.</p>
     */
    inline const Aws::String& GetOp() const{ return m_op; }
    inline bool OpHasBeenSet() const { return m_opHasBeenSet; }
    inline void SetOp(const Aws::String& value) { m_opHasBeenSet = true; m_op = value; }
    inline void SetOp(Aws::String&& value) { m_opHasBeenSet = true; m_op = std::move(value); }
    inline void SetOp(const char* value) { m_opHasBeenSet = true; m_op.assign(value); }
    inline SparqlRecord& WithOp(const Aws::String& value) { SetOp(value); return *this;}
    inline SparqlRecord& WithOp(Aws::String&& value) { SetOp(std::move(value)); return *this;}
    inline SparqlRecord& WithOp(const char* value) { SetOp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only present if this operation is the last one in its transaction. If
     * present, it is set to true. It is useful for ensuring that an entire transaction
     * is consumed.</p>
     */
    inline bool GetIsLastOp() const{ return m_isLastOp; }
    inline bool IsLastOpHasBeenSet() const { return m_isLastOpHasBeenSet; }
    inline void SetIsLastOp(bool value) { m_isLastOpHasBeenSet = true; m_isLastOp = value; }
    inline SparqlRecord& WithIsLastOp(bool value) { SetIsLastOp(value); return *this;}
    ///@}
  private:

    long long m_commitTimestampInMillis;
    bool m_commitTimestampInMillisHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_eventId;
    bool m_eventIdHasBeenSet = false;

    SparqlData m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_op;
    bool m_opHasBeenSet = false;

    bool m_isLastOp;
    bool m_isLastOpHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
