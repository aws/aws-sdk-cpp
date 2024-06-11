/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class DeleteVodSourceRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API DeleteVodSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVodSource"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the source location associated with this VOD Source.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }
    inline DeleteVodSourceRequest& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}
    inline DeleteVodSourceRequest& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}
    inline DeleteVodSourceRequest& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = value; }
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::move(value); }
    inline void SetVodSourceName(const char* value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName.assign(value); }
    inline DeleteVodSourceRequest& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}
    inline DeleteVodSourceRequest& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}
    inline DeleteVodSourceRequest& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
