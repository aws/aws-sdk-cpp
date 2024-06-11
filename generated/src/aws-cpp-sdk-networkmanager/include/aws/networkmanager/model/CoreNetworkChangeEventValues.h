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


    ///@{
    /**
     * <p>The edge location for the core network change event.</p>
     */
    inline const Aws::String& GetEdgeLocation() const{ return m_edgeLocation; }
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
    inline void SetEdgeLocation(const Aws::String& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = value; }
    inline void SetEdgeLocation(Aws::String&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::move(value); }
    inline void SetEdgeLocation(const char* value) { m_edgeLocationHasBeenSet = true; m_edgeLocation.assign(value); }
    inline CoreNetworkChangeEventValues& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}
    inline CoreNetworkChangeEventValues& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}
    inline CoreNetworkChangeEventValues& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment name if the change event is associated with a segment.</p>
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }
    inline CoreNetworkChangeEventValues& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}
    inline CoreNetworkChangeEventValues& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}
    inline CoreNetworkChangeEventValues& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The changed network function group name.</p>
     */
    inline const Aws::String& GetNetworkFunctionGroupName() const{ return m_networkFunctionGroupName; }
    inline bool NetworkFunctionGroupNameHasBeenSet() const { return m_networkFunctionGroupNameHasBeenSet; }
    inline void SetNetworkFunctionGroupName(const Aws::String& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = value; }
    inline void SetNetworkFunctionGroupName(Aws::String&& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = std::move(value); }
    inline void SetNetworkFunctionGroupName(const char* value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName.assign(value); }
    inline CoreNetworkChangeEventValues& WithNetworkFunctionGroupName(const Aws::String& value) { SetNetworkFunctionGroupName(value); return *this;}
    inline CoreNetworkChangeEventValues& WithNetworkFunctionGroupName(Aws::String&& value) { SetNetworkFunctionGroupName(std::move(value)); return *this;}
    inline CoreNetworkChangeEventValues& WithNetworkFunctionGroupName(const char* value) { SetNetworkFunctionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the attachment if the change event is associated with an
     * attachment. </p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline CoreNetworkChangeEventValues& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline CoreNetworkChangeEventValues& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline CoreNetworkChangeEventValues& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a <code>STATIC_ROUTE</code> event, this is the IP address.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline CoreNetworkChangeEventValues& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline CoreNetworkChangeEventValues& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline CoreNetworkChangeEventValues& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}
  private:

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet = false;

    Aws::String m_networkFunctionGroupName;
    bool m_networkFunctionGroupNameHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
