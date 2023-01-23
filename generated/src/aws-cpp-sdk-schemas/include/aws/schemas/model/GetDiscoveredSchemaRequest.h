/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/SchemasRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/schemas/model/Type.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Schemas
{
namespace Model
{

  /**
   */
  class GetDiscoveredSchemaRequest : public SchemasRequest
  {
  public:
    AWS_SCHEMAS_API GetDiscoveredSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDiscoveredSchema"; }

    AWS_SCHEMAS_API Aws::String SerializePayload() const override;


    /**
     * <p>An array of strings where each string is a JSON event. These are the events
     * that were used to generate the schema. The array includes a single type of event
     * and has a maximum size of 10 events.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEvents() const{ return m_events; }

    /**
     * <p>An array of strings where each string is a JSON event. These are the events
     * that were used to generate the schema. The array includes a single type of event
     * and has a maximum size of 10 events.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>An array of strings where each string is a JSON event. These are the events
     * that were used to generate the schema. The array includes a single type of event
     * and has a maximum size of 10 events.</p>
     */
    inline void SetEvents(const Aws::Vector<Aws::String>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>An array of strings where each string is a JSON event. These are the events
     * that were used to generate the schema. The array includes a single type of event
     * and has a maximum size of 10 events.</p>
     */
    inline void SetEvents(Aws::Vector<Aws::String>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>An array of strings where each string is a JSON event. These are the events
     * that were used to generate the schema. The array includes a single type of event
     * and has a maximum size of 10 events.</p>
     */
    inline GetDiscoveredSchemaRequest& WithEvents(const Aws::Vector<Aws::String>& value) { SetEvents(value); return *this;}

    /**
     * <p>An array of strings where each string is a JSON event. These are the events
     * that were used to generate the schema. The array includes a single type of event
     * and has a maximum size of 10 events.</p>
     */
    inline GetDiscoveredSchemaRequest& WithEvents(Aws::Vector<Aws::String>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>An array of strings where each string is a JSON event. These are the events
     * that were used to generate the schema. The array includes a single type of event
     * and has a maximum size of 10 events.</p>
     */
    inline GetDiscoveredSchemaRequest& AddEvents(const Aws::String& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>An array of strings where each string is a JSON event. These are the events
     * that were used to generate the schema. The array includes a single type of event
     * and has a maximum size of 10 events.</p>
     */
    inline GetDiscoveredSchemaRequest& AddEvents(Aws::String&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings where each string is a JSON event. These are the events
     * that were used to generate the schema. The array includes a single type of event
     * and has a maximum size of 10 events.</p>
     */
    inline GetDiscoveredSchemaRequest& AddEvents(const char* value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }


    /**
     * <p>The type of event.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The type of event.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of event.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of event.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of event.</p>
     */
    inline GetDiscoveredSchemaRequest& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The type of event.</p>
     */
    inline GetDiscoveredSchemaRequest& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_events;
    bool m_eventsHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
