/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class CancelJobRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API CancelJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelJob"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    /**
     * The Job ID of the job to be cancelled.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The Job ID of the job to be cancelled.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The Job ID of the job to be cancelled.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The Job ID of the job to be cancelled.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The Job ID of the job to be cancelled.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The Job ID of the job to be cancelled.
     */
    inline CancelJobRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The Job ID of the job to be cancelled.
     */
    inline CancelJobRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The Job ID of the job to be cancelled.
     */
    inline CancelJobRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
