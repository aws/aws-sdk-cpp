/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/EndpointBatchItem.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies a batch of endpoints to create or update and the settings and
   * attributes to set or change for each endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointBatchRequest">AWS
   * API Reference</a></p>
   */
  class EndpointBatchRequest
  {
  public:
    AWS_PINPOINT_API EndpointBatchRequest();
    AWS_PINPOINT_API EndpointBatchRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EndpointBatchRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array that defines the endpoints to create or update and, for each
     * endpoint, the property values to set or change. An array can contain a maximum
     * of 100 items.</p>
     */
    inline const Aws::Vector<EndpointBatchItem>& GetItem() const{ return m_item; }

    /**
     * <p>An array that defines the endpoints to create or update and, for each
     * endpoint, the property values to set or change. An array can contain a maximum
     * of 100 items.</p>
     */
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }

    /**
     * <p>An array that defines the endpoints to create or update and, for each
     * endpoint, the property values to set or change. An array can contain a maximum
     * of 100 items.</p>
     */
    inline void SetItem(const Aws::Vector<EndpointBatchItem>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>An array that defines the endpoints to create or update and, for each
     * endpoint, the property values to set or change. An array can contain a maximum
     * of 100 items.</p>
     */
    inline void SetItem(Aws::Vector<EndpointBatchItem>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }

    /**
     * <p>An array that defines the endpoints to create or update and, for each
     * endpoint, the property values to set or change. An array can contain a maximum
     * of 100 items.</p>
     */
    inline EndpointBatchRequest& WithItem(const Aws::Vector<EndpointBatchItem>& value) { SetItem(value); return *this;}

    /**
     * <p>An array that defines the endpoints to create or update and, for each
     * endpoint, the property values to set or change. An array can contain a maximum
     * of 100 items.</p>
     */
    inline EndpointBatchRequest& WithItem(Aws::Vector<EndpointBatchItem>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p>An array that defines the endpoints to create or update and, for each
     * endpoint, the property values to set or change. An array can contain a maximum
     * of 100 items.</p>
     */
    inline EndpointBatchRequest& AddItem(const EndpointBatchItem& value) { m_itemHasBeenSet = true; m_item.push_back(value); return *this; }

    /**
     * <p>An array that defines the endpoints to create or update and, for each
     * endpoint, the property values to set or change. An array can contain a maximum
     * of 100 items.</p>
     */
    inline EndpointBatchRequest& AddItem(EndpointBatchItem&& value) { m_itemHasBeenSet = true; m_item.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EndpointBatchItem> m_item;
    bool m_itemHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
