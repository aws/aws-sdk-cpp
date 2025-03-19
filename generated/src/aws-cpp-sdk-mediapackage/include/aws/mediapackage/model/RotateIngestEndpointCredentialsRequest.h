/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

  /**
   */
  class RotateIngestEndpointCredentialsRequest : public MediaPackageRequest
  {
  public:
    AWS_MEDIAPACKAGE_API RotateIngestEndpointCredentialsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RotateIngestEndpointCredentials"; }

    AWS_MEDIAPACKAGE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the channel the IngestEndpoint is on.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RotateIngestEndpointCredentialsRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The id of the IngestEndpoint whose credentials should be rotated
     */
    inline const Aws::String& GetIngestEndpointId() const { return m_ingestEndpointId; }
    inline bool IngestEndpointIdHasBeenSet() const { return m_ingestEndpointIdHasBeenSet; }
    template<typename IngestEndpointIdT = Aws::String>
    void SetIngestEndpointId(IngestEndpointIdT&& value) { m_ingestEndpointIdHasBeenSet = true; m_ingestEndpointId = std::forward<IngestEndpointIdT>(value); }
    template<typename IngestEndpointIdT = Aws::String>
    RotateIngestEndpointCredentialsRequest& WithIngestEndpointId(IngestEndpointIdT&& value) { SetIngestEndpointId(std::forward<IngestEndpointIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ingestEndpointId;
    bool m_ingestEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
