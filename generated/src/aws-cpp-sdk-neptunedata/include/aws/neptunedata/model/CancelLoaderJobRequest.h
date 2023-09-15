/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace neptunedata
{
namespace Model
{

  /**
   */
  class CancelLoaderJobRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API CancelLoaderJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelLoaderJob"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the load job to be deleted.</p>
     */
    inline const Aws::String& GetLoadId() const{ return m_loadId; }

    /**
     * <p>The ID of the load job to be deleted.</p>
     */
    inline bool LoadIdHasBeenSet() const { return m_loadIdHasBeenSet; }

    /**
     * <p>The ID of the load job to be deleted.</p>
     */
    inline void SetLoadId(const Aws::String& value) { m_loadIdHasBeenSet = true; m_loadId = value; }

    /**
     * <p>The ID of the load job to be deleted.</p>
     */
    inline void SetLoadId(Aws::String&& value) { m_loadIdHasBeenSet = true; m_loadId = std::move(value); }

    /**
     * <p>The ID of the load job to be deleted.</p>
     */
    inline void SetLoadId(const char* value) { m_loadIdHasBeenSet = true; m_loadId.assign(value); }

    /**
     * <p>The ID of the load job to be deleted.</p>
     */
    inline CancelLoaderJobRequest& WithLoadId(const Aws::String& value) { SetLoadId(value); return *this;}

    /**
     * <p>The ID of the load job to be deleted.</p>
     */
    inline CancelLoaderJobRequest& WithLoadId(Aws::String&& value) { SetLoadId(std::move(value)); return *this;}

    /**
     * <p>The ID of the load job to be deleted.</p>
     */
    inline CancelLoaderJobRequest& WithLoadId(const char* value) { SetLoadId(value); return *this;}

  private:

    Aws::String m_loadId;
    bool m_loadIdHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
