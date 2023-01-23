/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/SourceType.h>
#include <aws/core/utils/DateTime.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Represents a single occurrence of something interesting within the system.
   * Some examples of events are creating a cluster or adding or removing a
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Event">AWS API
   * Reference</a></p>
   */
  class Event
  {
  public:
    AWS_MEMORYDB_API Event();
    AWS_MEMORYDB_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name for the source of the event. For example, if the event occurred at
     * the cluster level, the identifier would be the name of the cluster.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }

    /**
     * <p>The name for the source of the event. For example, if the event occurred at
     * the cluster level, the identifier would be the name of the cluster.</p>
     */
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }

    /**
     * <p>The name for the source of the event. For example, if the event occurred at
     * the cluster level, the identifier would be the name of the cluster.</p>
     */
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }

    /**
     * <p>The name for the source of the event. For example, if the event occurred at
     * the cluster level, the identifier would be the name of the cluster.</p>
     */
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }

    /**
     * <p>The name for the source of the event. For example, if the event occurred at
     * the cluster level, the identifier would be the name of the cluster.</p>
     */
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }

    /**
     * <p>The name for the source of the event. For example, if the event occurred at
     * the cluster level, the identifier would be the name of the cluster.</p>
     */
    inline Event& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}

    /**
     * <p>The name for the source of the event. For example, if the event occurred at
     * the cluster level, the identifier would be the name of the cluster.</p>
     */
    inline Event& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}

    /**
     * <p>The name for the source of the event. For example, if the event occurred at
     * the cluster level, the identifier would be the name of the cluster.</p>
     */
    inline Event& WithSourceName(const char* value) { SetSourceName(value); return *this;}


    /**
     * <p>Specifies the origin of this event - a cluster, a parameter group, a security
     * group, etc.</p>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>Specifies the origin of this event - a cluster, a parameter group, a security
     * group, etc.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>Specifies the origin of this event - a cluster, a parameter group, a security
     * group, etc.</p>
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>Specifies the origin of this event - a cluster, a parameter group, a security
     * group, etc.</p>
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>Specifies the origin of this event - a cluster, a parameter group, a security
     * group, etc.</p>
     */
    inline Event& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>Specifies the origin of this event - a cluster, a parameter group, a security
     * group, etc.</p>
     */
    inline Event& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>The text of the event.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The text of the event.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The text of the event.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The text of the event.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The text of the event.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The text of the event.</p>
     */
    inline Event& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The text of the event.</p>
     */
    inline Event& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The text of the event.</p>
     */
    inline Event& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline Event& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}

    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline Event& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}

  private:

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
