/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p>A structure that contains the information for one performance event that RUM
   * collects from a user session with your application.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/RumEvent">AWS API
   * Reference</a></p>
   */
  class RumEvent
  {
  public:
    AWS_CLOUDWATCHRUM_API RumEvent();
    AWS_CLOUDWATCHRUM_API RumEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API RumEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string containing details about the event.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>A string containing details about the event.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>A string containing details about the event.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>A string containing details about the event.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>A string containing details about the event.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>A string containing details about the event.</p>
     */
    inline RumEvent& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>A string containing details about the event.</p>
     */
    inline RumEvent& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>A string containing details about the event.</p>
     */
    inline RumEvent& WithDetails(const char* value) { SetDetails(value); return *this;}


    /**
     * <p>A unique ID for this event.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique ID for this event.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique ID for this event.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique ID for this event.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique ID for this event.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique ID for this event.</p>
     */
    inline RumEvent& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique ID for this event.</p>
     */
    inline RumEvent& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique ID for this event.</p>
     */
    inline RumEvent& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Metadata about this event, which contains a JSON serialization of the
     * identity of the user for this session. The user information comes from
     * information such as the HTTP user-agent request header and document
     * interface.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Metadata about this event, which contains a JSON serialization of the
     * identity of the user for this session. The user information comes from
     * information such as the HTTP user-agent request header and document
     * interface.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Metadata about this event, which contains a JSON serialization of the
     * identity of the user for this session. The user information comes from
     * information such as the HTTP user-agent request header and document
     * interface.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Metadata about this event, which contains a JSON serialization of the
     * identity of the user for this session. The user information comes from
     * information such as the HTTP user-agent request header and document
     * interface.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Metadata about this event, which contains a JSON serialization of the
     * identity of the user for this session. The user information comes from
     * information such as the HTTP user-agent request header and document
     * interface.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>Metadata about this event, which contains a JSON serialization of the
     * identity of the user for this session. The user information comes from
     * information such as the HTTP user-agent request header and document
     * interface.</p>
     */
    inline RumEvent& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>Metadata about this event, which contains a JSON serialization of the
     * identity of the user for this session. The user information comes from
     * information such as the HTTP user-agent request header and document
     * interface.</p>
     */
    inline RumEvent& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>Metadata about this event, which contains a JSON serialization of the
     * identity of the user for this session. The user information comes from
     * information such as the HTTP user-agent request header and document
     * interface.</p>
     */
    inline RumEvent& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * <p>The exact time that this event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The exact time that this event occurred.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The exact time that this event occurred.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The exact time that this event occurred.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The exact time that this event occurred.</p>
     */
    inline RumEvent& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The exact time that this event occurred.</p>
     */
    inline RumEvent& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The JSON schema that denotes the type of event this is, such as a page load
     * or a new session.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The JSON schema that denotes the type of event this is, such as a page load
     * or a new session.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The JSON schema that denotes the type of event this is, such as a page load
     * or a new session.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The JSON schema that denotes the type of event this is, such as a page load
     * or a new session.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The JSON schema that denotes the type of event this is, such as a page load
     * or a new session.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The JSON schema that denotes the type of event this is, such as a page load
     * or a new session.</p>
     */
    inline RumEvent& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The JSON schema that denotes the type of event this is, such as a page load
     * or a new session.</p>
     */
    inline RumEvent& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The JSON schema that denotes the type of event this is, such as a page load
     * or a new session.</p>
     */
    inline RumEvent& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
