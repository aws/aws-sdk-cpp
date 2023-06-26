/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network change event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkChangeEventValues">AWS
   * API Reference</a></p>
   */
  class CoreNetworkChangeEventValues
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkChangeEventValues();
    AWS_NETWORKMANAGER_API CoreNetworkChangeEventValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkChangeEventValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The edge location for the core network change event.</p>
     */
    inline const Aws::String& GetEdgeLocation() const{ return m_edgeLocation; }

    /**
     * <p>The edge location for the core network change event.</p>
     */
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }

    /**
     * <p>The edge location for the core network change event.</p>
     */
    inline void SetEdgeLocation(const Aws::String& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = value; }

    /**
     * <p>The edge location for the core network change event.</p>
     */
    inline void SetEdgeLocation(Aws::String&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::move(value); }

    /**
     * <p>The edge location for the core network change event.</p>
     */
    inline void SetEdgeLocation(const char* value) { m_edgeLocationHasBeenSet = true; m_edgeLocation.assign(value); }

    /**
     * <p>The edge location for the core network change event.</p>
     */
    inline CoreNetworkChangeEventValues& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}

    /**
     * <p>The edge location for the core network change event.</p>
     */
    inline CoreNetworkChangeEventValues& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}

    /**
     * <p>The edge location for the core network change event.</p>
     */
    inline CoreNetworkChangeEventValues& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}


    /**
     * <p>The segment name if the change event is associated with a segment.</p>
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }

    /**
     * <p>The segment name if the change event is associated with a segment.</p>
     */
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }

    /**
     * <p>The segment name if the change event is associated with a segment.</p>
     */
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }

    /**
     * <p>The segment name if the change event is associated with a segment.</p>
     */
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }

    /**
     * <p>The segment name if the change event is associated with a segment.</p>
     */
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }

    /**
     * <p>The segment name if the change event is associated with a segment.</p>
     */
    inline CoreNetworkChangeEventValues& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}

    /**
     * <p>The segment name if the change event is associated with a segment.</p>
     */
    inline CoreNetworkChangeEventValues& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}

    /**
     * <p>The segment name if the change event is associated with a segment.</p>
     */
    inline CoreNetworkChangeEventValues& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}


    /**
     * <p>The ID of the attachment if the change event is associated with an
     * attachment. </p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }

    /**
     * <p>The ID of the attachment if the change event is associated with an
     * attachment. </p>
     */
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }

    /**
     * <p>The ID of the attachment if the change event is associated with an
     * attachment. </p>
     */
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }

    /**
     * <p>The ID of the attachment if the change event is associated with an
     * attachment. </p>
     */
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }

    /**
     * <p>The ID of the attachment if the change event is associated with an
     * attachment. </p>
     */
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }

    /**
     * <p>The ID of the attachment if the change event is associated with an
     * attachment. </p>
     */
    inline CoreNetworkChangeEventValues& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>The ID of the attachment if the change event is associated with an
     * attachment. </p>
     */
    inline CoreNetworkChangeEventValues& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment if the change event is associated with an
     * attachment. </p>
     */
    inline CoreNetworkChangeEventValues& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}


    /**
     * <p>For a <code>STATIC_ROUTE</code> event, this is the IP address.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>For a <code>STATIC_ROUTE</code> event, this is the IP address.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>For a <code>STATIC_ROUTE</code> event, this is the IP address.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>For a <code>STATIC_ROUTE</code> event, this is the IP address.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>For a <code>STATIC_ROUTE</code> event, this is the IP address.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>For a <code>STATIC_ROUTE</code> event, this is the IP address.</p>
     */
    inline CoreNetworkChangeEventValues& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>For a <code>STATIC_ROUTE</code> event, this is the IP address.</p>
     */
    inline CoreNetworkChangeEventValues& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>For a <code>STATIC_ROUTE</code> event, this is the IP address.</p>
     */
    inline CoreNetworkChangeEventValues& WithCidr(const char* value) { SetCidr(value); return *this;}

  private:

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
