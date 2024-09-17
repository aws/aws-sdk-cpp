/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class GetStudioComponentRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API GetStudioComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetStudioComponent"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The studio component ID.</p>
     */
    inline const Aws::String& GetStudioComponentId() const{ return m_studioComponentId; }
    inline bool StudioComponentIdHasBeenSet() const { return m_studioComponentIdHasBeenSet; }
    inline void SetStudioComponentId(const Aws::String& value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId = value; }
    inline void SetStudioComponentId(Aws::String&& value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId = std::move(value); }
    inline void SetStudioComponentId(const char* value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId.assign(value); }
    inline GetStudioComponentRequest& WithStudioComponentId(const Aws::String& value) { SetStudioComponentId(value); return *this;}
    inline GetStudioComponentRequest& WithStudioComponentId(Aws::String&& value) { SetStudioComponentId(std::move(value)); return *this;}
    inline GetStudioComponentRequest& WithStudioComponentId(const char* value) { SetStudioComponentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }
    inline GetStudioComponentRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline GetStudioComponentRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline GetStudioComponentRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}
  private:

    Aws::String m_studioComponentId;
    bool m_studioComponentIdHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
