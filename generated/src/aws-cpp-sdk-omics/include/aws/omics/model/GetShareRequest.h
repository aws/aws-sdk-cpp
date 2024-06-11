/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class GetShareRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API GetShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetShare"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the share.</p>
     */
    inline const Aws::String& GetShareId() const{ return m_shareId; }
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }
    inline void SetShareId(const Aws::String& value) { m_shareIdHasBeenSet = true; m_shareId = value; }
    inline void SetShareId(Aws::String&& value) { m_shareIdHasBeenSet = true; m_shareId = std::move(value); }
    inline void SetShareId(const char* value) { m_shareIdHasBeenSet = true; m_shareId.assign(value); }
    inline GetShareRequest& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}
    inline GetShareRequest& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}
    inline GetShareRequest& WithShareId(const char* value) { SetShareId(value); return *this;}
    ///@}
  private:

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
