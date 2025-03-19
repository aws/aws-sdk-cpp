/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class GetTrackRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetTrackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTrack"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the track of which its version is fetched.</p>
     */
    inline const Aws::String& GetTrackName() const { return m_trackName; }
    inline bool TrackNameHasBeenSet() const { return m_trackNameHasBeenSet; }
    template<typename TrackNameT = Aws::String>
    void SetTrackName(TrackNameT&& value) { m_trackNameHasBeenSet = true; m_trackName = std::forward<TrackNameT>(value); }
    template<typename TrackNameT = Aws::String>
    GetTrackRequest& WithTrackName(TrackNameT&& value) { SetTrackName(std::forward<TrackNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackName;
    bool m_trackNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
